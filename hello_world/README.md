## C Programming Basics: Hello World

This mini-project contains fundamental C programs that demonstrate basic input/output operations, data type sizes, and shell scripts for compilation automation.

---

## 📁 Project Files

| File Name        | Description                                         |
|------------------|-----------------------------------------------------|
| `4-puts.c`       | Prints a string using `puts`                        |
| `5-printf.c`     | Prints formatted output using `printf`              |
| `6-size.c`       | Prints sizes of various C data types                |
| `0-preprocessor` | Runs C preprocessor on a file                       |
| `1-compiler`     | Compiles C file to object file                      |
| `2-assembler`    | Generates assembly code from a C file               |
| `3-name`         | Compiles C file and creates executable `cisfun`     |

---

## � Function Descriptions

### `int main(void)` in `4-puts.c`
Prints a specific string using the `puts` function.

### `int main(void)` in `5-printf.c`
Prints a formatted string using the `printf` function.

### `int main(void)` in `6-size.c`
Prints the size of various C data types using `sizeof` and `printf`.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hello_world
```

---

## 📄 Usage

Each file demonstrates a specific basic C operation. See source code comments for details and usage examples.
{
    puts("\"Programming is like building a multilingual puzzle");
    return (0);
}
```

**Compile & Run:**
```bash
gcc 4-puts.c -o puts_example
./puts_example
```
**Output:**
```text
"Programming is like building a multilingual puzzle
```

---

### 🖨️ `5-printf.c`
Demonstrates formatted output using `printf`.

```c
#include <stdio.h>
/**
 * main - Entry point
 * Print a text using printf
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("with proper grammar, but the outcome is a piece of art,\n");
    return (0);
}
```

**Compile & Run:**
```bash
gcc 5-printf.c -o printf_example
./printf_example
```
**Output:**
```text
with proper grammar, but the outcome is a piece of art,
```

---

### 📏 `6-size.c`
Prints the sizes of various C data types.

```c
#include <stdio.h>
/**
 * main - Entry point
 * Prints the size of various types
 * Return: Always return 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %d byte(s)\n", sizeof(char));
    printf("Size of an int: %d byte(s)\n", sizeof(int));
    printf("Size of a long int: %d byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
    printf("Size of a float: %d byte(s)\n", sizeof(float));
    return (0);
}
```

**Compile & Run:**
```bash
gcc 6-size.c -o size_example
./size_example
```
**Example Output (64-bit system):**
```text
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

---

## ⚙️ Compilation Scripts Usage

### 🔧 `0-preprocessor`
Runs the C preprocessor and saves the result to `c`.
```bash
export CFILE=your_file.c
./0-preprocessor
```

### 🧱 `1-compiler`
Compiles a C file but doesn’t link.
```bash
export CFILE=your_file.c
./1-compiler
```

### ⚙️ `2-assembler`
Generates assembly code from a C file.
```bash
export CFILE=your_file.c
./2-assembler
```

### 🛠️ `3-name`
Creates an executable named `cisfun`.
```bash
export CFILE=your_file.c
./3-name
```

---

## 📋 Workflow Example

```bash
# Set environment variable
export CFILE=main.c

# Run preprocessor
./0-preprocessor

# Compile to object file
./1-compiler

# Generate assembly
./2-assembler

# Create executable
./3-name

# Run the program
./cisfun
```

---

## 🧰 Requirements
- GCC compiler
- Bash shell
- POSIX-compliant environment



## 📌 Key Concepts
- Basic C program structure
- Input/output functions (`puts`, `printf`)
- Data types and memory sizes
- Compilation stages (preprocessing, compiling, assembling, linking)
- Shell scripting for automation
- Environment variables usage

