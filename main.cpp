#include <iostream>
using namespace std;

int main() {
    cout << "Calculator" << endl;
    cout << "Enter an operator (+, -, *, /): ";
    char op;
    cin >> op;

    double num1, num2, result;
    cout << "Enter two numbers: ";
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input for numbers. Please enter numeric values." << endl;
        return 1;
    }

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            result = num1 / num2;
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /." << endl;
            return 1;
    }

    return 0;
}
