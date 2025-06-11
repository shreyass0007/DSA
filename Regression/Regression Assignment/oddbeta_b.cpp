// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.
#include<iostream>
using namespace std;
int sumodd(int a,int b){
    if(a>b||a==b) return 0;
    if(a%2!=0){
        return a+sumodd(a+1,b);
    }
    return sumodd(a+1,b);
    
   
    
}
int main(){
   cout<<sumodd(3,9);

}