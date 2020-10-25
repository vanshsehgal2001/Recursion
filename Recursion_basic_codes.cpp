
					//FACTORIAL PROGRAM
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    cout<<factorial(4);
    return 0;
}

					//POWER PROGRAM


#include <iostream>
using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}

int main()
{
    
    cout<<power(2,3);
    return 0;
}

					//PRINT PROGRAM

#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
} 

int main()
{
    
    print(6);
    return 0;
}

					//COUNT NUMBER OF DIGITS

#include <iostream>
using namespace std;

int num_digits(int num){
    if(num==0){
        return 0;
    }
    return 1+num_digits(num/10);
}
int main()
{
    
    cout<<num_digits(156);
    return 0;
}

					//Nth_FIBONNACI NUMBER

#include <iostream>
using namespace std;

int Nth_fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Nth_fib(n-1)+Nth_fib(n-2);
}
int main()
{
    
    cout<<Nth_fib(10);
    return 0;
}

					//IF THE ARRAY IS SORTED

#include <iostream>
using namespace std;
//METHOD 2
bool isSorted2(int *arr,int size){
    if(size==0||size==1){
        return true;
    }
    bool output=isSorted2(arr+1,size-1);
    if(!output){
        return false;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return true;
    }

}
//METHOD 1
bool isSorted1(int *arr,int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSorted1(arr+1,size-1);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<isSorted1(arr,size)<<endl;
    cout<<isSorted2(arr,size)<<endl;
    return 0;
}

							//SUM OF ELEMENTS IN ARRAY	

#include <iostream>
using namespace std;

int sum(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return sum(arr+1,size-1)+arr[0];
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<sum(arr,size)<<endl;
    return 0;
}
	
							//CHECK IF AN ELEMENT IS PRESENT IN ARRAY OR NOT

#include <iostream>
using namespace std;

bool isPresent(int *arr,int size,int x){
    if(size==0){
        return false;
    }
    if(arr[0]==x){
        return true;
    }
    return isPresent(arr+1,size-1,x);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<isPresent(arr,size,3)<<endl;
    return 0;
}

							//FIRST INDEX OF THE NUMBER IN ARRAY

#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
    if(size==0){
        return -1;
    }
    if(input[0]==x){
        return 0;
    }
    int ans=firstIndex(input+1,size-1,x);
	if(ans==-1){
        return -1;
    }
    return ans+1;
    
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}


							//LAST INDEX OF A NUMBER

#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
    if(size==0){
        return -1;
    }
    if(input[size-1]==x){
        return size-1;
    }
    int ans=lastIndex(input,size-1,x);
    if(ans==-1){
        return -1;
    }
    return ans;

}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}

							//ALL INDICES OF GIVEN NUMBER

#include<iostream>
using namespace std;

		//METHOD-1: IF WE DO TASK FOR FIRST INDEX AND RECURSE THE OTHER PART
int allIndexes(int input[], int size, int x, int output[]) {
    int i;
    if(size==0)
        return 0;
    int ans=allIndexes(input+1,size-1,x,output);
    for(i=0;i<ans;i++)
    {
        output[i]+=1;
    }
    if(input[0]==x)
    {
        for(i=ans-1;i>=0;i--)
        {
            output[i+1]=output[i];
        }
        output[0]=0;
        return ans+1;
    }
    else return ans;

}

		//METHOD-2: IF WE DO TASK FOR LAST ELEMENT AND RECURSE THE LEFT OUT PART
int allIndexes(int* input,int size,int x,int output[]){
    if(size==0){
        return 0;
    }
    int ans=allIndexes(input,size-1,x,output);
    if(input[size-1]==x){
        output[ans]=size-1;
        return ans+1;
    }
    else{
        return ans;
    }
}



int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


						//MULTIPLY 2 NUMBERS RECURSIVELY

#include <iostream>
using namespace std;

int multiply(int a,int b){
    if(b==0){
        return 0;
    }
    int ans=multiply(a,b-1);
    return a+ans;
}
int main()
{
    cout<<"Enter 2 numbers that u want to multiply"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b);
    return 0;
}


						//COUNT NO OF ZEROES

#include <iostream>
using namespace std;

int num_zeroes(int num){
    if(num==0){
        return 0;
    }
    int ans=num_zeroes(num/10);
    if(num%10==0){
        return ans+1;
    }
    else{
        return ans;
    }
}

int main()
{
    cout<<"Enter a number"<<endl;
    int num;
    cin>>num;
    cout<<num_zeroes(num);
    return 0;
}

						//POWER OF A NUMBER TO A NUMBER

#include <iostream>
#include<math.h>
using namespace std;

double geometric_sum(int num){
    if(num==0){
        return 1;
    }
    double sum=geometric_sum(num-1);
    double n=pow(2,num);
    n=1.0/n;
    return sum+n;
}

int main()
{
    cout<<"Enter a number"<<endl;
    int num;
    cin>>num;
    cout<<geometric_sum(num);
    return 0;
}

						//CHECK IF THE STRING IS PALINDROME

#include <iostream>
#include<string.h>
using namespace std;

bool helper(char input[],int start,int end){

	//IF LENGTH IS 0/1;
    if(start>=end){
        return true;
    }
    if(input[start]!=input[end]){
        return false;
    }
    bool ans=helper(input,start+1,end-1);
    return ans;
}

bool checkPalindrome(char input[]){
    int len=strlen(input);
    int start=0;
    int end=len-1;
    return helper(input,start,end);
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

						//SUM OF DIGITS OF A NUMBER

#include <iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int ans=sumOfDigits(n/10);
    return ans+n%10;
}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}


						//REPLACE EVERY PI WITH 3.14
						//(size of operator includes null character while
						//strlen does not)

#include <iostream>
#include<string.h>
using namespace std;

void helper(char input[],int start){
    if(input[start]=='\0'){
        return;
    }
    helper(input,start+1);
    if(input[start]=='p'&&input[start+1]=='i'){
        for(int i=strlen(input);i>=start+2;i--){
            input[i+2]=input[i];
        }
        input[start]='3';
        input[start+1]='.';
        input[start+2]='1';
        input[start+3]='4';
    }
}

void replacePi(char input[]){
    int start=0;
    helper(input,start);
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

							//REPLACE CHARACTER X FROM THE STRING

#include <iostream>
#include<string.h>
using namespace std;

void removeX(char input[]){
    int i;
    if(input[0]=='\0'){
        return;
    }
    removeX(input+1);
    if(input[0]=='x'){
        for(i=0;i<strlen(input);i++){
            input[i]=input[i+1];
        }
        input[i]='\0';
    }
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

							//CONVERT STRING TO INTEGER(e.g. 12345(STRING)->12345(INTEGER))

#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;

//METHOD-1: WE TAKE CARE OF LAST ELEMENT AND REST THE RECURSION HANDLES

int helper(char input[],int size){
    if(size==1){
        return input[0]-'0';
    }
    int ans= helper(input,size-1);
    int num=input[size-1]-'0';
    return ans*10+num;
}

int stringToNumber(char input[]){
    int size=strlen(input);
    return helper(input,size);
}

//METHOD-2: WE TAKE CARE OF FIRST ELEMENT AND REST THE RECURSION HANDLES

int stringToNumber(char input[]){
    int size=strlen(input);
    if(size==1){
        return input[0]-'0';
    }
    int ans=stringToNumber(input+1);
    int num=input[0]-'0';
    int k=pow(10,size-1);
    return num*k+ans;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

							//APPEND A STAR BETWEEN 2 SIMILAR CHARACTERS

#include <iostream>
#include<string.h>
using namespace std;

void pairStar(char input[]){
    if(input[0]=='\0'){
        return;
    }
    pairStar(input+1);
    if(input[0]==input[1]){
        for(int i=strlen(input);i>=1;i--){
            input[i+1]=input[i];
        }
        input[1]='*';
    }
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

							//TOWER OF HANOI

#include <iostream>
using namespace std;

void towerOfHanoi(int n,char source,char auxiliary,char destination){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,source,destination,auxiliary);
    cout<<source<<" "<<destination<<endl;
    towerOfHanoi(n-1,auxiliary,source,destination);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
					
							//REPLACE EVERY GIVEN CHARACTER C1 WITH C2

#include <iostream>
#include<string.h>
using namespace std;

void replaceCharacter(char input[],char c1,char c2){
    int size=strlen(input);
    if(size==0){
        return;
    }
    replaceCharacter(input+1,c1,c2);
    if(input[0]==c1){
        input[0]=c2;
    }
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}

							//REMOVE CONSECUTIVE DUPLICATES

#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char s[]){
    int i;
    if(s[0]=='\0'){
        return;
    }
    removeConsecutiveDuplicates(s+1);
    if(s[0]==s[1]){
        for(i=1;s[i]!='\0';i++){
            s[i]=s[i+1];
        }
        s[i]='\0';
    }
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
