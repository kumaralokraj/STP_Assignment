#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    long long first = 0, second = 1, next;

    if (num == 0 || num == 1) {
        cout << num << " is in the Fibonacci series." << endl;
        return 0;
    }

    next = first + second;
    while (next <= num) {
        if (next == num) {
            cout << num << " is in the Fibonacci series." << endl;
            return 0;
        }
        first = second;
        second = next;
        next = first + second;
    }

    cout << num << " is NOT in the Fibonacci series." << endl;
    return 0;
}
