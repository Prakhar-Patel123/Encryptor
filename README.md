# Encryptor

## Overview

This project is a simple encryption and decryption system written in the C programming language.
The program takes a student's name and marks, encrypts the marks using a basic cipher technique, and stores the encrypted data inside a file named `encrypted.txt`.

A separate decryption program reads the encrypted data from the file and restores the original marks.

This project was created for learning purposes to explore:

* File handling in C
* Encryption and decryption concepts
* Bitwise XOR operations
* Input/output handling
* Error checking
* Data persistence

---

# Features

* Encrypts marks before storing them
* Saves encrypted data into a file
* Reads encrypted data from the file
* Decrypts and restores original marks
* Uses reversible XOR-based cipher logic
* Includes basic file error handling

---

# Technologies Used

* C Programming Language
* Standard C Library (`stdio.h`)

---

# How the Encryption Works

The encryption formula used is:

```c
(marks + 71) ^ 9
```

The decryption formula is:

```c
(num ^ 9) - 71
```

The XOR (`^`) operation is reversible, which allows the original data to be restored.

---

# Files Included

## `encrypter.c`

* Takes user input
* Encrypts marks
* Stores encrypted data in `encrypted.txt`

## `decrypter.c`

* Reads encrypted data
* Decrypts the marks
* Displays original information

---

# Example

## Input

```txt
Prakhar 92
```

## Stored in File

```txt
Prakhar    28
```

## Decrypted Output

```txt
The value of name is: Prakhar
Marks are: 92
```

---

# About the Developer

## Prakhar Patel

I am Prakhar Patel, a 13-year-old student studying in Class 9.
I am passionate about:

* C and C++ programming
* Linux systems
* Embedded systems
* Arduino
* Computer architecture
* VLSI learning
* Low-level programming
* CLI tools and terminal workflows

I enjoy building projects that help me understand how computers work internally, from software to hardware.

---

# Contact

📧 Email: [prakharpatel343@gmail.com](mailto:prakharpatel343@gmail.com)

Feel free to reach out for collaboration, learning discussions, or project feedback.

---

# Future Improvements

* Stronger encryption methods
* Password-based encryption
* Binary file support
* GUI version
* Multiple-user support
* Data integrity checking
* Struct-based storage system

---

# License

This project is open for learning and educational purposes. So anyone can do anything with it on there risk.
