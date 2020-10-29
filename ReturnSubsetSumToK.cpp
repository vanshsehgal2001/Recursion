
#include <iostream>
using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int k) {
	if(n==0){
        if(k==0){
            output[0][0]=0;
            return 1;
        }
        return 0;
    }
    int size1,size2,outp1[10000][50],outp2[10000][50];
    size1=subsetSumToK(input+1,n-1,outp1,k-input[0]);
    size2=subsetSumToK(input+1,n-1,outp2,k);
    for(int i=0;i<size1;i++){
        output[i][0]=outp1[i][0]+1;
        output[i][1]=input[0];
        for(int j=1;j<=outp1[i][0];j++){
            output[i][j+1]=outp1[i][j];
        }
    }
    for(int i=0;i<size2;i++){
            output[size1+i][0]=outp2[i][0];
        for(int j=0;j<=outp2[i][0];j++){
            output[size1+i][j+1]=outp2[i][j+1];
        }
    }
    return size1+size2;
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
