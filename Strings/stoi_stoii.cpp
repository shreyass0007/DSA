#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="123456";
    int x=stoi(str);
    cout<<x+1<<endl;

    //stoll()

    long long y=stoll(str);
    cout<<y;
}