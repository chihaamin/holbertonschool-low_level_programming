# Doubly Linked Lists in C

This project implements a comprehensive doubly linked list data structure in C, providing essential operations for creating, traversing, modifying, and managing doubly linked lists.

---

## 📁 Project Files

| Filename              | Description                                     |
|-----------------------|-------------------------------------------------|
| `lists.h`             | Header file containing structure definition and function prototypes |
| `0-print_dlistint.c`  | Prints all elements of a doubly linked list     |
| `1-dlistint_len.c`    | Returns the number of elements in a list        |
| `2-add_dnodeint.c`    | Adds a new node at the beginning of a list      |
| `3-add_dnodeint_end.c`| Adds a new node at the end of a list            |
| `4-free_dlistint.c`   | Frees all nodes in a list                       |
| `5-get_dnodeint.c`    | Gets a node at a specific index                 |
| `6-sum_dlistint.c`    | Calculates sum of all data in a list            |
| `7-insert_dnodeint.c` | Inserts a new node at a given position          |
| `8-delete_dnodeint.c` | Deletes a node at a given index                 |

---

## 🧬 Data Structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

---

## 🔧 Function Prototypes

```c
/* Print all elements */
size_t print_dlistint(const dlistint_t *h);

/* Get list length */
size_t dlistint_len(const dlistint_t *h);

/* Add node to beginning */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Add node to end */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* Free entire list */
void free_dlistint(dlistint_t *head);

/* Get node at index */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* Sum all node values */
int sum_dlistint(dlistint_t *head);

/* Insert node at index */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* Delete node at index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```

---

## ⚙️ Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic [file_name].c -o output_name
```

---

## ✨ Key Features

- **Bidirectional Traversal**: Efficient forward and backward navigation  
- **Memory Management**: Proper allocation and deallocation of nodes  
- **Error Handling**: Graceful handling of edge cases and invalid operations  
- **Index Operations**: Precise insertion and deletion at specified positions  
- **Data Integrity**: Consistent maintenance of `prev` and `next` pointers  

---

## 🧪 Usage Example

```c
#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;

    // Add nodes to the list
    add_dnodeint_end(&head, 10);
    add_dnodeint_end(&head, 20);
    add_dnodeint_end(&head, 30);

    // Insert new node at position 1
    insert_dnodeint_at_index(&head, 1, 15);

    // Print list: 10 <-> 15 <-> 20 <-> 30
    print_dlistint(head);

    // Delete node at position 2
    delete_dnodeint_at_index(&head, 2);

    // Print list: 10 <-> 15 <-> 30
    print_dlistint(head);

    // Free memory
    free_dlistint(head);

    return 0;
}
```

---

## 🔍 Functions Explained

### 🧩 Insertion (`7-insert_dnodeint.c`)
- Handles insertion at beginning, middle, and end of list  
- Maintains correct pointer references  
- Returns new node address or `NULL` on failure

### 🗑️ Deletion (`8-delete_dnodeint.c`)
- Handles deletion at beginning, middle, and end  
- Updates neighbor pointers correctly  
- Returns `1` on success, `-1` on failure

### 🧼 Memory Management (`4-free_dlistint.c`)
- Safely frees all nodes in list  
- Prevents memory leaks

---

## 📚 List Operations

- `sum_dlistint()`: Calculates total of all node values  
- `get_dnodeint_at_index()`: Retrieves node at specific position  
- `dlistint_len()`: Efficiently counts nodes  

---

## ✅ Requirements

- GCC compiler  
- Standard C libraries  
- POSIX-compliant system for compilation  

---

## 👨‍💻 Author

**Amin Chiha**