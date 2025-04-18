#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of rows and columns :";
    cin>>n;
   
    int a[n][n];
    cout<<"Enter the elemets of the matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"The original matrix is:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    //Traspose of the matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            //swapping of i,j and j,i
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    cout<<"The transpose of the matrix is:"<<endl;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }


}