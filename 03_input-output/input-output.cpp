#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    // Taking input from user
    cout << "Enter your name: ";
    getline(cin, name);  // To read full line including spaces

    cout << "Enter your age: ";
    cin >> age;

    // Displaying the input
    cout << "\nHello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}
