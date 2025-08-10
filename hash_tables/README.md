## Hash Tables Implementation in C

This mini-project provides a complete and memory-safe implementation of hash tables in C, including dynamic sizing, efficient hashing, collision handling through chaining, and full CRUD support.

---

## 📁 Project Files

| File Name              | Description                                         |
|------------------------|-----------------------------------------------------|
| `hash_tables.h`        | Header file with all data structures and function prototypes |
| `0-hash_table_create.c`| Initializes a new hash table with a given size      |
| `1-djb2.c`             | Implements the DJB2 hashing algorithm               |
| `2-key_index.c`        | Computes index in the array from a given key        |
| `3-hash_table_set.c`   | Adds or updates a key-value pair in the table       |
| `4-hash_table_get.c`   | Retrieves the value linked to a specific key        |
| `5-hash_table_print.c` | Displays all key-value pairs in dictionary-style format |
| `6-hash_table_delete.c`| Frees all allocated memory and deletes the table    |

---

## 🛠 Function Descriptions

### `hash_table_t *hash_table_create(unsigned long int size)`
Creates a new hash table of the specified size.

### `unsigned long int hash_djb2(const unsigned char *str)`
Implements the DJB2 hashing algorithm for strings.

### `unsigned long int key_index(const unsigned char *key, unsigned long int size)`
Computes the index for a key in the hash table array.

### `int hash_table_set(hash_table_t *ht, const char *key, const char *value)`
Adds or updates a key-value pair in the hash table.

### `char *hash_table_get(const hash_table_t *ht, const char *key)`
Retrieves the value associated with a key.

### `void hash_table_print(const hash_table_t *ht)`
Prints all key-value pairs in the hash table.

### `void hash_table_delete(hash_table_t *ht)`
Deletes the hash table and frees all memory.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o hash_tables
```

---

## � Usage

Each file demonstrates a specific hash table operation. See source code comments for details and usage examples.

```c
#include "hash_tables.h"

int main(void) {
    hash_table_t *ht = hash_table_create(1024);

    hash_table_set(ht, "name", "Alice");
    hash_table_set(ht, "age", "30");
    hash_table_set(ht, "job", "Engineer");

    printf("Name: %s\n", hash_table_get(ht, "name"));  // Output: Alice

    hash_table_print(ht); // Output: {'job': 'Engineer', 'age': '30', 'name': 'Alice'}

    hash_table_delete(ht);
    return 0;
}
```

## 🖨️ Output Format

```text
{'key1': 'value1', 'key2': 'value2', ...}
```
> ⚠️ Note: Key order is based on internal hashing, not insertion order.

## 📌 License

This project is open source under the [MIT License](LICENSE).

---

## 👨‍💻 Author

**Amin Chiha (XEKEX)**  
Student @ Holberton School
> `amin.chiha@gmail.com`
> `11595@holbertonstudents.com`
