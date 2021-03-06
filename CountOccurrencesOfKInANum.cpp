#include <iostream>
using namespace std;

int countOccurrencesRec(int n,int k){
    if(n==0){
        return 0;
    }
    int num=n%10;
    if(num==k){
        return 1+countOccurrencesRec(n/10,k);
    }
    return countOccurrencesRec(n/10,k);
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<countOccurrencesRec(n,k);
    return 0;
}
