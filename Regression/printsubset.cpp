#include <iostream>
using namespace std;

void printsubset(string ans, string original) {
    if (original == "") {
        cout << ans << endl;
        return;
    }
    char ch = original[0];
    // Include the current character
    printsubset(ans + ch, original.substr(1));
    // Exclude the current character
    printsubset(ans, original.substr(1));
}

int main() {
    string str = "abc";
    printsubset("", str);  // Start with an empty answer string
    return 0;
}