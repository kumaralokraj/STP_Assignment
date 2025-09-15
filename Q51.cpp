#include <iostream>
using namespace std;

int main() {
    int rows = 7;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1)
                cout << "*"; // Simulated blue asterisk
            else
                cout << "*"; // Simulated black asterisk
        }
        cout << endl;
    }

    return 0;
}