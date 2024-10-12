#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Scientific Calculator" << endl;
    cout << "1. Trigonometric Operations" << endl;
    cout << "2. Exponential Operations" << endl;
    cout << "3. Logarithmic Operations" << endl;
    cout << "4. Root Operations" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "1. Sine" << endl;
            cout << "2. Cosine" << endl;
            cout << "3. Tangent" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cout << "Enter a number: ";
            cin >> num1;
            if (choice == 1) {
                result = sin(num1);
            } else if (choice == 2) {
                result = cos(num1);
            } else if (choice == 3) {
                result = tan(num1);
            }
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "1. Exponential" << endl;
            cout << "2. Natural Exponential" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cout << "Enter a number: ";
            cin >> num1;
            if (choice == 1) {
                result = exp(num1);
            } else if (choice == 2) {
                result = expm1(num1);
            }
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "1. Natural Logarithm" << endl;
            cout << "2. Base-10 Logarithm" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cout << "Enter a number: ";
            cin >> num1;
            if (choice == 1) {
                result = log(num1);
            } else if (choice == 2) {
                result = log10(num1);
            }
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "1. Square Root" << endl;
            cout << "2. Cube Root" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cout << "Enter a number: ";
            cin >> num1;
            if (choice == 1) {
                result = sqrt(num1);
            } else if (choice == 2) {
                result = cbrt(num1);
            }
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
