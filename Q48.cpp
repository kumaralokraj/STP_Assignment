#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {         // Rows: 1 to 5
        for (int j = 1; j <= i; j++) {     // Columns: 1 to current row number
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}