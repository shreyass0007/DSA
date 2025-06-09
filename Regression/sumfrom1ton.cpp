#include<iostream>
using namespace std;
int sum(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return 0;
    } 
    sum(n+sum(n-1));
    
}
int main(){
    sum(0,4);
}