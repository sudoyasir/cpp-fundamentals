#include <iostream>
using namespace std;

// Define a class called "Car"
class Car {
public:
    // Attributes (properties)
    string brand;
    string model;
    int year;

    // Method (function)
    void displayDetails() {
        cout << "Car Details: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Creating an object of the Car class
    Car car1;

    // Assign values to the attributes
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    // Call the method to display details of the car
    car1.displayDetails();

    return 0;
}
