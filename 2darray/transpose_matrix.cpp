#include<iostream>
using namespace std;
int main(){
    int n m;
    cout<<"Enter the number of rows :";
    cin>>n;
    cout<<"Enter the number of colums:";
    cin>>m;
    int a[n][m];
    cout<<"Enter the elemets of the matrix :";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    cout<<"The original matrix is:";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //store the transposeof the matrix
    int t[m][n];
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            t[j][i]=arr[i][j];
        }
    }

    cout<<"The transpose of the matrix is:";
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}