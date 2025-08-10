## More malloc, free in C

This mini-project demonstrates advanced memory allocation techniques in C, focusing on proper memory management using `malloc`, `free`, and related functions.

---

## 📁 Project Files

| File Name              | Description                                         |
|------------------------|-----------------------------------------------------|
| `_putchar.c`           | Custom character output function                     |
| `0-malloc_checked.c`   | Allocates memory using `malloc` with error checking  |
| `1-string_nconcat.c`   | Concatenates two strings with limited bytes from second string |
| `2-calloc.c`           | Allocates memory for an array and initializes to zero|
| `3-array_range.c`      | Creates an array containing values from min to max   |
| `main.h`               | Header file containing all function prototypes       |

---

## � Function Descriptions

### `int _putchar(char c)`
Writes a character to stdout.

### `void *malloc_checked(unsigned int b)`
Safely allocates memory. Exits with status 98 on failure.

### `char *string_nconcat(char *s1, char *s2, unsigned int n)`
Concatenates s1 with up to n bytes of s2. Returns pointer to new string, or NULL on failure.

### `void *_calloc(unsigned int nmemb, unsigned int size)`
Allocates memory for an array and initializes it to zero. Returns pointer to memory, or NULL on failure.

### `int *array_range(int min, int max)`
Creates an array containing values from min to max. Returns pointer to array, or NULL on failure.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o more_malloc_free
```

---

## 📄 Usage

Each file demonstrates a specific advanced memory allocation operation. See source code comments for details and usage examples.
Allocates and initializes array memory to 0.

- **Parameters:**
  - `nmemb`: Number of elements
  - `size`: Size of each element

- **Returns:**
  - Pointer to allocated zeroed memory `NULL` if `nmemb` or size is 0, or on failure

`int *array_range(int min, int max)`

Creates an array from min to max (inclusive).

- **Parameters:**
  - `min`: Starting integer
  - `max`: Ending integer

- **Returns:**
Pointer to array `NULL` if `min > max` or on failure

### 🛠 Compilation

Compile all files together using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o mem_alloc
```
### 💡 Usage Example

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    int *arr = malloc_checked(10 * sizeof(int));
    char *s = string_nconcat("Hello", "World", 3);
    printf("%s\n", s);  // Output: HelloWor

    int *zeros = _calloc(10, sizeof(int));
    int *numbers = array_range(5, 10);

    // Free allocated memory
    free(arr);
    free(s);
    free(zeros);
    free(numbers);

    return 0;
}
```

---

### ✅ Key Features

- Robust error handling for memory allocation

- Safe handling of `NULL` inputs

- Proper memory initialization

- Efficient and secure memory usage

- Clean, modular, and maintainable code

### 🧠 Memory Management Best Practices

- Always check `malloc` return values

- Initialize memory when needed (use `calloc`)

- Free memory in reverse order of allocation

- Validate parameters before operations

- Handle edge cases: size `0`, `NULL` inputs, etc.

### 📦 Requirements

- GCC compiler

- Standard C libraries (`stdlib.h`)

- POSIX-compliant system

--- 

### 👤 Author
**Amin Chiha**
