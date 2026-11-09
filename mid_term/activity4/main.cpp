#include <iostream>

using namespace std;

int main() {
    double number1, number2;
    char operation;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter what operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> number2;

    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "\nInvalid input operation!" << endl;
    }

    else {
        cout << "\nResult:" << endl;

        if (operation == '+') {
            double result = number1 + number2;
            cout << number1 << " + " << number2 << " = " << result << endl;
        }
        else if (operation == '-') {
            double result = number1 - number2;
            cout << number1 << " - " << number2 << " = " << result << endl;
        }
        else if (operation == '*'){
            double result = number1 * number2;
            cout << number1 << " * " << number2 << " = " << result << endl;
        }
        else if (operation == '/') {
            double result = number1 / number2;
            cout << number1 << " / " << number2 << " = " << result << endl;
        }

    }
        
    return 0;

}