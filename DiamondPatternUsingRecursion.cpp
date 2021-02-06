#include <iostream>
using namespace std;

void pattern(int rows,int spaces,int stars){
    if(stars>rows){
        return;
    }
    for(int i=0;i<spaces;i++){
        cout<<" ";
    }
    for(int i=0;i<stars;i++){
        cout<<"* ";
    }
    cout<<endl;
    pattern(rows,spaces-1,stars+1);
    if(stars<rows){
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        for(int i=0;i<stars;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int rows;
    cin>>rows;
    pattern(rows,rows-1,1);
    return 0;
}
