#include <iostream>
#include<vector>
#include<string>
using namespace std;

void printsubset(string ans, string original, vector<string> &v) {
    if (original == "") {
        v.push_back(ans);
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
    vector<string> v;
    printsubset("", str,v);  // Start with an empty answer string
    return 0;
}