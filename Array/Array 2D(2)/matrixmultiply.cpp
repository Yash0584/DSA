#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows in the first matrix: ";
    cin >> m;
    cout << "Enter the number of columns in the first matrix: ";
    cin >> n;

    int arr[100][100]; // static allocation with a safe limit
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nFIRST MATRIX:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int k, l;
    cout << "Enter the number of rows in the second matrix: ";
    cin >> k;
    cout << "Enter the number of columns in the second matrix: ";
    cin >> l;

    int brr[100][100];
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < l; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> brr[i][j];
        }
    }

    cout << "\nSECOND MATRIX:\n";
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < l; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    // Matrix multiplication condition
    if(n == k) {
        int crr[100][100] = {0}; // initialize result matrix to 0

        // Matrix multiplication logic
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < l; j++) {
                for(int x = 0; x < n; x++) {
                    crr[i][j] += arr[i][x] * brr[x][j];
                }
            }
        }

        cout << "\nMATRIX MULTIPLICATION RESULT:\n";
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < l; j++) {
                cout << crr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMatrix multiplication NOT POSSIBLE (columns of first != rows of second)\n";
    }

    return 0;
}
