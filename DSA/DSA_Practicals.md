# Experiment-1: Searching and Sorting Algorithms

## 1. Selection Sort
- Time Complexity of O(n^2).
- Space Complexity of O(1).
```java
public class SelectionSort {
    public static void selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap arr[i] and arr[minIndex]
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    public static void main(String[] args) {
        int[] arr = {22, 13, 64, 12, 33};
        selectionSort(arr);

        System.out.println("Sorted array:");
        for (int value : arr) {
            System.out.print(value + " ");
        }
        // Output:Sorted array:
        // 12 13 22 33 64 
    }
}
```
![SelectionSort](https://media.geeksforgeeks.org/wp-content/uploads/20230724111204/Selection-Sort-in-Java-768.png)  
---
## 2. Insertion Sort
- Time Complexity of O(n^2).
- Space Complexity of O(1).
```java
public class InsertionSort {
    public static void insertionSort(int[] arr) {
        int n = arr.length;

        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        insertionSort(arr);

        System.out.println("Sorted array:");
        for (int value : arr) {
            System.out.print(value + " ");
        }
        // Output: Sorted array:
        // 11 12 22 25 64 
    }
}
```
![InsertionSort](https://media.geeksforgeeks.org/wp-content/uploads/insertionsort.png)
---
## 3. Merge Sort
- Time Complexity of O(nlogn).
- Space Complexity of O(n).
```java
public class MergeSort {
    public static void merge(int[] arr, int left, int middle, int right) {
        int n1 = middle - left + 1;
        int n2 = right - middle;

        int[] leftArray = new int[n1];
        int[] rightArray = new int[n2];

        for (int i = 0; i < n1; i++) {
            leftArray[i] = arr[left + i];
        }
        for (int j = 0; j < n2; j++) {
            rightArray[j] = arr[middle + 1 + j];
        }

        int i = 0, j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (leftArray[i] <= rightArray[j]) {
                arr[k] = leftArray[i];
                i++;
            } else {
                arr[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = leftArray[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = rightArray[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {
            int middle = left + (right - left) / 2;

            mergeSort(arr, left, middle);
            mergeSort(arr, middle + 1, right);

            merge(arr, left, middle, right);
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        int n = arr.length;

        mergeSort(arr, 0, n - 1);

        System.out.println("Sorted array:");
        for (int value : arr) {
            System.out.print(value + " ");
        }
        // Output: Sorted array:
        // 11 12 22 25 64
    }
}
```
![MergeSort](https://www.101computing.net/wp/wp-content/uploads/Merge-Sort-Algorithm.png)
---
## 4. Linear Search
- Time Complexity of O(n).
- Space Complexity of O(1).
```java
public class LinearSearch {
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i; // Element found at index 'i'.
            }
        }
        return -1; // Element not found in the list.
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        int target = 22;

        int result = linearSearch(arr, target);

        if (result != -1) {
            System.out.println("Element found at index " + result);
        } else {
            System.out.println("Element not found in the list.");
        }
        // Output: Element found at index 3
    }
}
```
![LinearSearch](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png)
---
## 5. Binary Search
- Time Complexity of O(log n).
- Space Complexity of O(1).
```java
public class BinarySearch {
    public static int binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return mid; // Element found at index 'mid'.
            }

            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1; // Element not found in the list.
    }

    public static void main(String[] args) {
        int[] arr = {11, 12, 22, 25, 64};
        int target = 22;

        int result = binarySearch(arr, target);

        if (result != -1) {
            System.out.println("Element found at index " + result);
        } else {
            System.out.println("Element not found in the list.");
        }
        // Output: Element found at index 2
    }
}
```
![BinarySearch](https://media.geeksforgeeks.org/wp-content/uploads/20230711134722/Binary-Search.png)
---

# Experiment-2: Stack, Queue & Linked List

## 1. Stack

- A **Stack** **is a linear data structure that follows the Last-In-First-Out (LIFO) principle.
- It consists of a collection of elements with two primary operations: push (to add an element to the top of the stack) and pop (to remove the top element).
- Stacks can be implemented using arrays or linked lists.
- Common use cases for stacks include managing function calls, tracking execution history, and solving problems like parsing expressions.

```java
import java.util.EmptyStackException;

public class Stack {
    private int[] stackArray;
    private int top;
    private int maxSize;

    public Stack(int maxSize) {
        this.maxSize = maxSize;
        stackArray = new int[maxSize];
        top = -1;
    }

    public void push(int value) {
        if (top == maxSize - 1) {
            throw new StackOverflowError("Stack is full");
        }
        top++;
        stackArray[top] = value;
    }

    public int pop() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        int value = stackArray[top];
        top--;
        return value;
    }

    public int peek() {
        if (isEmpty()) {
            throw new EmptyStackException();
        }
        return stackArray[top];
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == maxSize - 1;
    }

    public static void main(String[] args) {
        Stack stack = new Stack(5);
        stack.push(10);
        stack.push(20);
        stack.push(30);

        System.out.println("Top element: " + stack.peek());

        int poppedElement = stack.pop();
        System.out.println("Popped element: " + poppedElement);

        System.out.println("Is stack empty? " + stack.isEmpty());
        System.out.println("Is stack full? " + stack.isFull());
    }
    // Output:Top element:30
    // Popped element: 30
    // Is stack empty? false
    // Is stack full? false
}
```
![Stack](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221219100314/stack.drawio2.png)
---
## 2. Queue

- A **Queue** is a linear data structure that follows the First-In-First-Out (FIFO) principle.
- It consists of a collection of elements with two primary operations: enqueue (to add an element to the back of the queue) and dequeue (to remove the front element).
- Queues can be implemented using arrays, linked lists, or other data structures.
- Common use cases for queues include task scheduling, managing requests, and breadth-first search algorithms.
```java
public class queue {
    private int maxSize;
    private int front;
    private int rear;
    private int currentSize;
    private int array[];

    public queue(int size) {
        this.maxSize = size;
        front = 0;
        rear = -1;
        currentSize = 0;
        array = new int[maxSize];
    }

    public boolean isFull() {
        return (currentSize == maxSize);
    }

    public boolean isEmpty() {
        return (currentSize == 0);
    }

    public void enqueue(int item) {
        if (isFull()) {
            System.out.println("Queue is full!");
            return;
        }
        rear = (rear + 1) % maxSize;
        array[rear] = item;
        currentSize++;
        System.out.println("Added to queue" + item);
    }

    public int dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty!");
            return -1;
        }
        int temp = front;
        front = (front + 1) % maxSize;
        currentSize--;
        System.out.println("Removed from queue" + array[temp]);
        return array[temp];
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Queue is empty!");
            return;
        }
        int temp = front;
        while (temp != rear) {
            System.out.println(array[temp]);
            temp = (temp + 1) % maxSize;
        }
        System.out.println(array[rear]);
    }

    public static void main(String[] args) {
        queue queue = new queue(5);
        queue.enqueue(1);
        queue.enqueue(2);
        queue.enqueue(3);
        queue.enqueue(4);
        queue.dequeue();
        queue.enqueue(5);
        queue.display();
    }
    // Output: Added to queue1
    // Added to queue2    
    // Added to queue3    
    // Added to queue4    
    // Removed from queue1
    // Added to queue5
    // 2
    // 3
    // 4
    // 5
}
```
![Queue](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221213113312/Queue-Data-Structures.png)
---
## 3. Linked-List

-  **linked list** is a linear data structure made up of nodes, where each node contains data and a reference (or link) to the next node in the sequence.
- Linked lists come in various forms, such as singly linked lists (each node points to the next node), doubly linked lists (each node points to both the next and the previous nodes), and circular linked lists (the last node points back to the first node).
- Linked lists provide dynamic memory allocation and efficient insertions and deletions.
- Common use cases for linked lists include implementing data structures like stacks, queues, and symbol tables, and managing memory allocation in various programming scenarios.
```java
public class linkedlist {
    Node head;
    static class Node {
        int data;
        Node next;
        Node(int d) {
            data = d;
            next = null;
        }
    }
    public static linkedlist insert(linkedlist list, int data) {
        Node new_node = new Node(data);
        new_node.next = null;
        if (list.head == null) {
            list.head = new_node;
        } else {
            Node last = list.head;
            while (last.next != null) {
                last = last.next;
            }
            last.next = new_node;
        }
        return list;
    }
    public static void printList(linkedlist list) {
        Node currNode = list.head;
        System.out.print("\nLinkedList: ");
        while (currNode != null) {
            System.out.print(currNode.data + " ");
            currNode = currNode.next;
        }
        System.out.println("\n");
    }
    public static linkedlist deleteByKey(linkedlist list, int key) {
        Node currNode = list.head, prev = null;
        if (currNode != null && currNode.data == key) {
            list.head = currNode.next;
            System.out.println(key + " found and deleted");
            return list;
        }
        while (currNode != null && currNode.data != key) {
            prev = currNode;
            currNode = currNode.next;
        }
        if (currNode != null) {
            prev.next = currNode.next;
            System.out.println(key + " found and deleted");
        }
        if (currNode == null) {
            System.out.println(key + " not found");
        }
        return list;
    }
    public static linkedlist deleteAtPosition(linkedlist list, int index) {
        Node currNode = list.head, prev = null;
        if (index == 0 && currNode != null) {
            list.head = currNode.next;
            System.out.println(index + " position element deleted");
            return list;
        }
        int counter = 0;
        while (currNode != null) {
            if (counter == index) {
                prev.next = currNode.next;
                System.out.println(index + " position element deleted");
                break;
            } else {
                prev = currNode;
                currNode = currNode.next;
                counter++;
            }
        }
        if (currNode == null) {
            System.out.println(index + " position element not found");
        }
        return list;
    }
    public static void main(String[] args) {
        linkedlist list = new linkedlist();
        list = insert(list, 1);
        list = insert(list, 2);
        list = insert(list, 3);
        list = insert(list, 4);
        list = insert(list, 5);
        list = insert(list, 6);
        list = insert(list, 7);
        list = insert(list, 8);
        printList(list);
        deleteByKey(list, 1);
        printList(list);
        deleteByKey(list, 4);
        printList(list);
        deleteByKey(list, 10);
        printList(list);
        deleteAtPosition(list, 0);
        printList(list);
        deleteAtPosition(list, 2);
        printList(list);
        deleteAtPosition(list, 10);
        printList(list);
    }
    // Output:
    // 2
    // 3
    // 4
    // 5
}
```
![Linked-List](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20230726162542/Linked-List-Data-Structure.png)
---

# Experiment-3: Minimum Spanning Tree

## Prim's Algorithm
- Prim’s Algorithm also use Greedy approach to find the minimum spanning tree.
- In Prim’s Algorithm we grow the spanning tree from a starting position. 
- Unlike an edge in Kruskal's, we add vertex to the growing spanning tree in Prim's.

![Prim's Algorithm](https://i.stack.imgur.com/KofyW.gif)

## Kruskal's Algorithm
- Kruskal’s Algorithm builds the spanning tree by adding edges one by one into a growing spanning tree.
- Kruskal's algorithm follows greedy approach as in each iteration it finds an edge which has least weight and add it to the growing spanning tree.

![Kruskal's Algorithm](https://i.stack.imgur.com/6RCFr.gif)
---
# Experiment-4: All Pair Shortest Path

## Floyd Warshall Algorithm

**Applications**
1.	To find the shortest path is a directed graph.
2.	To find the transitive closure of directed graphs. To find the Inversion of real matrices.
3.	For testing whether an undirected graph is bipartite.
- Time Complexity of O(n^3).
- Space Complexity of O(n^2).
```java
class FloydWarshall {
    final static int INF = 9999;
    final static int nV = 4;

    void floydWarshall(int graph[][]) {
        int matrix[][] = new int[nV][nV];

        for (int i = 0; i < nV; i++) {
            for (int j = 0; j < nV; j++) {
                matrix[i][j] = graph[i][j];
            }
        }

        for (int k = 0; k < nV; k++) {
            for (int i = 0; i < nV; i++) {
                for (int j = 0; j < nV; j++) {
                    if (matrix[i][k] + matrix[k][j] < matrix[i][j]) {
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                    }
                }
            }
        }

        printMatrix(matrix);
    }

    void printMatrix(int matrix[][]) {
        for (int i = 0; i < nV; i++) {
            for (int j = 0; j < nV; j++) {
                if (matrix[i][j] == INF) {
                    System.out.print("INF ");
                } else {
                    System.out.print(matrix[i][j] + " ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int graph[][] = {
            { 0, 3, INF, 5 },
            { 2, 0, INF, 4 },
            { INF, 1, 0, INF },
            { INF, INF, 2, 0 }
        };

        FloydWarshall a = new FloydWarshall();
        a.floydWarshall(graph);
    }
    // Output:
    // 0 3 7 5 
    // 2 0 6 4 
    // 3 1 0 5 
    // 5 3 2 0 
}
```
![Floyd-Warshall Algorithm](https://upload.wikimedia.org/wikipedia/commons/b/b2/Floyd-Warshall-Algorithm-Problem.png)
---
# Experiment-5: Longest Common Subsequence using Dynamic Programming

**The Longest Common Subsequence** (LCS) is defined as the longest subsequence that is common to all the given sequences, provided that the elements of the subsequence are not required to occupy consecutive positions within the original sequences.

- Given Two sequences, X and Y.
- Initialize a table LCS of size (X.length + 1) * (Y.length + 1).
- Set the labels X.label to X and Y.label to Y.
- Initialize LCS[0][*] and LCS[*][0] to 0 (the base case).

The algorithm proceeds as follows:

1. Start the loop from LCS[1][1].
2. Compare X[i] and Y[j].
3. If X[i] is equal to Y[j]:
   - LCS[i][j] = 1 + LCS[i-1][j-1] (length of LCS increased by 1).
   - Point an arrow to LCS[i][j] to track the matching characters.
4. If X[i] is not equal to Y[j]:
   - LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]) (take the maximum of the adjacent LCS values).
   - Point an arrow to the cell with the maximum value to track the path.

- Time Complexity: O(n^3)
- Space Complexity: O(n^2)

## Implementation
```java
public class LongestCommonSubsequence {
    public static String findLCS(String str1, String str2) {
        int m = str1.length();
        int n = str2.length();

        int[][] dp = new int[m + 1][n + 1];

        // Fill the dp array using a bottom-up approach
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                } else if (str1.charAt(i - 1) == str2.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int length = dp[m][n];
        char[] lcs = new char[length];
        int i = m, j = n;
        while (i > 0 && j > 0) {
            if (str1.charAt(i - 1) == str2.charAt(j - 1)) {
                lcs[length - 1] = str1.charAt(i - 1);
                i--;
                j--;
                length--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }
        return new String(lcs);
    }

    public static void main(String[] args) {
        String str1 = "AGGTAB";
        String str2 = "GXTXAYB";
        String lcs = findLCS(str1, str2);
        System.out.println("Longest Common Subsequence: " + lcs);
    }
    // Longest Common Subsequence: GTAB
}
```
![Longest Common Subsequence](https://media.geeksforgeeks.org/wp-content/uploads/20230711111122/LCS-1.png)
---
# Experiment-6: 8 Queen’s Problem

- The Eight Queens Problem is a classic combinatorial puzzle that involves placing eight queens on an 8x8 chessboard in such a way that no two queens threaten each other.
- This means that no two queens can be in the same row, column, or diagonal. The problem is to find all possible solutions to this puzzle.

## Implementation
```java
import java.util.Arrays;

class EightQP {
    static final int N = 8;

    static boolean isSafe(int[][] board, int row, int col) {
        for (int x = 0; x < col; x++)
            if (board[row][x] == 1)
                return false;

        for (int x = row, y = col; x >= 0 && y >= 0; x--, y--)
            if (board[x][y] == 1)
                return false;

        for (int x = row, y = col; x < N && y >= 0; x++, y--)
            if (board[x][y] == 1)
                return false;

        return true;
    }

    static boolean solveNQueens(int[][] board, int col) {
        if (col == N) {
            for (int[] row : board)
                System.out.println(Arrays.toString(row));
            System.out.println();
            return true;
        }

        for (int i = 0; i < N; i++) {
            if (isSafe(board, i, col)) {
                board[i][col] = 1;
                if (solveNQueens(board, col + 1))
                    return true;
                board[i][col] = 0;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int[][] board = new int[N][N];
        if (!solveNQueens(board, 0))
            System.out.println("No solution found");
    }
    // [1, 0, 0, 0, 0, 0, 0, 0]
    // [0, 0, 0, 0, 0, 0, 1, 0]
    // [0, 0, 0, 0, 1, 0, 0, 0]
    // [0, 0, 0, 0, 0, 0, 0, 1]
    // [0, 1, 0, 0, 0, 0, 0, 0]
    // [0, 0, 0, 1, 0, 0, 0, 0]
    // [0, 0, 0, 0, 0, 1, 0, 0]
    // [0, 0, 1, 0, 0, 0, 0, 0]
}
```
![Eight Queen's Problem](https://media.geeksforgeeks.org/wp-content/uploads/20200725103943/ApronusDiagram1595653398.png)
---

# Experiment-7: 15 Puzzle Problem
- The 15 Puzzle Problem, also known as the Sliding Puzzle, is a classic sliding block puzzle that consists of a 4x4 grid with 15 numbered tiles and one empty space. 
- The objective is to rearrange the tiles by sliding them into the empty space to form a specific order, usually from 1 to 15. 
- The puzzle can be solved by making a sequence of legal moves, such as sliding a tile into the empty space.

- Time Complexity : O(n^2)
- Space Complexity: O(n)

![15 Puzzle Problem](https://media.geeksforgeeks.org/wp-content/uploads/15-puzzle.png)

## Algorithm
1. Initialize the 4x4 grid representing the initial puzzle state.
2. Verify the solvability of the initial puzzle configuration; if not solvable, terminate.
3. Define the goal state with tiles in ascending order and an empty cell at the bottom-right.
4. Initialize an empty set to store visited states and a queue to explore possible states.
5. Create a state object for the initial puzzle layout, calculate the heuristic cost, and add it to the queue.
6. While the queue is not empty:
   - Dequeue the state with the lowest combined cost (heuristic + actual cost).
   - Check if it's the goal state; if yes, reconstruct and print the solution path and terminate.
   - If not the goal state:
      - Mark the state as visited and generate and evaluate possible moves.
      - Calculate heuristic costs for new states, update actual costs, and enqueue them.
When the goal state is reached, reconstruct the solution path from goal to initial state and print the sequence of moves.
If the queue becomes empty and no solution is found, print a message indicating that no solution exists.
---
# Experiment-8: Naïve String-Matching
- The Naïve String Matching algorithm, also known as the Brute Force or straightforward pattern matching algorithm, is a simple method for finding occurrences of a pattern within a text. 
- It compares the pattern to the text character by character, shifting the pattern one character at a time. 
- When a complete match is found, the algorithm reports the position of the match. 
- It is not the most efficient string-matching algorithm for large texts but serves as a basic reference.

## Implementation:
```java
public class NaiveStringMatching {
    public static void search(String text, String pattern) {
        int n = text.length();
        int m = pattern.length();

        for (int i = 0; i <= n - m; i++) {
            int j;

            for (j = 0; j < m; j++) {
                if (text.charAt(i + j) != pattern.charAt(j))
                    break;
            }

            if (j == m) {
                System.out.println("Pattern found at index " + i);
            }
        }
    }

    public static void main(String[] args) {
        String text = "AABAACAADAABAAABAA";
        String pattern = "AABA";
        search(text, pattern);
    }
    // Output:
    // Pattern found at index 0
    // Pattern found at index 9 
    // Pattern found at index 13
}
```
---
# Experiment-9: Palindromic Tree

- A Palindromic Tree is a data structure used to efficiently process and search for palindromes within a given string.
- It's particularly useful for tasks such as finding the longest palindromic substring in a text.

## Explanation of Palindromic Tree

A Palindromic Tree is a data structure used for efficiently processing and searching for palindromes within a given string. It's a complex and advanced data structure that has applications in various string-related problems, such as finding the longest palindromic substring in a text.

Here's a high-level explanation of how a Palindromic Tree works:

1. **Node Structure**: The tree is composed of nodes, each representing a palindrome. Each node typically has the following attributes:
   - `length`: The length of the palindrome represented by the node.
   - `suffixLink`: A link to the node that represents the largest suffix palindrome of the current palindrome.

2. **Initialization**: To initialize the Palindromic Tree, you create two special nodes: one for even-length palindromes and one for odd-length palindromes. These are often referred to as the "dummy nodes."

3. **Building the Tree**: You iterate through the input string character by character, adding each character to the Palindromic Tree. The tree grows dynamically as you process the string. When adding a character, you follow these steps:
   - Check if the current character can extend any existing palindrome in the tree.
   - If it can, update the tree accordingly.
   - If not, create a new node to represent the current character and connect it to the tree.

4. **Suffix Link**: The `suffixLink` is a crucial component of the Palindromic Tree. It helps efficiently determine the largest suffix palindrome for the current palindrome being processed. It is computed by finding the longest suffix of the current palindrome that is also a palindrome and connecting the two nodes accordingly.

5. **Applications**: The Palindromic Tree can be used for various tasks, including:
   - Finding all palindromic substrings in a given string.
   - Finding the longest palindromic substring in a string.
   - Counting the number of palindromic substrings in a string.
   - Solving problems related to palindromes and substrings efficiently.

6. **Complexity**: The Palindromic Tree is a sophisticated data structure that provides efficient solutions to palindrome-related problems. It has a time complexity of O(N), where N is the length of the input string, making it a powerful tool for solving these problems.

Overall, the Palindromic Tree is a powerful data structure for efficiently processing and searching for palindromes within strings, and it plays a significant role in string algorithm research and development.