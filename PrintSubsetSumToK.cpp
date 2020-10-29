#include <iostream>
using namespace std;

void helper(int input[],int size,int output[],int n,int k){
	if(size==0){
        if(k==0){
            for(int i=0;i<n;i++){
                cout<<output[i]<<" ";
            }
            cout<<endl;
            return;
        }
        return;
    }
    helper(input+1,size-1,output,n,k);
    int arr[10000];
    int i;
    for(i=0;i<n;i++){
        arr[i]=output[i];
    }
    arr[i]=input[0];
    helper(input+1,size-1,arr,n+1,k-input[0]);
}
void printSubsetSumToK(int input[], int size, int k) {
    int n=0,output[10000];
    helper(input,size,output,n,k);
}

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
