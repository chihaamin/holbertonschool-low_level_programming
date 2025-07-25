## C - More malloc, free

This project demonstrates advanced memory allocation techniques in C, focusing on proper memory management using `malloc`, `free`, and related functions.

### 📁 Project Files

| Filename | Description |
|----------|-------------|
| `0-malloc_checked.c` | Allocates memory using `malloc` with error checking |
| `1-string_nconcat.c` | Concatenates two strings with limited bytes from second string |
| `2-calloc.c` | Allocates memory for an array and initializes to zero |
| `3-array_range.c` | Creates an array containing values from min to max |
| `main.h` | Header file containing all function prototypes |
| `_putchar.c` | Custom `putchar` implementation |

### 🔧 Function Descriptions

`void *malloc_checked(unsigned int b)`

Safely allocates memory.

- **Parameters:** 
  -b: Number of bytes to allocate

- **Returns:** Pointer to allocated memoryExits with `status 98` on failure

`char *string_nconcat(char *s1, char *s2, unsigned int n)`

Concatenates s1 with up to n bytes of s2.

- **Parameters:**
  - `s1`: First string (treated as empty if `NULL`)
  - `s2`: Second string (treated as empty if `NULL`)
  - `n`: Maximum bytes from `s2` to use

- **Returns:**
  - Pointer to new concatenated string `NULL` on allocation failure

`void *_calloc(unsigned int nmemb, unsigned int size)`

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
