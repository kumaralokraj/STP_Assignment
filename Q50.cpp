#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            cout << " ";  // Print leading spaces
        for (int star = 1; star <= i; star++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
