# Command Line Arguments in C

This project contains a collection of C programs that demonstrate how to work with command line arguments. Each program performs a specific task related to argument processing — from simply printing the program name to performing arithmetic operations on input parameters.

---

## 📁 Project Files

| File Name         | Description                                      |
|-------------------|--------------------------------------------------|
| `0-whatsmyname.c` | Prints the program name                          |
| `1-args.c`        | Prints the number of arguments passed to program |
| `2-args.c`        | Prints all arguments received by the program     |
| `3-mul.c`         | Multiplies two numbers passed as arguments       |
| `4-add.c`         | Adds positive numbers passed as arguments        |
| `main.h`          | Header file containing necessary includes        |
| `_putchar.c`      | Custom character output function                 |

---

## 🧪 Compilation

### Compile each program separately:
```bash
gcc -Wall -Werror -Wextra -pedantic [file_name].c -o [output_name]
```

### Compile all programs at once:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

---

## 📜 Program Descriptions and Usage

### `0-whatsmyname.c`
Prints the name of the program.

**Usage:**
```bash
./0-whatsmyname
# Output: ./0-whatsmyname
```

---

### `1-args.c`
Prints the number of arguments passed to the program (excluding the program name).

**Usage:**
```bash
./1-args arg1 arg2 arg3
# Output: 3
```

---

### `2-args.c`
Prints all arguments received by the program, one per line.

**Usage:**
```bash
./2-args Hello World "C Programming"
# Output:
# ./2-args
# Hello
# World
# C Programming
```

---

### `3-mul.c`
Multiplies two numbers provided as command line arguments.

**Usage:**
```bash
./3-mul 7 8
# Output: 56
```

**Error Handling:**
```bash
./3-mul 5
# Output: Error
```

---

### `4-add.c`
Adds positive numbers provided as command line arguments.

**Usage:**
```bash
./4-add 5 10 15 20
# Output: 50
```

**Error Handling:**
```bash
./4-add 1 2a 3
# Output: Error
```

---

## ✅ Key Features

- Robust error handling for invalid inputs  
- Validation of numeric arguments  
- Proper memory management  
- Clean and readable code structure  
- Comprehensive handling of edge cases

---

## 🧰 Requirements

- GCC compiler  
- Standard C libraries (`stdlib.h`, `stdio.h`)  
- POSIX-compliant system for compilation and execution

---

## 🚀 Example Workflow

```bash
# Compile all programs
gcc -Wall -Werror -Wextra -pedantic *.c
```
# Run programs
```bash
./0-whatsmyname
./1-args one two three
./2-args "First argument" "Second argument"
./3-mul 5 6
./4-add 10 20 30
```
