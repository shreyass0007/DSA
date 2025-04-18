#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    // Input string
    string str = "raghav is a maths teacher. He is a DSA mentor as well.";
    stringstream ss(str);
    string temp;
    string maxword = "";  // Initialize with empty string instead of space
    vector<string> v;
    
    // Split string into words
    while(ss >> temp) {
        v.push_back(temp);
    }

    // Print original words
    cout << "Original words:" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    // Sort to group similar words
    sort(v.begin(), v.end());
    
    cout << "\nSorted words:" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    // Find most frequent word
    int maxCount = 0;
    for(int i = 0; i < v.size(); i++) {
        int count = 1;  // Current word counts as 1
        for(int j = i + 1; j < v.size(); j++) {
            if(v[i] == v[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxword = v[i];
        }
    }

    // Print results
    cout << "\nMost frequent word: " << maxword << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}