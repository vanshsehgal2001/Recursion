#include <iostream>
using namespace std;

void helper(int input[],int size,int output[],int n){
    if(size==0){
        for(int i=0;i<n;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    helper(input+1,size-1,output,n);
    int arr[50]={0},i;
    for(i=0;i<n;i++){
        arr[i]=output[i];
    }
    arr[i]=input[0];
    helper(input+1,size-1,arr,n+1);
}
void printSubsetsOfArray(int input[], int size) {
    // Write your code here
    int n=0;
    int output[50];
    helper(input,size,output,n);
}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
