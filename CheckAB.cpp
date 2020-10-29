#include <iostream>
using namespace std;

bool helper(char input[]){
    if(input[0]=='\0')
        return true;
    if(input[0]=='a'){
        if(input[1]=='a'){
            return helper(input+1);
        }
        else if(input[1]=='b'){
            return helper(input+1);
        }
        if(input[1]=='\0'){
            return true;
        }
        else{
            return false;
        }
    }
    else if(input[0]=='b'){
        if(input[1]=='b'&& input[2]=='a'){
            return helper(input+2);
        }
        else if(input[1]=='b' && input[2]=='\0'){
            return true;
        }
        else{
            return false;
        }
    }
}

bool checkAB(char input[]) {
	if(input[0]=='a'){
        return helper(input+1);
    }
    else{
        return false;
    }
}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
