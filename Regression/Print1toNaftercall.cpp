#include<iostream>
using namespace std;
int reg(int n){
    if(n==0){
        return 0;
    }
   
    reg(n-1);
    cout<<n<<endl;
    
}
int main(){
    int n;
    reg(5);

}