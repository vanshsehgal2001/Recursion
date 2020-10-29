
#include <iostream>
#include <string.h>
using namespace std;
void helper(string input,string output){
    if(input[0]=='\0'){
        cout<<output<<endl;
        return;
    }
    int num=input[0]-'0';
    char x=num+'a'-1;
    helper(input.substr(1),output+x);
    char y='\0';
    if(input[1]!='\0'){
        int temp=num*10+input[1]-'0';
        if(temp>=10 && temp<=26){
            y=temp-1+'a';
            helper(input.substr(2),output+y);
        }
    }
}
void printAllPossibleCodes(string input) {
    string output="";
    helper(input,output);
}


int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
