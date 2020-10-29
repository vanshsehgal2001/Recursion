#include <iostream>
#include <string>
using namespace std;
void helper(int num,string output){
    string combo[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num == 0 || num ==1 ){
        cout<<output<<endl;
        return;
    }
    int temp=num%10;
    string s=combo[temp];
    int k=0;
    for(int i=0;i<s.size();i++){
        helper(num/10,s[k]+output);
        k++;
    }
}

void printKeypad(int num){
    string output="";
    helper(num,output);
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
