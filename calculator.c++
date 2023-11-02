#include<iostream>
using namespace std;

int main() {
    float a, b, res;
    char op;

    cout << "Enter two operands: ";
    cin >> a >> b;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op) {
        case '+':
            res = a + b;
            cout << "SUM = " << res;
            break;

        case '-':
            res = a - b;
            cout << "DIFFERENCE = " << res;
            break;

        case '*':
            res = a * b;
            cout << "PRODUCT = " << res;
            break;

        case '/':
            if (b == 0) {
                cout << "Divide by zero error";
            }
            else {
                res = a / b;
                cout << "QUOTIENT = " << res;
            }
            break;

        default:
            cout << "Invalid entry. Try again";
            break;
    }

    return 0;
}
