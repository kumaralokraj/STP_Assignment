// Develop a program that converts a temperature from 
// Fahrenheit to Celsius or vice versa based on user input. The 
// user should specify the type of conversion. 
#include <iostream>
using namespace std;

int main() {
    char choice;
    double temp, converted;

    cout << "Temperature Conversion Program" << endl;
    cout << "Enter 'F' to convert Fahrenheit to Celsius" << endl;
    cout << "Enter 'C' to convert Celsius to Fahrenheit" << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << converted << "°C" << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << converted << "°F" << endl;
    } else {
        cout << "Invalid choice. Please enter 'F' or 'C'." << endl;
    }

    return 0;
}