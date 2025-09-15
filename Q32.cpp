#include <iostream>
using namespace std;

int findFibonacci(int n) {
    if (n <= 0)
     return 0;
    if (n == 1) 
    return 1;

    int a = 0, b = 1, fib = 0;
    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    int n;
    cout << "Enter the position (N) of the Fibonacci term: ";
    cin >> n;

    int result = findFibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}

