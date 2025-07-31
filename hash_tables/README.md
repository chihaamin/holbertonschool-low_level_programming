# 🧠 Hash Tables Implementation in C

A complete and memory-safe implementation of hash tables in C. This project includes features such as dynamic sizing, efficient hashing, collision handling through chaining, and full CRUD support.

---

## 📁 Project Structure

| 📄 File                    | 🧩 Function             | 📌 Description                                                               |
|---------------------------|------------------------|------------------------------------------------------------------------------|
| `hash_tables.h`           | —                      | Header file with all data structures and function prototypes                 |
| `0-hash_table_create.c`   | `hash_table_create`    | Initializes a new hash table with a given size                               |
| `1-djb2.c`                | `hash_djb2`            | DJB2 hashing algorithm for string-based keys                                 |
| `2-key_index.c`           | `key_index`            | Computes index in the array from a given key using DJB2                      |
| `3-hash_table_set.c`      | `hash_table_set`       | Adds or updates a key-value pair in the table                                |
| `4-hash_table_get.c`      | `hash_table_get`       | Retrieves the value linked to a specific key                                 |
| `5-hash_table_print.c`    | `hash_table_print`     | Displays all key-value pairs in dictionary-style format                      |
| `6-hash_table_delete.c`   | `hash_table_delete`    | Frees all allocated memory and deletes the table                             |

---

## ✨ Key Features

- 🔢 **Dynamic Sizing** – User-defined table size at creation  
- ⚙️ **DJB2 Hashing** – Efficient and well-distributed hashing algorithm  
- 🔗 **Collision Handling** – Resolved via chaining (linked lists)  
- 🧼 **Memory Safety** – Clean memory allocation/deallocation  
- 🛠️ **Full CRUD** – Create, Read, Update, and Delete operations included  

---

## 🧪 Compilation

Compile all source files using:

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o hash_tables
```

## 🚀 Quick Usage Example

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
