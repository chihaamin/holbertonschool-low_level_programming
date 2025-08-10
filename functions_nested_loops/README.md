## Functions and Nested Loops in C

This mini-project demonstrates various C programming techniques using functions and nested loops. The programs range from basic character printing to complex mathematical operations, showcasing fundamental C programming concepts.

---

## 📁 Project Files

| File Name                 | Description                                   |
|---------------------------|-----------------------------------------------|
| `_putchar.c`              | Custom character output function              |
| `0-putchar.c`             | Prints "_putchar"                             |
| `1-alphabet.c`            | Prints lowercase alphabet                     |
| `2-print_alphabet_x10.c`  | Prints alphabet 10 times                      |
| `3-islower.c`             | Checks for lowercase characters               |
| `4-isalpha.c`             | Checks for alphabetic characters              |
| `5-sign.c`                | Prints the sign of a number                   |
| `6-abs.c`                 | Computes absolute value                       |
| `7-print_last_digit.c`    | Prints last digit of a number                 |
| `8-24_hours.c`            | Prints every minute of the day                |
| `9-times_table.c`         | Prints the 9 times table                      |
| `10-add.c`                | Adds two integers                             |
| `11-print_to_98.c`        | Prints numbers from n to 98                   |
| `main.h`                  | Header file with function prototypes          |

---

## 🛠 Function Descriptions

### `int _putchar(char c)`
Writes a character to stdout.

### `void print_alphabet(void)`
Prints the alphabet in lowercase.

### `void print_alphabet_x10(void)`
Prints the alphabet 10 times.

### `int _islower(int c)`
Checks if a character is lowercase.

### `int _isalpha(int c)`
Checks if a character is alphabetic.

### `int print_sign(int n)`
Prints the sign of a number.

### `int _abs(int n)`
Computes the absolute value of an integer.

### `int print_last_digit(int n)`
Prints the last digit of a number.

### `void jack_bauer(void)`
Prints every minute of the day.

### `void times_table(void)`
Prints the 9 times table.

### `int add(int a, int b)`
Adds two integers and returns the result.

### `void print_to_98(int n)`
Prints all natural numbers from n to 98.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o functions_nested_loops
```

---

## 📄 Usage

Each file demonstrates a specific function or loop operation. See source code comments for details and usage examples.
| `10-main.c`      | Tests add function                      |
| `11-main.c`      | Tests print_to_98 function              |

---

## 🧪 Compilation and Usage

To compile any function with its corresponding test file:

```bash
gcc -Wall -Werror -Wextra -pedantic [function_file] [test_file] _putchar.c -o output_name
```

### Examples

**Compile and run the addition function:**

```bash
gcc 10-add.c 10-main.c -o add
./add
# Output: 98
```

**Compile and run the number sequence generator:**

```bash
gcc 11-print_to_98.c 11-main.c -o to98
./to98
```

**Sample Outputs:**

```text
0, 1, 2, ... 98
98
111, 110, ... 98
81, 82, ... 98
-10, -9, ... 98
```
---

## 🧪 Testing

Each function has a dedicated test file:

- `10-main.c`: Tests `add()` with `(89, 9)` → Output: `98`
- `11-main.c`: Tests `print_to_98()` with:
  - From `0` to `98`
  - From `98` to `98` (edge case)
  - From `111` to `98`
  - From `81` to `98`
  - From `-10` to `98`

---

## 🧰 Requirements

- GCC compiler  
- Standard C libraries (`stdio.h`, `stdlib.h`)  
- POSIX-compliant system  
- `_putchar.c` implementation (provided)
