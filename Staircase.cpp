#include <iostream>
using namespace std;


int staircase(int n){
    if(n==0||n==1)
        return 1;
    if(n==2)
        return 2;
    int a=staircase(n-1);
    int b=staircase(n-2);
    int c=staircase(n-3);
    return a+b+c;
}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
