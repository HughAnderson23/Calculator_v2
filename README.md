
# Simple Calculator in C++

This project is a simple console-based calculator written in C++ using Microsoft Visual Studio. It allows users to perform basic arithmetic operations like addition, subtraction, multiplication, and division.

## Features

- Addition
- Subtraction
- Multiplication
- Division

## Getting Started

### Prerequisites

- Microsoft Visual Studio (any recent version)

### Installation

1. **Clone the repository** (if you're using a version control system like Git):
    ```sh
    git clone https://github.com/your-username/calculator.git
    cd calculator
    ```

2. **Open the project**:
    - Open Microsoft Visual Studio.
    - Go to `File` > `Open` > `Project/Solution`.
    - Navigate to the cloned repository folder and select the `Calculator.sln` file.

3. **Build the project**:
    - Click on `Build` > `Build Solution` or press `Ctrl+Shift+B`.

4. **Run the project**:
    - Click on `Debug` > `Start Without Debugging` or press `Ctrl+F5`.

### Usage

1. Follow the on-screen menu to choose the desired arithmetic operation.
2. Enter the two numbers when prompted.
3. The result will be displayed on the screen.
4. Choose another operation or exit the calculator.

### Code Overview

The main logic of the calculator is implemented in the `main.cpp` file. Here's a brief overview of the functions and their purposes:

- `displayMenu()`: Displays the menu options to the user.
- `main()`: The main function that handles user input and performs the chosen operations.

```cpp
#include <iostream>
using namespace std;

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
                } else {
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

