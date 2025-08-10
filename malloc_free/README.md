## Dynamic Memory Allocation in C

This mini-project demonstrates dynamic memory allocation techniques in C, including creating arrays, duplicating strings, concatenating strings, and managing 2D grids. The implementation focuses on proper memory management and error handling.

---

## 📁 Project Files

| File Name           | Description                                         |
|---------------------|-----------------------------------------------------|
| `_putchar.c`        | Custom character output function                     |
| `0-create_array.c`  | Creates a character array initialized with a specific char |
| `1-strdup.c`        | Duplicates a string                                 |
| `2-str_concat.c`    | Concatenates two strings                            |
| `3-alloc_grid.c`    | Creates a 2D grid of integers                       |
| `4-free_grid.c`     | Frees memory allocated for a 2D grid                |
| `main.h`            | Header file with function prototypes                |

---

## 🛠 Function Descriptions

### `int _putchar(char c)`
Writes a character to stdout.

### `char *create_array(unsigned int size, char c)`
Creates an array of characters and initializes it with a specific character.

### `char *_strdup(char *str)`
Duplicates a string. Returns pointer to new string, or NULL on failure.

### `char *str_concat(char *s1, char *s2)`
Concatenates two strings. Returns pointer to new string, or NULL on failure.

### `int **alloc_grid(int width, int height)`
Creates a 2D grid of integers. Returns pointer to grid, or NULL on failure.

### `void free_grid(int **grid, int height)`
Frees memory allocated for a 2D grid.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o malloc_free
```

---

## 📄 Usage

Each file demonstrates a specific dynamic memory allocation operation. See source code comments for details and usage examples.
Duplicates a string.

**Parameters:**
- `str`: String to duplicate

**Returns:**
- Pointer to the duplicated string
- NULL if str is NULL or memory allocation fails

```c
char *dup = _strdup("Hello");
// Creates: "Hello"
```

---

### `char *str_concat(char *s1, char *s2)`
Concatenates two strings.

**Parameters:**
- `s1`: First string
- `s2`: Second string

**Returns:**
- Pointer to the concatenated string
- NULL if memory allocation fails
- Treats NULL strings as empty strings

```c
char *concat = str_concat("Hello", "World");
// Creates: "HelloWorld"
```

---

### `int **alloc_grid(int width, int height)`
Creates a 2-dimensional grid of integers initialized to 0.

**Parameters:**
- `width`: Grid width
- `height`: Grid height

**Returns:**
- Pointer to the 2D grid
- NULL for invalid dimensions or allocation failure

```c
int **grid = alloc_grid(3, 3);
/* Creates:
   [[0, 0, 0],
    [0, 0, 0],
    [0, 0, 0]]
*/
```

---

### `void free_grid(int **grid, int height)`
Frees memory allocated for a 2D grid.

**Parameters:**
- `grid`: Pointer to the grid
- `height`: Height of the grid

```c
free_grid(grid, 3);  // Frees a 3-row grid
```

---

## Compilation
Compile all files together with:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o memory_alloc
```

---

## Usage Example
```c
#include "main.h"

int main(void)
{
    // Create array
    char *arr = create_array(5, 'X');
    printf("%s\n", arr);  // Output: "XXXXX"

    // Duplicate string
    char *dup = _strdup("Duplicate");
    printf("%s\n", dup);  // Output: "Duplicate"

    // Concatenate strings
    char *concat = str_concat("Hello ", "World!");
    printf("%s\n", concat);  // Output: "Hello World!"

    // Create 2D grid
    int **grid = alloc_grid(3, 3);
    grid[1][1] = 5;  // Center element

    // Free memory
    free(arr);
    free(dup);
    free(concat);
    free_grid(grid, 3);

    return 0;
}
```

---

## Key Features
- Robust error checking for memory allocation failures
- Safe handling of NULL inputs
- Proper memory cleanup
- Initialization of allocated memory
- Comprehensive input validation
- Efficient memory usage

---

## Memory Management Best Practices
- Always check `malloc` return values
- Initialize allocated memory
- Free memory in reverse allocation order
- Handle edge cases (size 0, NULL inputs)
- Use appropriate data types for sizes (`size_t`, `unsigned int`)

---

## Requirements
- GCC compiler
- Standard C libraries (`stdlib.h`)
- POSIX-compliant system for compilation

---

## Author
**Amin Chiha**
