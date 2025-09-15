#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    int n, original, remainder, result = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> n;
original = n;
// Count digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
 // Calculate sum of digits raised to the power of 'digits'
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    // Check Armstrong condition
    if (result == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is NOT an Armstrong number." << endl;

    return 0;
}

