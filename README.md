# C Programming Language - Basics Guide

## Table of Contents
1. [Introduction](#introduction)
2. [Basic Structure](#basic-structure)
3. [Data Types](#data-types)
4. [Variables and Constants](#variables-and-constants)
5. [Operators](#operators)
6. [Control Structures](#control-structures)
7. [Functions](#functions)
8. [Arrays](#arrays)
9. [Pointers](#pointers)
10. [Strings](#strings)
11. [Structures](#structures)
12. [File I/O](#file-io)
13. [Preprocessor Directives](#preprocessor-directives)

---

## Introduction

C is a general-purpose, procedural programming language developed by **Dennis M. Ritchie** at Bell Laboratories in 1972. Originally created for developing the UNIX operating system, C has become one of the most influential programming languages in history.

### Key Features of C:
- **Procedural Language**: Programs are structured as procedures (functions)
- **Middle-Level Language**: Combines features of both high-level and low-level languages
- **Portable**: C programs can run on different platforms with minimal modifications
- **Efficient and Fast**: Direct memory access and minimal runtime overhead
- **Rich Library**: Extensive standard library functions
- **Structured**: Supports functions and modular programming
- **Extensible**: Allows adding custom functions and libraries

---

## Basic Structure

Every C program follows a basic structure:

```c
#include <stdio.h>    // Preprocessor directive

int main() {          // Main function
    printf("Hello, World!\n");  // Statement
    return 0;         // Return statement
}
```

### Components:
1. **Preprocessor Directives**: Lines starting with `#` (e.g., `#include`, `#define`)
2. **Main Function**: Entry point of the program
3. **Statements**: Instructions ending with semicolon (`;`)
4. **Return Statement**: Returns control to the operating system

---

## Data Types

C provides several fundamental data types:

### Primary Data Types:

| Data Type | Size (bytes) | Range | Format Specifier |
|-----------|--------------|-------|------------------|
| `char` | 1 | -128 to 127 | `%c` |
| `unsigned char` | 1 | 0 to 255 | `%c` |
| `int` | 2 or 4 | -32,768 to 32,767 (2 bytes) | `%d` or `%i` |
| `unsigned int` | 2 or 4 | 0 to 65,535 (2 bytes) | `%u` |
| `short` | 2 | -32,768 to 32,767 | `%hd` |
| `long` | 4 or 8 | -2,147,483,648 to 2,147,483,647 | `%ld` |
| `float` | 4 | 3.4E-38 to 3.4E+38 | `%f` |
| `double` | 8 | 1.7E-308 to 1.7E+308 | `%lf` |
| `long double` | 10, 12, or 16 | Extended precision | `%Lf` |

### Derived Data Types:
- Arrays
- Pointers
- Structures
- Unions

---

## Variables and Constants

### Variables

Variables are named storage locations that can hold values.

```c
// Declaration
int age;
float salary;
char grade;

// Initialization
int age = 25;
float salary = 50000.50;
char grade = 'A';

// Multiple declarations
int x, y, z;
int a = 10, b = 20, c = 30;
```

### Variable Naming Rules:
- Must begin with a letter or underscore
- Can contain letters, digits, and underscores
- Case-sensitive (`age` and `Age` are different)
- Cannot use reserved keywords

### Constants

Values that cannot be changed during program execution.

```c
// Using #define
#define PI 3.14159
#define MAX 100

// Using const keyword
const int DAYS = 7;
const float GRAVITY = 9.8;
```

---

## Operators

### Arithmetic Operators
```c
+   // Addition
-   // Subtraction
*   // Multiplication
/   // Division
%   // Modulus (remainder)
++  // Increment
--  // Decrement
```

### Relational Operators
```c
==  // Equal to
!=  // Not equal to
>   // Greater than
<   // Less than
>=  // Greater than or equal to
<=  // Less than or equal to
```

### Logical Operators
```c
&&  // Logical AND
||  // Logical OR
!   // Logical NOT
```

### Assignment Operators
```c
=   // Simple assignment
+=  // Add and assign
-=  // Subtract and assign
*=  // Multiply and assign
/=  // Divide and assign
%=  // Modulus and assign
```

### Bitwise Operators
```c
&   // Bitwise AND
|   // Bitwise OR
^   // Bitwise XOR
~   // Bitwise NOT
<<  // Left shift
>>  // Right shift
```

---

## Control Structures

### If-Else Statement
```c
if (condition) {
    // code block
} else if (another_condition) {
    // code block
} else {
    // code block
}
```

### Switch Statement
```c
switch (expression) {
    case constant1:
        // code block
        break;
    case constant2:
        // code block
        break;
    default:
        // default code block
}
```

### Loops

**While Loop:**
```c
while (condition) {
    // code block
}
```

**Do-While Loop:**
```c
do {
    // code block
} while (condition);
```

**For Loop:**
```c
for (initialization; condition; increment) {
    // code block
}
```

### Loop Control Statements
- `break`: Exits the loop
- `continue`: Skips current iteration
- `goto`: Jumps to labeled statement (use sparingly)

---

## Functions

Functions are reusable blocks of code that perform specific tasks.

### Function Declaration and Definition
```c
// Function declaration (prototype)
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}

// Function call
int result = add(5, 3);
```

### Types of Functions:
1. **Library Functions**: Predefined (e.g., `printf()`, `scanf()`)
2. **User-Defined Functions**: Created by programmer

### Function Parameters:
- **Call by Value**: Copies value to function
- **Call by Reference**: Passes address using pointers

```c
// Call by value
void modify(int x) {
    x = 10;  // Original unchanged
}

// Call by reference
void modify(int *x) {
    *x = 10;  // Original changed
}
```

---

## Arrays

Arrays store multiple values of the same type in contiguous memory.

### One-Dimensional Array
```c
// Declaration
int numbers[5];

// Initialization
int numbers[5] = {1, 2, 3, 4, 5};
int numbers[] = {1, 2, 3, 4, 5};  // Size inferred

// Accessing elements
numbers[0] = 10;  // First element
int x = numbers[2];  // Third element
```

### Multi-Dimensional Array
```c
// 2D array declaration
int matrix[3][4];

// Initialization
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// Accessing elements
matrix[0][1] = 10;
```

---

## Pointers

Pointers store memory addresses of variables.

### Pointer Basics
```c
int x = 10;
int *ptr;      // Pointer declaration
ptr = &x;      // Store address of x

// Accessing
printf("%d", *ptr);   // Dereference (prints 10)
printf("%p", ptr);    // Address

// Modifying through pointer
*ptr = 20;    // x is now 20
```

### Pointer Arithmetic
```c
int arr[] = {10, 20, 30};
int *p = arr;

p++;        // Move to next element
p--;        // Move to previous element
*(p + 2);   // Access third element
```

### Types of Pointers:
- **Null Pointer**: `int *ptr = NULL;`
- **Void Pointer**: `void *ptr;`
- **Wild Pointer**: Uninitialized pointer
- **Dangling Pointer**: Points to deallocated memory

---

## Strings

Strings are arrays of characters terminated by null character (`\0`).

### String Declaration
```c
char str1[6] = "Hello";
char str2[] = "World";
char str3[20] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

### String Functions (string.h)
```c
strlen(str)           // Length of string
strcpy(dest, src)     // Copy string
strcat(dest, src)     // Concatenate strings
strcmp(str1, str2)    // Compare strings
strchr(str, ch)       // Find character
strstr(str1, str2)    // Find substring
```

### String Input/Output
```c
// Input
scanf("%s", str);        // Reads until whitespace
gets(str);               // Reads entire line (unsafe)
fgets(str, size, stdin); // Safer alternative

// Output
printf("%s", str);
puts(str);
```

---

## Structures

Structures group different data types under a single name.

### Structure Declaration and Usage
```c
// Declaration
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Creating structure variable
struct Student s1;

// Accessing members
s1.roll_no = 101;
strcpy(s1.name, "John");
s1.marks = 85.5;

// Initialization
struct Student s2 = {102, "Alice", 90.0};
```

### Typedef with Structures
```c
typedef struct {
    int x;
    int y;
} Point;

Point p1 = {10, 20};  // No need for 'struct' keyword
```

### Nested Structures
```c
struct Address {
    char city[50];
    int pin;
};

struct Person {
    char name[50];
    struct Address addr;
};
```

---

## File I/O

C provides functions to work with files.

### File Operations

**Opening a File:**
```c
FILE *fptr;
fptr = fopen("filename.txt", "mode");
```

**File Modes:**
- `"r"`: Read (file must exist)
- `"w"`: Write (creates new or overwrites)
- `"a"`: Append (adds to end)
- `"r+"`: Read and write
- `"w+"`: Write and read
- `"a+"`: Append and read

**Reading from File:**
```c
// Character by character
int ch = fgetc(fptr);

// String
fgets(str, size, fptr);

// Formatted input
fscanf(fptr, "%d", &num);
```

**Writing to File:**
```c
// Character
fputc('A', fptr);

// String
fputs("Hello", fptr);

// Formatted output
fprintf(fptr, "%d %s", num, str);
```

**Closing a File:**
```c
fclose(fptr);
```

### Complete Example
```c
#include <stdio.h>

int main() {
    FILE *fptr;
    
    // Write to file
    fptr = fopen("data.txt", "w");
    fprintf(fptr, "Hello, File I/O!\n");
    fclose(fptr);
    
    // Read from file
    char buffer[100];
    fptr = fopen("data.txt", "r");
    fgets(buffer, 100, fptr);
    printf("%s", buffer);
    fclose(fptr);
    
    return 0;
}
```

---

## Preprocessor Directives

Preprocessor directives are instructions processed before compilation.

### Common Directives

**#include**: Include header files
```c
#include <stdio.h>   // Standard library
#include "myfile.h"  // User-defined header
```

**#define**: Define macros
```c
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
```

**Conditional Compilation:**
```c
#ifdef MACRO
    // code if MACRO is defined
#endif

#ifndef MACRO
    // code if MACRO is not defined
#endif

#if condition
    // code
#elif another_condition
    // code
#else
    // code
#endif
```

**#undef**: Undefine a macro
```c
#undef PI
```

**#pragma**: Compiler-specific directives
```c
#pragma once  // Include guard
```

---

## Best Practices

1. **Code Organization**: Use meaningful variable names and comments
2. **Memory Management**: Free dynamically allocated memory
3. **Error Handling**: Check return values of functions
4. **Avoid Global Variables**: Use local variables when possible
5. **Use const**: For values that shouldn't change
6. **Indentation**: Maintain consistent code formatting
7. **Compile with Warnings**: Use `-Wall` flag with gcc
8. **Test Thoroughly**: Test edge cases and boundary conditions

---

## Common Header Files

- `<stdio.h>`: Standard Input/Output
- `<stdlib.h>`: Standard Library (memory allocation, conversions)
- `<string.h>`: String manipulation
- `<math.h>`: Mathematical functions
- `<time.h>`: Date and time functions
- `<ctype.h>`: Character handling functions
- `<stdbool.h>`: Boolean type support

---

## Quick Reference: Common Functions

### Input/Output
- `printf()`, `scanf()`, `getchar()`, `putchar()`, `gets()`, `puts()`

### String Functions
- `strlen()`, `strcpy()`, `strcmp()`, `strcat()`, `strchr()`, `strstr()`

### Memory Functions
- `malloc()`, `calloc()`, `realloc()`, `free()`

### Mathematical Functions
- `sqrt()`, `pow()`, `abs()`, `ceil()`, `floor()`, `sin()`, `cos()`, `tan()`

### Utility Functions
- `atoi()`, `atof()`, `rand()`, `exit()`

---

## Learning Path

1. **Basics**: Data types, variables, operators
2. **Control Flow**: if-else, loops, switch
3. **Functions**: Understanding modular programming
4. **Arrays**: Single and multi-dimensional
5. **Pointers**: Memory management
6. **Strings**: Character arrays and manipulation
7. **Structures**: Complex data types
8. **File I/O**: Reading and writing files
9. **Dynamic Memory**: malloc, calloc, free
10. **Advanced Topics**: Linked lists, trees, algorithms

---

## Resources for Further Learning

- **Books**: "The C Programming Language" by Kernighan & Ritchie
- **Online**: GeeksforGeeks, TutorialsPoint, Learn-C.org
- **Practice**: LeetCode, HackerRank, Codeforces
- **Documentation**: Official C Standards (ISO/IEC 9899)

---

**Happy Coding!**