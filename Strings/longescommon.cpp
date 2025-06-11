//Given n string consisting of digits from 0 to 9.
//REturn the index of string which has maximum valud.(Take 0 based indexing)

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
   //["flower","flow","flight"]
   vector<string> v;
   v.push_back("flower");
   v.push_back("flow");
   v.push_back("flight");
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<endl;
   }
   cout<<endl;
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<endl;
   }
}