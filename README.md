# Monty Interpreter Project

## Overview

This is a team project to implement a Monty Byte Code interpreter in C. The interpreter processes Monty byte code files (.m) and executes stack and queue operations. The project focuses on understanding and implementing Last In First Out (LIFO) and First In First Out (FIFO) principles.

## Team

- **Project Initiator:** Julien Barbier
- **Team Members:** Victor Ochuba, Israel Eze

## Learning Objectives

By completing this project, members are expected to:

- Explain LIFO and FIFO concepts.
- Understand stack and queue data structures and their common implementations.
- Implement stack and queue operations in C.
- Demonstrate proper usage of global variables.
- Adhere to coding standards and style guidelines.

## Project Requirements

- Use allowed editors: vi, vim, emacs.
- Compile code on Ubuntu 20.04 LTS using `gcc` with specified options.
- Follow the Betty style guidelines.
- Utilize a maximum of one global variable.
- Limit functions to a maximum of five per file.
- Include prototypes in the header file (`monty.h`).
- Use include guards for header files.
- Implement error handling for file opening, unknown instructions, and memory allocation failures.

## Compilation & Execution

Compile the code using the provided command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

Execute the interpreter:

```bash
$ ./monty file
```

## File Structure

- `monty.h`: Header file containing data structure definitions and function prototypes.
- `monty.c`: Main file for the Monty interpreter program.
- Other files: Implement specific functions and operations.

## Testing

Collaborate on a set of tests to ensure the correctness of the interpreter. Strongly encourage working together to cover various scenarios.

## Submission

Ensure that the code is pushed to a single project repository per group. Any cloning or forking before the second deadline may result in a 0% score.

*Note: Detailed project requirements, instructions, and guidelines are provided in the project description.*
