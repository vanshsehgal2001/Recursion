#include <iostream>
#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
   	if(input[0] == '\0'){
        output[0]="";
        return 1;
    }
    string outp[10000];
    int size=returnPermutations(input.substr(1),outp);
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<=outp[i].length();j++){
            output[k++]=outp[i].substr(0,j)+input[0]+outp[i].substr(j);
        }
    }
    return k;
}

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
