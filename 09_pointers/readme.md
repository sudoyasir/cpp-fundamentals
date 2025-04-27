# Pointers

Pointers are variables that store memory addresses of other variables.

## Syntax:
```cpp
dataType* pointerName;
```

- `*` is used to declare a pointer.
- `&` is used to get the address of a variable.
- `*ptr` is used to access the value stored at the memory address.

## Code Explanation:
- `int num = 10;` creates an integer variable.
- `int* ptr = &num;` creates a pointer `ptr` that holds the memory address of `num`.
- We print the value of `num`, its memory address, the address stored in `ptr`, and the value pointed to by `ptr`.
- Then, we modify the value of `num` by dereferencing the pointer (`*ptr = 20;`), which changes `num` to `20`.

## Output Example:
```
Value of num: 10
Address of num: 0x7ffee4b0f3ac
Pointer (address stored in ptr): 0x7ffee4b0f3ac
Value pointed to by ptr: 10

After modifying through pointer:
Value of num: 20
```

## Important Points:
- Pointers are used to directly manipulate memory locations.
- They are useful in dynamic memory allocation, arrays, and function arguments.