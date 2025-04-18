//Given a sentence 'str',return the word that is occuring most nuber of times in that 
//sentence.
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="raghav is maths teacher";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
       cout<< temp<<endl;
       v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    int cout=0;

    for(int i=0;i<=v.size();i++){
        for(int j=i+1;j<=v.size();j++){
            if(v[i])
        }
    }

}