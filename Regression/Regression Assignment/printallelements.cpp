#include<iostream>
using namespace std;
void print(int a[],int n){
    if(n<0)return;
    //int n = sizeof(arr) / sizeof(arr[0]);
    cout<<a[n]<<" ";
    print(a,n-1);
}

int main(){
    int a[5]={1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    print(a,n-1);
    cout<<" "<<endl;

}