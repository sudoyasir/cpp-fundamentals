#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of 5 integers
    int arr[5] = {1, 2, 3, 4, 5};

    // Access and display each element of the array
    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }

    // Modify the value of an array element
    arr[2] = 10;  // Change 3rd element to 10

    // Display modified array
    cout << "\nModified Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }

    return 0;
}
