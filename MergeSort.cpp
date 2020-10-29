#include <iostream>
using namespace std;

void helper2(int input[],int start,int end){
    int mid=(start+end)/2;
    int i=start;
    int j=mid+1;
    int temp[1000];
    int k=start;
    while(i<=mid && j<=end){
        if(input[i]<input[j]){
            temp[k++]=input[i++];
        }
        else{
            temp[k++]=input[j++];
        }
    }
    while(i<=mid){
        temp[k++]=input[i++];
    }
    while(j<=end){
        temp[k++]=input[j++];
    }
    for(int i=start;i<=end;i++){
        input[i]=temp[i];
    }
}

void helper1(int input[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    helper1(input,start,mid);
    helper1(input,mid+1,end);
    
    helper2(input,start,end);
}

void mergeSort(int input[], int size){
	int start=0;
    int end=size-1;
    helper1(input,start,end);
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
