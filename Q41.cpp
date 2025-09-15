#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000 are:" << endl;
        for (int n = 1; n < 1000; n++) {
        int original = n;
        int digits = 0, sum = 0, temp = n;

        // Count digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = n;
        // Calculate sum of digits^digits
        while (temp != 0) {
            int remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }
        if (sum == original) {
            cout << original << " ";
        }
    }

    cout << endl;
    return 0;
}

