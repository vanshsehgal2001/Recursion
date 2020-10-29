#include<iostream>
#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    if(input[0]=='\0'){
        output[0]="";
        return 1;
    }
    int size1=0,size2=0;
    string s1[10000],s2[10000];
    int num=input[0]-'0';
    char x=num-1+'a';
    char y='\0';
    size1=getCodes(input.substr(1),s1);
    if(input[1]!='\0'){
        int temp=num*10+input[1]-'0';
        if(temp>=10 && temp<=26){
        	y=temp-1+'a';
    		size2=getCodes(input.substr(2),s2);
        }
    }
    int j=0;
    for(int i=0;i<size1;i++){
        output[j++]=x+s1[i];
    }
    for(int i=0;i<size2;i++){
        output[j++]=y+s2[i];
    }
    return j;
}
int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
