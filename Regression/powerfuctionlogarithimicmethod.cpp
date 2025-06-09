#include<iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) return 1;
    int half = pow(x, n / 2);
    if (n % 2 == 0) return half * half;
    else return half * half * x;
}

int main() {
    cout << pow(3, 6)<<endl; // Output: 6561
    
}
