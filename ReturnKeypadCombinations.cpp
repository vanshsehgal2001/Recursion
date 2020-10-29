#include <string>
#include<iostream>
using namespace std;

    int keypad(int num, string output[]){
    if(num==0||num==1)
    {  output[0]="";
        return 1;
    }
    
    int ans =keypad(num/10, output);
    if((num%10)==2)
    {    
         for(int i=0; i<ans ; i++)
         {  string s=output[i];
             output[i]=  s+"a";
             output[ans+i]=  s+"b";
             output[2*ans+i]= s+ "c";
         }
        return 3*ans;
    }
    
    if((num%10)==3)
    {    
         for(int i=0; i<ans ; i++)
         {               
              string s=output[i];
             output[i]=  s+"d";
             output[ans+i]=  s+"e";
             output[2*ans+i]= s+ "f";
         }return 3*ans;
    }
    if((num%10)==4)
    {    
         for(int i=0; i<ans ; i++)
         {
              string s=output[i];
             output[i]=  s+"g";
             output[ans+i]=  s+"h";
             output[2*ans+i]= s+ "i";
         }return 3*ans;
    }
    if((num%10)==5)
    {    
         for(int i=0; i<ans ; i++)
         {
              string s=output[i];
             output[i]=  s+"j";
             output[ans+i]=  s+"k";
             output[2*ans+i]= s+ "l";
         }return 3*ans;
    }
    if((num%10)==6)
    {    
         for(int i=0; i<ans ; i++)
         {
              string s=output[i];
             output[i]=  s+"m";
             output[ans+i]=  s+"n";
             output[2*ans+i]= s+ "o";
         }return 3*ans;
    }
    if((num%10)==7)
    {    
         for(int i=0; i<ans ; i++)
         {
              string s=output[i];
             output[i]=  s+"p";
             output[ans+i]=  s+"q";
             output[2*ans+i]= s+ "r";
             output[3*ans+i] =s+"s";
         }return 4*ans;
    }
    if((num%10)==8)
    {    
         for(int i=0; i<ans ; i++)
         {
              string s=output[i];
             output[i]=  s+"t";
             output[ans+i]=  s+"u";
             output[2*ans+i]= s+ "v";
         }return 3*ans;
    }
    if((num%10)==9)
    {    
         for(int i=0; i<ans ; i++)
         {
              string s=output[i];
             output[i]=  s+"w";
             output[ans+i]=  s+"x";
             output[2*ans+i]= s+ "y";
            output[3*ans+i] =s+"z";

         }return 4*ans;
    }
    
    
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
