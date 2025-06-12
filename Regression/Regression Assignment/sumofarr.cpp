#include<iostream>
using namespace std;
void print(int arr[],int n){
    if(n==1){
        cout<<arr[0]<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if(i!=n-1){
            cout<<",";
        }
    }
    cout<<endl;
    int temp[n-1];
    for(int i=0;i<n;i++){
        temp[i]=arr[i]+arr[i+1];

    }
    print(temp,n-1);


}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);


}