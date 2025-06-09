#include<iostream>
using namespace std;
int reg(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<endl;
    reg(n-1);
    
}
int main(){
    int n;
    reg(5);

}