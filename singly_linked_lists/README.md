## Singly Linked Lists in C

This project implements a singly linked list data structure in C, providing essential operations for creating, traversing, modifying, and freeing linked lists.

---

## 📁 Project Files

| File Name         | Description                                         |
|-------------------|-----------------------------------------------------|
| `lists.h`         | Header file containing structure definition and function prototypes |
| `0-print_list.c`  | Prints all elements of a linked list                |
| `1-list_len.c`    | Returns the number of elements in a linked list     |
| `2-add_node.c`    | Adds a new node at the beginning of a list          |
| `3-add_node_end.c`| Adds a new node at the end of a list                |
| `4-free_list.c`   | Frees all nodes in a linked list                    |

---

## 🛠 Function Descriptions

### `size_t print_list(const list_t *h)`
Prints all elements of a linked list. If a node's string is `NULL`, prints `[0] (nil)`.

### **Parameters:** `h` — Pointer to head of list
### **Returns:** Number of nodes printed

### `size_t list_len(const list_t *h)`
Returns the number of elements in a linked list.

### **Parameters:** `h` — Pointer to head of list
### **Returns:** Number of nodes in list

### `list_t *add_node(list_t **head, const char *str)`
Adds a new node at the beginning of a linked list.

### **Parameters:**
### - `head` — Double pointer to head of list
### - `str` — String to store in new node
### **Returns:** Address of new element, or `NULL` on failure

### `list_t *add_node_end(list_t **head, const char *str)`
Adds a new node at the end of a linked list.

### **Parameters:**
### - `head` — Double pointer to head of list
### - `str` — String to store in new node
### **Returns:** Address of new element, or `NULL` on failure

### `void free_list(list_t *head)`
Frees all nodes in a linked list.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o singly_linked_lists
```

---

## 📄 Usage

Each file demonstrates a specific singly linked list operation. See source code comments for details and usage examples.
### `size_t list_len(const list_t *h)`
Counts the number of elements in a linked list.

- **Parameters:** `h` — Pointer to head of list

- **Returns:** Number of nodes in list

### `list_t *add_node(list_t **head, const char *str)`
Adds a new node at the beginning of a list.

- **Parameters:**

    - `head` — Double pointer to head of list

    - `str` — String to store in new node

- **Returns:** Address of new element, or `NULL` on failure

### `list_t *add_node_end(list_t **head, const char *str)`
Adds a new node at the end of a list.

- **Parameters:**

    - `head` — Double pointer to head of list

    - `str` — String to store in new node

- **Returns:** Address of new element, or `NULL` on failure

## 🧪 Compilation

Compile all files together using:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o linked_lists
```

## 🚀 Usage Example

```c
#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node_end(&head, "World");
    add_node(&head, "!");

    print_list(head);             /* Output: [1] !\n[5] Hello\n[5] World */
    printf("%lu\n", list_len(head));  /* Output: 3 */

    free_list(head);
    return (0);
}
```

## ✅ Features

- Dynamic memory allocation for nodes and strings

- Safe handling of `NULL` pointers

- Memory leak prevention through proper cleanup

- Error checking for allocation failures

## 🧰 Requirements

- GCC compiler

- Standard C libraries (`stdlib.h`, `string.h`, etc.)

- POSIX-compliant system for compilation and execution