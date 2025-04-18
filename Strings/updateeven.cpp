#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";
    cout << str << endl;
   
    // Use string.length() instead of null terminator check
    for(int i = 0; i < str.length(); i++) {
        if(i % 2 == 0) {
            str[i] = 'a';
        }
    }
    cout << str << endl;
        
    return 0;
}