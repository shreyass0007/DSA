#include<iostream>
#include<string>
using namespace std;
int main(){
    int x=12345;
    string str=to_string(x);
    cout<<str<<endl;
    int n=str.length();
    cout<<n;
}