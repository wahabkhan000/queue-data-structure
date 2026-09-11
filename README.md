# Queue Data Structure

A collection of C++ implementations for learning and practicing the **Queue data structure** and its different variations.

The repository focuses on understanding how queues work and how the same concept can be implemented using different underlying data structures.

## Implementations

### Standard Queue

* Array-based queue
* Linked-list-based queue
* Enqueue and dequeue operations

### Priority Queue

* Array-based priority queue
* Unsorted priority queue
* Sorted priority queue

### Deque

* Double-ended queue
* Deque implemented using a doubly linked list
* Insertion and deletion from both ends

## Concepts Covered

* FIFO (First In, First Out)
* Enqueue
* Dequeue
* Front and rear
* Queue overflow and underflow
* Array-based implementation
* Linked-list-based implementation
* Priority-based ordering
* Double-ended queues

## Files

| File                                        | Implementation                   |
| ------------------------------------------- | -------------------------------- |
| `Array_implimentation_of_Queue.cpp`         | Queue using an array             |
| `linked-list_implementation_of_a_Queue.cpp` | Queue using a linked list        |
| `array_priority_queue.cpp`                  | Basic array-based priority queue |
| `array_priority_queue_sorted.cpp`           | Sorted array priority queue      |
| `priority-unsorted-queue.cpp`               | Unsorted priority queue          |
| `deque_doubly_linked_list.cpp`              | Deque using a doubly linked list |
| `...`                                                                          |

## Technologies

* C++
* Standard C++ libraries
* Console-based programs

## Running the Programs

Each `.cpp` file can be compiled separately.

```bash
g++ filename.cpp -o program
./program
```

For example:

```bash
g++ linked-list_implementation_of_a_Queue.cpp -o queue
./queue
```

Most programs are interactive and require user input.

## Purpose

This repository is part of my practical data structures learning.

The goal is to understand queues by implementing them from scratch and comparing different approaches, including arrays, linked lists, priority queues, and deques.
