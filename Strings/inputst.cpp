//Input a string of length greater than 5 and reverse 
//the substring from postion 2 to 5 using inbuilt functions.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string of length greate than 5:";
    getline(cin,str);
    int n=str.length();
    if(n<=5){
        cout<<"Lenghth of string is less than or equal to 5";
    }
    else{
        reverse(str.begin()+2,str.begin()+6);
        cout<<str<<endl;
    }
    
}