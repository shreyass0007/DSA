//StringStream class
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="raghav is maths teacher";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
       cout<< temp<<endl;
    }

}