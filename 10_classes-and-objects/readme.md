# Classes and Objects

In C++, a class is a blueprint for creating objects (instances). An object represents an entity with specific properties and behaviors.

## Class Syntax:
```cpp
class ClassName {
    public:
        // Attributes (properties)
        dataType attributeName;
        
        // Methods (functions)
        returnType methodName() {
            // code
        }
};
```

## Code Explanation:
- `class Car`: Defines a class `Car` with attributes `brand`, `model`, and `year`.
- `void displayDetails()`: A method that prints the details of the car object.
- In `main()`, an object `car1` of type `Car` is created, and the attributes are assigned values.
- The `displayDetails()` method is called to display the details of the car.

## Output Example:
```
Car Details:
Brand: Toyota
Model: Corolla
Year: 2020
```

## Key Concepts:
- **Class**: A user-defined data type that holds attributes and methods.
- **Object**: An instance of a class.
- **Methods**: Functions defined inside the class to perform actions on the object's attributes.