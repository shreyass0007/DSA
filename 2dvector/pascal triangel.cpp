#include<iostream>
using namespace std;
int main(){
    int m=5;
    vector<vector<int>> v;

    for(int i=1;i<=5;i++){
        vector<int> a(i);
        v.push_back(a);
    }
    for(int i=0;i<=m;i++){
        vector<int> v1;
        for(int j=0;j<=i;j++){
            if(j==1 || j==i){
                
            }else{
                v1.push_back(v[i-1][j-1]+v[i-1][j]);
            }
        }
        v.push_back(v1);
    }
    //
    for(int i=0;i<=m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}