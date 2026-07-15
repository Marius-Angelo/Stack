# C Stack Evolution

This repository documents my journey of implementing a stack data structure in C.
It shows the evolution of a stack implementation through three stages of complexity.

## Project Evolution

I built this project in three iterations, each introducing a more advanced C programming concept:
* **Stack 1(Basic):** A standard linked-list implementation using simple pointers.(`struct STACK1 *`). The functions return the head of the stack to keep it updated.
* **Stack 2(Double Pointers):** Refactored the code to use double pointers(`struct STACK2 **`).This allow that functions like `push2` or `pop2` to modify the original stack directly, making the code clearer and avoiding return repetitivity.
* **Stack 3(Generic Programming):** Replaces the standard data types with (`void*`). This turns the structure into a Generic Stack capable of storing integers, characters or other data types simultaneously, using type casting.

## How to Run

This project is modular, separated into header(`.h`) and implementation(`.c`) files. You can compile all versions using GCC:
```
gcc -Wall -o stack_app main.c stack1.c stack2.c stack3.c
```
Run the executable:
```
./stack_app
```


## Memory Management
A major focus was proper memory allocation and preventing memory leaks.
The code has been fully tested on Linux using **valgrind**.
```
valgrind --leak-check=full ./stack_app
```
Result: 0 bytes in 0 blocks (All heap blocks were freed)
