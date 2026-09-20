# Lab 1: Files, pacman, and C Programming

**Terms:** Linux, Bash, GCC, Pacman, Command Line

---

## I. Basic File Operations

### Commands Executed
1. **Create and verify greeting file**:
   ```bash
   echo "Hello Linux!" > greeting.txt
   cat greeting.txt
   ```
2. **Copy and rename**:
   ```bash
   cp greeting.txt backup.txt
   mv backup.txt old_greeting.txt
   ```
3. **Directory manipulation & cleanup**:
   ```bash
   rm old_greeting.txt
   mkdir temp_dir
   rmdir temp_dir
   ```
4. **Inspect permissions**:
   ```bash
   ls -l greeting.txt
   ```

---

## II. Package Management & Toolchain Verification

- **Package Manager Check / Toolchain**:
  - Compiler verification:
    ```bash
    gcc --version
    ```
  - Result:  (`gcc (GCC) 16.2.1`).

---

## III. C Compilation

### Source Code: `hello.c` this file is in the directory above.


### Compilation & Execution Steps
1. **Initial compilation**:
   ```bash
   gcc hello.c -o hello_program
   ./hello_program
   ```
   **Output:**
   ```text
   Hello, Linux Lab!
   Sum of 10 and 5 is 15
   ```

2. **Compilation with warnings enabled (`-Wall`)**:
   ```bash
   gcc -Wall hello.c -o hello_program_warn
   ./hello_program_warn
   ```

3. **Program modification (`a = 200`) and re-compilation**:
   ```bash
   gcc -Wall hello.c -o hello_program
   ./hello_program
   ```
   **Output:**
   ```text
   Hello, Linux Lab!
   Sum of 200 and 5 is 205
   ```

---

