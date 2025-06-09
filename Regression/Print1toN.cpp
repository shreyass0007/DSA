#include<iostream>
using namespace std;
void reg(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    reg(i+1,n);
    

    
    
}
int main(){
    int n;
    int i=1;
    cout<<"Enter the number:";
    cin>>n;
    reg(1,n);

}