#include <iostream>
using namespace std;

int subsequence(string input,string output[]){
    if(input[0] == '\0'){
        output[0]="";
        return 1;
    }
    int ans=subsequence(input.substr(1),output);
    for(int i=0;i<ans;i++){
        output[i+ans]=input[0]+output[i];
    }
    return 2*ans;
}

int main(){
    string input;
    cin>>input;
    string* output=new string[1000];
    int count=subsequence(input,output);
    for(int i=0;i<count;i++){
        cout<<i+1<<" -> "<<output[i]<<endl;
    }
}
