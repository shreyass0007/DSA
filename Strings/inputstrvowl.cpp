#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Use fixed size array - assuming max 100 strings
    string str[100];  // Or any reasonable maximum size
    
    // Input strings
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    
    // Process each string from last to first
    for(int i = n-1; i >= 0; i--) {
        // Process each character in current string
        for(int j = 0; j < str[i].length(); j++) {
            char ch = str[i][j];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                cout << ch << " is a vowel" << endl;
            } else {
                cout << ch << " is not a vowel" << endl;
            }
        }
    }
    
    return 0;
}