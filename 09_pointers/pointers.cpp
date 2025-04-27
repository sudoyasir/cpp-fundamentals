#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num; // Pointer to the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer (address stored in ptr): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Modifying the value of num through the pointer
    *ptr = 20;
    cout << "\nAfter modifying through pointer:" << endl;
    cout << "Value of num: " << num << endl;

    return 0;
}
