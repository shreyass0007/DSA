#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows :";
    cin>>n;
    cout<<"Enter the number of colums:";
    cin>>m;
    int tne=n*m;
    int count=0;
    int a[n][m];
    cout<<"Enter the elemets of the matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            
        }
    }
    
    cout<<endl;

    //spiral matrix
    int minr=0, maxr=n-1, minc=0, maxc=m-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<"";
            count++;
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
    }

}