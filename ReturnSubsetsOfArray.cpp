
#include <iostream>
using namespace std;

int helper(int input[],int n,int startIndex,int output[][20]){
    if(n==startIndex){
        output[0][0]=0;
        return 1;
    }
    int ans=helper(input,n,startIndex+1,output);
    for(int i=0;i<ans;i++){
        output[i+ans][0]=output[i][0]+1;
        output[i+ans][1]=input[startIndex];
        for(int j=1;j<=output[i][0];j++){
            output[i+ans][j+1]=output[i][j];
        }
    }
    return 2*ans;
}

int subset(int input[], int n, int output[][20]) {
    return helper(input,n,0,output);
}

int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
