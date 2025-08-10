## File I/O in C

This mini-project demonstrates file input/output operations in C, including reading, writing, appending, and copying files, as well as custom output functions.

---

## 📁 Project Files

| File Name                | Description                                                      |
|--------------------------|------------------------------------------------------------------|
| `_putchar.c`             | Custom character output function                                 |
| `0-read_textfile.c`      | Reads a text file and prints it to the POSIX stdout              |
| `1-create_file.c`        | Creates a file and writes text content to it                     |
| `2-append_text_to_file.c`| Appends text content to a file                                   |
| `3-cp.c`                 | Copies the content of one file to another                        |
| `main.h`                 | Header file containing function prototypes and includes          |

---

## 🛠 Function Descriptions

### `int _putchar(char c)`
Writes a character to stdout.

### `ssize_t read_textfile(const char *filename, size_t letters)`
Reads a text file and prints up to `letters` characters to stdout.

### `int create_file(const char *filename, char *text_content)`
Creates a file and writes a string to it. Returns 1 on success, -1 on failure.

### `int append_text_to_file(const char *filename, char *text_content)`
Appends a string to the end of a file. Returns 1 on success, -1 on failure.

### `char *create_buffer(char *file)`
Allocates a 1024-byte buffer for file copying operations.

### `void close_file(int fd)`
Closes a file descriptor, handling errors.

---

## ⚙️ Compilation

Compile all source files using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o file_io
```

---

## 📄 Usage

Each file demonstrates a specific file I/O operation. See source code comments for details and usage examples.