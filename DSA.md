### Module-1
---

## 1. Linked List

A **linked list** is a data structure that dynamically links memory locations to form a list of elements. These elements can be stored in sequential or scattered memory locations.

### Types of Linked Lists:

1. **Single Linked List**: Linear nodes with a "Next" reference.
2. **Double Linked List**: Nodes with "Next" and "Previous" references.
3. **Circular Linked List**: Similar to a double linked list, but the last node's "Next" reference points back to the first node.

---

## 2. Linear Data Structure

**Linear data structures** organize data elements sequentially, where each element has a distinct predecessor and successor, except for the first and last elements.

### Examples:

1. **Arrays**: Arrays store elements in contiguous memory locations and are accessed using indices starting from 0.

2. **Stacks**: Stacks follow the Last-In-First-Out (LIFO) principle. Elements are added (pushed) and removed (popped) from the top of the stack.

---

## 3. Applications of Stacks

Stacks, with their Last-In-First-Out (LIFO) behavior, find applications in various real-world scenarios:

1. **Undo-Redo Operations**: In software applications, stacks are used to implement undo and redo functionality. Each action taken by the user is pushed onto the stack, allowing the user to undo actions by popping from the stack and redo them by pushing back onto the stack.

2. **Web Browser History**: Stacks are employed to manage the history of visited web pages in a web browser. Each time a user navigates to a new page, the URL is pushed onto the stack. This enables the user to go back to the previous page using the "back" button.

---

## 4. Types of Queues

Different types of queues serve various purposes in managing data:

- **Linear Queue**: Elements are added at the rear and removed from the front in a First-In-First-Out (FIFO) manner.

- **Circular Queue**: In this type, both the rear and front wrap around in a circle. It prevents wastage of space in a linear queue.

- **Priority Queue**: Elements are prioritized for dequeuing based on their assigned priority. Elements with higher priority are dequeued before elements with lower priority.

- **Double Ended Queue (Deque)**: Elements can be added or removed from both ends of the queue.

  - **Input Restricted Double Ended Queue**: Only rear addition and front removal are allowed. It's used in scenarios where elements are primarily consumed from the front, but additions can occur at the rear.

  - **Output Restricted Double Ended Queue**: Only front addition and rear removal are allowed. This type is used when elements are primarily added from the front, while removals are performed at the rear.

---

## 5. Queue - Abstract Data Type (ADT)

A **Queue** is an example of an **Abstract Data Type (ADT)**. An ADT represents a type or class of objects, defining their behavior through:

- A set of values.
- A set of operations.

The crucial aspects of an ADT are:

- It specifies **what operations** can be performed on the objects.
- It **doesn't prescribe how** these operations are implemented.
- It **doesn't detail** the specific data organization or algorithms used for the operations.

---

## 6. Operations of a Stack

A **stack** is a data structure that follows the Last-In-First-Out (LIFO) principle. It supports several fundamental operations:

- **push(item)**: Adds an element to the top of the stack.

- **pop()**: Removes and returns the element from the top of the stack.

- **peek() or stackTop()**: Retrieves the element at the top of the stack without removing it.

- **isEmpty()**: Checks if the stack is empty and returns `true` if it is, otherwise `false`.

- **isFull()**: Checks if the stack is full and returns `true` if it is, otherwise `false`.

- **size()**: Returns the number of elements currently in the stack.

These operations collectively allow you to interact with and manage the elements in a stack, while maintaining the LIFO behavior.

---

## 7. Types of Queues and Their Applications

### Linear Queue

- **Application**: Print Queue in a Printer
  - Manages print jobs in the order they were received.

### Circular Queue

- **Application**: CPU Scheduling in Operating Systems
  - Facilitates round-robin scheduling of processes.

### Priority Queue

- **Application**: Task Scheduling in Real-Time Systems
  - Ensures higher priority tasks are executed before lower priority tasks.

### Double Ended Queue (Deque)

- **Application**: Navigation in Web Browsers
  - Implements navigation history, allowing users to move between web pages.

#### Input Restricted Double Ended Queue

- **Application**: Task Management in Operating Systems
  - Manages processes, favoring recently added processes for execution.
      
#### Output Restricted Double Ended Queue

- **Application**: Print Spooling
  - Organizes print jobs, adding to the front and dequeuing from the rear for printing.

---

## 8. Types of Linked Lists and Their Applications

### **Single Linked-list**

- **Application**: Music Playlist
  - Represents a playlist where each song is connected by a "Next" reference.

### **Double Linked-list**

- **Application**: Browser History
  - Represents a user's browsing history with forward and backward navigation.

### **Circular Linked-list**

- **Application**: Round-Robin Scheduling
  - Represents the order of processes in round-robin scheduling, where the last process points back to the first.

---

## 9. Convert Infix Expression to Postfix using Stack

- To convert the infix expression A / B ^ C - D to postfix using a stack, the steps involve scanning the expression from left to right and using a stack to manage operators.
- The converted postfix expression is: A B C ^ / D -

---

## 10. Using Stack to Reverse a String

- A stack can be used to reverse a string in scenarios where the order of characters needs to be reversed. Here's how:
  - Push: Push each character of the string onto the stack.
  - Pop: Pop the characters from the stack. Since the stack follows Last-In-First-Out (LIFO), the characters will be popped in reverse order.
- This technique can be useful for tasks like text processing or implementing features that require reversing inputs.

---

## 11. Circular Queue vs. Regular Queue


| **Circular Queue**                               | **Regular Queue**                                 |
|--------------------------------------------------|--------------------------------------------------|
| Rear wraps to front, efficiently using memory.   | No wrapping, follows a linear memory structure.   |
| Supports continuous insertion of elements.       | Stops accepting elements when it's full.         |
| Can overwrite existing data if needed.           | Does not overwrite data, ensuring integrity.     |
| Well-suited for scenarios with cyclic patterns.  | Commonly used for traditional FIFO scenarios.    |

---

## 12. Practical Applications of Queues

- Did before a plenty of times

---

## 13. Advantages of Doubly Linked List over Singly Linked List

1. **Bidirectional Traversal**:
   - Allows traversal in both directions (forward and backward).
   - Efficient for operations like reverse traversal and undo-redo mechanisms.

2. **Ease of Deletion and Insertion**:
   - Simplified deletion and insertion operations.
   - Direct access to previous and next nodes reduces complexity.
   - Suitable for scenarios with frequent dynamic changes.

---

## 14. Overflow Operation

```java
public class OverflowExample {
    public static void main(String[] args) {
        int maxSize = 3;
        int[] stackArray = new int[maxSize];
        int top = 2;  // Assume the top is at the maximum index

        int newValue = 40;

        if (top == maxSize - 1) {
            System.out.println("Overflow - Stack is full.");
        } else {
            stackArray[++top] = newValue;
            System.out.println("Inserted: " + newValue);
        }
    }
}
```

---

## Underflow Operation

```java
public class UnderflowExample {
    public static void main(String[] args) {
        int maxSize = 3;
        int[] stackArray = new int[maxSize];
        int top = -1;  // Assume the top is at the minimum index

        if (top == -1) {
            System.out.println("Underflow - Stack is empty.");
        } else {
            int poppedValue = stackArray[top--];
            System.out.println("Deleted: " + poppedValue);
        }
    }
}
```

---

## Insert Operation

```java
public class InsertExample {
    public static void main(String[] args) {
        int maxSize = 3;
        int[] stackArray = new int[maxSize];
        int top = -1;

        int newValue = 30;

        if (top == maxSize - 1) {
            System.out.println("Overflow - Stack is full.");
        } else {
            stackArray[++top] = newValue;
            System.out.println("Inserted: " + newValue);
        }
    }
}
```

---

## Delete Operation

```java
public class DeleteExample {
    public static void main(String[] args) {
        int maxSize = 3;
        int[] stackArray = new int[maxSize];
        int top = 2;  // Assume top points to the last element

        if (top == -1) {
            System.out.println("Underflow - Stack is empty.");
        } else {
            int poppedValue = stackArray[top--];
            System.out.println("Deleted: " + poppedValue);
        }
    }
}
```

---

## Show Element Operation

```java
public class ShowElementExample {
    public static void main(String[] args) {
        int maxSize = 3;
        int[] stackArray = {10, 20, 30};
        int top = 2;

        if (top == -1) {
            System.out.println("Stack is empty.");
        } else {
            int peekedValue = stackArray[top];
            System.out.println("Top Element: " + peekedValue);
        }
    }
}
```

---


## 15. Enqueue Operation

```java
public class EnqueueExample {
    public static void main(String[] args) {
        int maxSize = 5;
        int[] queueArray = new int[maxSize];
        int front = 0;
        int rear = -1;

        int newValue = 50;

        if (rear < maxSize - 1) {
            queueArray[++rear] = newValue;
            System.out.println("Enqueued: " + newValue);
        } else {
            System.out.println("Overflow - Queue is full.");
        }
    }
}
```

---

## Dequeue Operation

```java
public class DequeueExample {
    public static void main(String[] args) {
        int maxSize = 5;
        int[] queueArray = {10, 20, 30, 40, 50};
        int front = 0;
        int rear = 4;

        if (front <= rear) {
            int dequeuedValue = queueArray[front++];
            System.out.println("Dequeued: " + dequeuedValue);
        } else {
            System.out.println("Underflow - Queue is empty.");
        }
    }
}
```

---
 

## 16. Insertion Operation

```java
class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class InsertionExample {
    public static void main(String[] args) {
        Node head = null;

        int newValue = 30;

        Node newNode = new Node(newValue);
        newNode.next = head;
        head = newNode;

        System.out.println("Inserted: " + newValue);
    }
}
```

---

## Deletion Operation

```java
class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class DeletionExample {
    public static void main(String[] args) {
        Node head = null;

        if (head != null) {
            Node deletedNode = head;
            head = head.next;
            deletedNode.next = null;
            System.out.println("Deleted: " + deletedNode.data);
        } else {
            System.out.println("Underflow - List is empty.");
        }
    }
}
```

---

## Display Operation

```java
class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class DisplayExample {
    public static void main(String[] args) {
        Node head = null;

        if (head != null) {
            Node current = head;
            System.out.print("Linked List: ");
            while (current != null) {
                System.out.print(current.data + " ");
                current = current.next;
            }
            System.out.println();
        } else {
            System.out.println("List is empty.");
        }
    }
}
```


## 17.Circular Queue:

**Circular Behavior:** Rear and front are linked circularly, wrapping around when full, ensuring efficient space utilization.

**Example:**
```java
class CircularQueue {
    private int maxSize;
    private int[] queueArray;
    private int front;
    private int rear;
    private int currentSize;

    public CircularQueue(int size) {
        // Constructor and member variables setup...
    }

    public boolean isFull() {
        // Check if queue is full...
    }

    public void enqueue(int value) {
        if (!isFull()) {
            rear = (rear + 1) % maxSize; // Circular wrap-around
            queueArray[rear] = value;
            currentSize++;
            System.out.println("Enqueued: " + value);
        } else {
            System.out.println("Overflow - Queue is full.");
        }
    }
}

public class CircularQueueExample {
    public static void main(String[] args) {
        CircularQueue circularQueue = new CircularQueue(5);

        circularQueue.enqueue(10);
        circularQueue.enqueue(20);
        circularQueue.enqueue(30);
    }
}
```

## Double-Ended Queue (Deque):

**Dual Use:** Allows elements to be added/removal from both ends, serving as a versatile data structure.

**Example:**
```java
import java.util.ArrayDeque;

public class DequeExample {
    public static void main(String[] args) {
        ArrayDeque<Integer> deque = new ArrayDeque<>();

        deque.offerFirst(10);
        deque.offerLast(20);
        deque.offerLast(30);

        int firstValue = deque.pollFirst();  // Output: Dequeued: 10
        int lastValue = deque.pollLast();    // Output: Dequeued: 30

        System.out.println("Dequeued: " + firstValue);
        System.out.println("Dequeued: " + lastValue);
    }
}
```

In the Circular Queue example, the code showcases the circular behavior where elements are enqueued at the rear and wrap around when necessary. In the Double-Ended Queue example, the code demonstrates the versatility of the deque by adding and removing elements from both ends.

---

## 18. Singly Linked List vs. Doubly Linked List

| Aspect                    | Singly Linked List                        | Doubly Linked List                       |
|---------------------------|-------------------------------------------|------------------------------------------|
| Structure                 | Each node contains data and a next pointer | Each node contains data, next, and prev pointers |
| Traversal Efficiency      | Forward traversal only                   | Forward and backward traversal possible   |
| Memory Usage              | Requires less memory per node             | Requires more memory per node            |
| Insertion at Beginning    | Efficient (O(1))                         | Efficient (O(1))                        |
| Insertion at End          | Requires traversal (O(n))                | Efficient (O(1))                        |
| Insertion/Deletion in Middle | Requires traversal (O(n))             | Requires traversal (O(n))               |

---

## 19. Examples of Queue Usage with FIFO Property:

1. **Supermarket Checkout:**
   In a supermarket, customers form a queue at the checkout counters. The first customer in line is the one who gets served first, following the First-In-First-Out (FIFO) property of a queue. This ensures fairness and orderly processing of customer transactions.

2. **Print Job Management:**
   Printers in an office handle multiple print jobs. Print requests are added to a queue. The printer processes jobs in the order they were added, adhering to the FIFO property. This ensures that print jobs are handled in the sequence they were received.

## 20. Examples of Stack Usage with LIFO Property:

1. **Undo-Redo Functionality:**
   In software applications, the undo-redo feature allows users to reverse or redo actions. The last action performed is the first to be undone, following the Last-In-First-Out (LIFO) property. It ensures that actions are reversed in the order they were executed.

2. **Function Calls in Programming:**
   In programming, function calls are managed using a call stack. When a function is called, it's added to the stack. The last-called function is the first to be executed and removed from the stack, adhering to the LIFO property. This allows for the orderly execution and tracking of function calls.
