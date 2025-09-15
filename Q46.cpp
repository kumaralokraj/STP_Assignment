#include <iostream>
using namespace std;

int main() {
    int n = 7; // Size of the pattern (should be odd)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (
                (i == 0 && j >= n/2) ||               // Top horizontal
                (i == n-1 && j <= n/2) ||             // Bottom horizontal
                (j == 0 && i <= n/2) ||               // Left vertical
                (j == n-1 && i >= n/2) ||             // Right vertical
                (i == n/2) ||                         // Middle horizontal
                (j == n/2)                            // Middle vertical
            )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
