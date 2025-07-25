## More Functions, More Nested Loops in C
This project demonstrates various C programming techniques using functions and nested loops, including character classification, number printing, pattern generation, and the classic FizzBuzz problem.

---

## Project Files
| File Name              | Description                             |
|------------------------|-----------------------------------------|
| 0-isupper.c            | Checks for uppercase characters          |
| 1-isdigit.c            | Checks for digits (0-9)                  |
| 2-mul.c                | Multiplies two integers                  |
| 3-print_numbers.c      | Prints numbers 0-9                       |
| 4-print_most_numbers.c | Prints 0-9 excluding 2 and 4             |
| 5-more_numbers.c       | Prints 0-14 ten times                    |
| 6-print_line.c         | Draws straight lines                     |
| 7-print_diagonal.c     | Draws diagonal lines                     |
| 8-print_square.c       | Prints squares of '#'                    |
| 9-fizz_buzz.c          | Classic FizzBuzz implementation          |
| 10-print_triangle.c    | Prints right-aligned triangles           |
| _putchar.c             | Custom character output function         |
| main.h                 | Header file with function prototypes     |

---

## Key Features

### Character Classification
- `_isupper()` verifies if a character is uppercase
- `_isdigit()` identifies digit characters (0-9)

### Mathematical Operations
- `mul()` multiplies two integers
- `main()` in `9-fizz_buzz.c` implements the classic FizzBuzz test

### Pattern Generation
- `print_line()` using underscores
- `print_diagonal()` using backslashes
- `print_square()` using `#` characters
- `print_triangle()` with right-aligned `#` patterns

### Number Printing
- Basic 0-9 sequence with exclusions
- Repeated 0-14 sequences
- Formatted output for FizzBuzz

---

## Compilation and Usage
Compile individual programs with:

```bash
gcc -Wall -Werror -Wextra -pedantic [function_file] [test_file] _putchar.c -o output_name
```

### Examples
- Compile and run FizzBuzz:
```bash
gcc 9-fizz_buzz.c -o fizzbuzz
./fizzbuzz
```
Output: Numbers 1-100 with Fizz/Buzz substitutions

- Compile and run triangle printer:
```bash
gcc 10-print_triangle.c _putchar.c -o triangle
./triangle 5
```
Output:
```
    #
   ##
  ###
 ####
#####
```

- Compile and run digit checker:
```bash
gcc 1-isdigit.c [test_file] -o isdigit
./isdigit '5'
```
Output: `1` (if input is digit)

---

## Code Examples

### FizzBuzz Implementation (`9-fizz_buzz.c`)
```c
for (i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
        printf("FizzBuzz");
    } else if (i % 3 == 0) {
        printf("Fizz");
    } else if (i % 5 == 0) {
        printf("Buzz");
    } else {
        printf("%d", i);
    }
    if (i < 100)
        printf(" ");
}
printf("\n");
```

### Triangle Printer (`10-print_triangle.c`)
```c
for (i = 1; i <= size; i++) {
    for (j = 1; j <= size - i; j++) {
        _putchar(' ');
    }
    for (j = 1; j <= i; j++) {
        _putchar('#');
    }
    _putchar('\n');
}
```

### Digit Checker (`1-isdigit.c`)
```c
int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}
```

---

## Requirements
- GCC compiler
- Standard C libraries
- POSIX-compliant system for compilation
- Betty style compliance (code formatting)

---

## Features
- Efficient loop structures
- Clean code organization
- Comprehensive input validation
- Memory-efficient operations
- Proper error handling
- Modular design for reusability

---

## Author
**Amin Chiha**
