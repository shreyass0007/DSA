#include<iostream>
#include<climits>
using namespace std;

void printMax(int arr[], int n, int idx, int max) {  // Changed 'x' to 'idx' to match the parameter name
    if (idx == n) {  // Changed '=' to '==' for comparison
        cout << max;
        return;
    }
    if (max < arr[idx]) max = arr[idx];
    printMax(arr, n, idx + 1, max);  // Fixed the parameter name from 'x' to 'idx'
}

int main() {
    int arr[] = {2, 1, 3, 6, 3, 9, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printMax(arr, n, 0, INT_MIN);
    return 0;
}