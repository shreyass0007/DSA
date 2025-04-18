#include <iostream>
using namespace std;

int main() {
    char str[6] = {
        'H', 'e', 'l', 'l', 'o', '\0'
    };
    ;
    char str1[6] = {
        'w', 'o', 'r', 'l', 'd', '\0'
    };
    
    for(int i = 0; i < 5; i++) {
        cout << str[i] << "";
    }
    cout<<" ";
    for(int j = 0; str[j]!='\0'; j++) {
        cout << str1[j] << "";
    }
    string str2="Hello World";
    
    cout<<endl;
    cout<<str<<endl;

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str2[0]<<endl;
    return 0;
}