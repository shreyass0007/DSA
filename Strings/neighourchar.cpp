//Input a string and return the number of times the neghbouring characters
//aare different from each other.
// For example, if the input is "aabbcc", the output should be 3, because the pairs are (a,a), (b,b), and (c,c).

#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    string str;
    cout<<"Enter a string: ";
    cin>>str;;
    int n=str.length();
    for(int i=0;i<n-1;i++){
        if(i==0){
            if(str[i]!=str[i+1]){
                count++;
            }
        }
        
        
       else if(i==n-1){
            if(str[i]!=str[i-1]){
                count++;
            }
        }
                
            
       else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
            count++;
        
        }

    }
    cout<<endl;
    cout<<"The number of neighbouring characters that are different from each other is: "<<count<<endl;
    

    

}