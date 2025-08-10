## Structures, typedef in C

This mini-project demonstrates the use of structures and typedef in C, focusing on defining and manipulating a custom `dog` type.

---

## 📁 Project Files

| File Name      | Description                                         |
|----------------|-----------------------------------------------------|
| `dog.h`        | Definition of the dog struct and function prototypes|
| `1-init_dog.c` | Initializes a variable of type struct dog           |
| `2-print_dog.c`| Prints a struct dog                                 |
| `4-new_dog.c`  | Creates a new dog                                   |
| `5-free_dog.c` | Frees memory allocated for a dog                    |

---

## 🛠 Function Descriptions

### `void init_dog(struct dog *d, char *name, float age, char *owner)`
Initializes a dog struct with name, age, and owner.

### `void print_dog(struct dog *d)`
Prints the information of a dog struct.

### `dog_t *new_dog(char *name, float age, char *owner)`
Creates a new instance of a dog struct.

### `void free_dog(dog_t *d)`
Frees memory allocated for a dog struct.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o structures_typedef
```

---

## 📄 Usage

Each file demonstrates a specific structure or typedef operation. See source code comments for details and usage examples.

