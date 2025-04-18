#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, p, q;

    cout << "Enter rows of 1st matrix: ";
    cin >> m;
    cout << "Enter columns of 1st matrix: ";
    cin >> n;
    cout << "Enter rows of 2nd matrix: ";
    cin >> p;
    cout << "Enter columns of 2nd matrix: ";
    cin >> q;

    if (n != p) {
        cout << "Multiplication is not possible";
        return 0;
    }

    // Define matrices
    vector<vector<int>> a(m, vector<int>(n));
    vector<vector<int>> b(p, vector<int>(q));
    vector<vector<int>> res(m, vector<int>(q, 0)); // initialized with 0

    // Input matrix A
    cout << "Enter elements of 1st matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    // Input matrix B
    cout << "Enter elements of 2nd matrix:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];

    // Matrix multiplication
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < n; k++)
                res[i][j] += a[i][k] * b[k][j];

    // Output result
    cout << "The resultant matrix is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
