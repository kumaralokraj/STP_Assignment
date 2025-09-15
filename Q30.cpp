#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;

    cout << "Enter two positive integers: ";
    cin >> a >> b;

    
    lcm = (a > b) ? a : b;

    
    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;

    return 0;
}

