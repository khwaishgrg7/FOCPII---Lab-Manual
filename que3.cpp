#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    int choice;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << celsius;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}