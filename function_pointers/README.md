# Function Pointers and Simple Calculator in C

This project demonstrates the use of function pointers in C through practical examples, and implements a simple calculator that performs arithmetic operations using function pointers.

---

## 📁 Project Files

### 🔧 Function Pointer Exercises

| File Name           | Description                                 |
|---------------------|---------------------------------------------|
| `function_pointers.h` | Header file for function pointer exercises |
| `0-print_name.c`      | Prints a name using a function pointer     |
| `1-array_iterator.c`  | Executes a function on each array element  |
| `2-int_index.c`       | Searches for an integer in an array        |
| `_putchar.c`          | Custom character output function           |

---

### ➕ Simple Calculator Program

| File Name           | Description                                       |
|---------------------|---------------------------------------------------|
| `3-calc.h`          | Header file for calculator                        |
| `3-op_functions.c`  | Arithmetic operation implementations              |
| `3-get_op_func.c`   | Selects appropriate function based on operator    |
| `3-main.c`          | Main calculator program                           |

---

## 🔧 Function Descriptions

### Function Pointers

#### `print_name`
Prints a name using a function passed as an argument.  
**Prototype:**
```c
void print_name(char *name, void (*f)(char *));
```

#### `array_iterator`
Executes a function on each element of an array.  
**Prototype:**
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```

#### `int_index`
Searches for an integer in an array using a comparison function.  
**Prototype:**
```c
int int_index(int *array, int size, int (*cmp)(int));
```

---

### Calculator Functions

- `op_add`: Addition (`a + b`)
- `op_sub`: Subtraction (`a - b`)
- `op_mul`: Multiplication (`a * b`)
- `op_div`: Division (`a / b`)
- `op_mod`: Modulo (`a % b`)
- `get_op_func`: Selects the appropriate function based on operator

---

## 🧪 Compilation

### Function Pointer Exercises
```bash
gcc -Wall -Werror -Wextra -pedantic [file_name].c -o [output_name]
```

### Calculator Program
```bash
gcc -Wall -Werror -Wextra -pedantic 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

---

## 🚀 Usage Examples

### Function Pointers
```c
#include "function_pointers.h"

void print_uppercase(char *name) {
    // Example implementation to print name in uppercase
}

int main(void) {
    print_name("Alice", print_uppercase);

    int arr[] = {1, 2, 3, 4};
    array_iterator(arr, 4, &print_elem);

    int index = int_index(arr, 4, &is_positive);
    return 0;
}
```

---

### Calculator Program
```bash
$ ./calc 5 + 3
8

$ ./calc 10 / 2
5

$ ./calc 7 % 3
1

$ ./calc 5 x 3
Error

$ ./calc 10 / 0
Error
```

---

## ❗ Error Handling

| Condition            | Output  | Exit Status |
|---------------------|---------|-------------|
| Incorrect argument count | `Error` | 98 |
| Invalid operator         | `Error` | 99 |
| Division by zero         | `Error` | 100 |

---

## ✅ Key Features

- Flexible function pointer implementation  
- Robust error handling  
- Clean separation of concerns  
- Modular design for easy maintenance  
- Comprehensive input validation  

---

## 🧰 Requirements

- GCC compiler  
- Standard C libraries (`stdlib.h`, `stdio.h`)  
- POSIX-compliant system for compilation and execution  

---

## 🗂️ Project Structure

```
.
├── function_pointers.h      # Header for function pointer exercises
├── 0-print_name.c           # Print name using function pointer
├── 1-array_iterator.c       # Execute function on array elements
├── 2-int_index.c            # Search integer in array
├── _putchar.c               # Custom character output
├── 3-calc.h                 # Calculator header
├── 3-op_functions.c         # Arithmetic operations
├── 3-get_op_func.c          # Operator function selector
└── 3-main.c                 # Calculator main program
```
