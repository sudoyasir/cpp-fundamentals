#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to display a message
void displayMessage() {
    cout << "Welcome to C++ Functions!" << endl;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    displayMessage();

    return 0;
}
