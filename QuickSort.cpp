#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int helper2(int input[],int start,int end){
    int i=start-1;
    int j=start;
    int pivot=input[end];
    for(int j=start;j<end;j++){
        if(input[j]<=pivot){
            i++;
            // swap(input[i],input[j]);
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
        }
    }
    // swap(input[i+1],input[end]);
    int temp=input[i+1];
    input[i+1]=input[end];
    input[end]=temp;
    return i+1;
}

void helper1(int input[],int start,int end){
    if(start>=end){
        return;
    }
    int pivotIndex=helper2(input,start,end);
    helper1(input,start,pivotIndex-1);
    helper1(input,pivotIndex+1,end);
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    int start=0;
    int end=size-1;
    helper1(input,start,end);
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


