//Given n string consisting of digits from 0 to 9.
//REturn the index of string which has maximum valud.(Take 0 based indexing)

#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"0123","0023","456","00182","940","002901"};
    int max=stoi(arr[0]);
    string maxS=arr[0];
    for(int i=1;i<=5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<maxS;
}