#include<iostream>
using namespace std;
void sum(int sum,int n){
    if(n==0){
        cout<<i<<endl;
        return ;
    }
    sum(sum+n,n-1);
    
   
    
    
}
int main(){
   
    sum(0,5);

}