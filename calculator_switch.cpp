//Adrish Purkayastha
//PRN:23070123011
//EnTC A
//experiment 5.d
//Write a calculator program using switch statement
#include <iostream>
using namespace std;

int main() {
    char choice, ans;
    double sum, difference, product, division, num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> choice;

    while (1) {
        switch (choice) {
            case '+':
                sum = num1 + num2;
                cout << "Sum is: " << sum<<endl;
                break;
            case '-':
                difference = num1 - num2;
                cout << "Difference is: " << difference<<endl;
                break;
            case '*':
                product = num1 * num2;
                cout << "Product is: " << product<<endl;
                break;
            case '/':
                division = num1 / num2;
                cout << "Division is: " << division<<endl;
                break;
            default:
                cout << "Invalid operator"<<endl;
        }

        cout << "Want to enter more numbers (y/n): ";
        cin >> ans;
        if (ans == 'y') {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Enter operation (+, -, *, /): ";
            cin >> choice;
            continue;
        } else {
            break;
        }
    }
}
/*
OUTPUT:
Enter two numbers: 3 8
Enter operation (+, -, *, /): +
Sum is: 11
Want to enter more numbers (y/n): y
Enter two numbers: 6 9
Enter operation (+, -, *, /): -
Difference is: -3
Want to enter more numbers (y/n): y
Enter two numbers: 4 2
Enter operation (+, -, *, /): *
Product is: 8
Want to enter more numbers (y/n): y
Enter two numbers: 9 3
Enter operation (+, -, *, /): /
Division is: 3
Want to enter more numbers (y/n): n
*/
