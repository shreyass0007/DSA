//Input a string of even length and return the second half of that string in buils substring function
#include<isotream>
#include<string>
using namespace std;
int main(){
    string s="abcdef";
    string str;
    cout<<"Enter a stribng:";
    cin>>str;
    int n=str.length();
    if(n%2!=0){
        cout<<"Length of string is not even";
    }
    else{
        cout<<str.substr(n/2,n)<<endl;
    }

}