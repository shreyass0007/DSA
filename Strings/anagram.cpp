//Given two strings s and t,return true if t is an anagram of s, and 
//false otherwise.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter the first string: ";
    getline(cin,s);
    cout<<"Enter the second string: ";
    getline(cin,t);
    
    // Sort both strings
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    
    if(s==t){
        cout<<"The strings are anagrams."<<endl;
    }
    else{
        cout<<"The strings are not anagrams."<<endl;
    }

}
