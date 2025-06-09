//Make a funcatio  which calculates the factorial of n using recursion
#include<iostream>
using namespace std;
void factUpto(int n){

}
int fun(int n){
    if(n==1||n==0) return 1;
    int ans=n*fun(n-1);
    return ans;
   
}
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    cout<<fun(n);

}
