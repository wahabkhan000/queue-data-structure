# Queue Data Structure

A collection of Queue implementations and projects built from scratch in C++ to develop a deep understanding of Queue data structures, memory management, pointers, and their practical applications.

## About

This repository documents my journey of learning and implementing the **Queue data structure from scratch**.

The goal is not only to implement Queue operations, but to understand how different Queue implementations work internally, why they are designed differently, and where they are useful in real-world systems.

---

## What is a Queue?

A Queue is a linear data structure that follows the **FIFO (First In, First Out)** principle.

The first element inserted into the Queue is the first element removed.

```text
        ENQUEUE →                 DEQUEUE →
                   ┌─────────────────────┐
                   ↓                     ↓
              [10] → [20] → [30] → [40]
               FRONT                 REAR
```

### Core Operations

| Operation   | Description                                   | Complexity |
| ----------- | --------------------------------------------- | ---------- |
| `enqueue()` | Adds an element at the rear                   | O(1)       |
| `dequeue()` | Removes an element from the front             | O(1)       |
| `peek()`    | Returns the front element without removing it | O(1)       |
| `isEmpty()` | Checks whether the Queue is empty             | O(1)       |

---

## Implementations

This repository will contain multiple Queue implementations.

### 1. Linked List Queue

A dynamically allocated Queue implemented using linked-list nodes.

**File:**

```text
linked_list_queue.cpp
```

Concepts covered:

* Nodes
* `front` and `rear` pointers
* Dynamic memory allocation
* Pointer manipulation
* Enqueue and dequeue
* Empty Queue handling
* Single-node edge case
* Memory deallocation

### 2. Array Queue

A Queue implemented using a fixed-size array.

Concepts covered:

* Array-based storage
* Front and rear indexes
* Queue capacity
* Overflow and underflow
* Index management

### 3. Circular Queue

A Queue that treats the array as circular so that previously unused positions can be reused.

Concepts covered:

* Circular indexing
* Modulo operator
* Front/rear movement
* Queue capacity
* `count`-based empty/full detection
* Logical order vs physical array order

### 4. Queue Projects

Additional Queue-based projects will be added as I progress.

Possible projects include:

* Queue visualizer
* Printer queue simulation
* CPU ready queue
* Task scheduling queue
* Priority Queue
* Deque
* Queue-based system simulations

---

## Learning Progression

```text
Queue
 │
 ├── FIFO Principle
 │
 ├── Queue Operations
 │   ├── Enqueue
 │   ├── Dequeue
 │   ├── Peek
 │   └── isEmpty
 │
 ├── Linked List Queue
 │
 ├── Array Queue
 │
 ├── Circular Queue
 │
 ├── Priority Queue
 │
 ├── Deque
 │
 └── Queue-Based Projects
```

---

## Important Concepts

Throughout this repository, I focus on understanding:

* FIFO behavior
* Front and rear management
* Pointer manipulation
* Dynamic memory allocation
* Memory deallocation
* Edge cases
* Array indexing
* Circular indexing
* Time complexity
* Space complexity
* Data structure design

---

## Language

**C++**

The implementations are built from scratch without relying on the STL Queue implementation, with the purpose of understanding how Queue structures work internally.

---

## Repository Structure

```text
queue-data-structure/
│
├── README.md
│
├── linked_list_queue.cpp
│
├── array_queue.cpp
│
├── circular_queue.cpp
│
└── projects/
    ├── ...
    └── ...
```

The repository structure will grow as new Queue implementations and projects are developed.

---

## Goal

The goal of this repository is to move beyond simply knowing how to use a Queue and instead understand **how Queue data structures work internally**.

Each implementation is built from scratch and studied through its:

* Design
* Operations
* Memory behavior
* Edge cases
* Complexity
* Practical applications

This repository is part of my broader journey toward **low-level programming, systems programming, and operating-system development**.
