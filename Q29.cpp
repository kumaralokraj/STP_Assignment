#include <iostream>
using namespace std;

int main() {
    int num;
    bool Prime = true;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1) {
        Prime = false; 
    } else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                Prime = false;
                break; 
            }
        }
    }

    if (Prime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

