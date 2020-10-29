#include<iostream>
using namespace std;

void subsequences(string input,string output){
    if(input.size() == 0){
        cout<<output<<endl;
        return;
    }
    subsequences(input.substr(1),output);
    subsequences(input.substr(1),output+input[0]);
}

int main(){
    string input;
    cin>>input;
    string output;
    subsequences(input,output);
    return 0;
}
