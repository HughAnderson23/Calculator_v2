#include <iostream>
using namespace std;

enum class Operation {
    Add = 1,
    Subtract,
    Multiply,
    Divide
};

void displayMenu() {
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
	int choice;
    double num1, num2;

    do {
        displayMenu();
        cin >> choice;

        if (choice == 5) {
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            }
            else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid option" << endl;
        }

        cout << endl;
    } while (choice != 5);

    cout << "Calculator exited." << endl;
    return 0;
}
