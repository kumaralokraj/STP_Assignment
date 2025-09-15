// Write a program to calculate factorial of a number
#include <iostream>
using namespace std;

int main() {
    int N, sum = 1;
    cout << "Enter a positive integer N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        sum =sum* i;
    }

    cout << "Factorial is: " << sum << endl;
    return 0;
}