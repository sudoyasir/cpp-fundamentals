# Arrays

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

## Syntax:
```cpp
dataType arrayName[arraySize];
```

## Code Explanation:
- An array `arr` is declared to store 5 integers.
- The array is initialized with values `{1, 2, 3, 4, 5}`.
- A `for` loop is used to access and display each element of the array.
- The 3rd element (`arr[2]`) is modified from `3` to `10`.
- The array is then displayed again with the updated value.

## Output Example:
```
Array elements:
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Element 5: 5

Modified Array:
Element 1: 1
Element 2: 2
Element 3: 10
Element 4: 4
Element 5: 5
```

## Important Points:
- Array indices start from 0.
- Arrays are fixed-size once declared, meaning you cannot change the size after initialization.