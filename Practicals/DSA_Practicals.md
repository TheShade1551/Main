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

### Prim's Algorithm Implementation:
```java
// import java.lang.*;   
// import java.util.*;   
// import java.io.*;   
class MSpanningTree {

    private static final int countOfVertices = 9;

    int findMinKeyVertex(int keys[], Boolean setOfMST[]) {
        int minimum_index = -1;
        int minimum_value = Integer.MAX_VALUE;

        for (int vertex = 0; vertex < countOfVertices; vertex++)
            if (setOfMST[vertex] == false && keys[vertex] < minimum_value) {
                minimum_value = keys[vertex];
                minimum_index = vertex;
            }

        return minimum_index;
    }

    void showMinimumSpanningTree(int mstArray[], int graphArray[][]) {
        System.out.println("Edge \t\t Weight");
        for (int j = 1; j < countOfVertices; j++)
            System.out.println(mstArray[j] + " <-> " + j + "\t \t" + graphArray[j][mstArray[j]]);
    }

    void designMST(int graphArray[][]) {
        int mstArray[] = new int[countOfVertices];
        int keys[] = new int[countOfVertices];
        Boolean setOfMST[] = new Boolean[countOfVertices];

        for (int j = 0; j < countOfVertices; j++) {
            keys[j] = Integer.MAX_VALUE;
            setOfMST[j] = false;
        }

        keys[0] = 0;
        mstArray[0] = -1;

        for (int i = 0; i < countOfVertices - 1; i++) {
            int edge = findMinKeyVertex(keys, setOfMST);

            setOfMST[edge] = true;

            for (int vertex = 0; vertex < countOfVertices; vertex++)
                if (graphArray[edge][vertex] != 0 && setOfMST[vertex] == false
                        && graphArray[edge][vertex] < keys[vertex]) {
                    mstArray[vertex] = edge;
                    keys[vertex] = graphArray[edge][vertex];
                }
        }

        showMinimumSpanningTree(mstArray, graphArray);
    }

    public static void main(String[] args) {
        MSpanningTree mst = new MSpanningTree();
        int graphArray[][] = new int[][] { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

        mst.designMST(graphArray);
    }
}
```

## Kruskal's Algorithm
- Kruskal’s Algorithm builds the spanning tree by adding edges one by one into a growing spanning tree.
- Kruskal's algorithm follows greedy approach as in each iteration it finds an edge which has least weight and add it to the growing spanning tree.

![Kruskal's Algorithm](https://i.stack.imgur.com/6RCFr.gif)

### Kruskal's Algorithm Implementation:
```java
import java.util.*;

class KruskalAlgorithm {
    class Edge implements Comparable<Edge> {
        int source, destination, weight;

        public int compareTo(Edge edgeToCompare) {
            return this.weight - edgeToCompare.weight;
        }
    };

    class Subset {
        int parent, value;
    };

    int vertices, edges;
    Edge edgeArray[];

    KruskalAlgorithm(int vertices, int edges) {
        this.vertices = vertices;
        this.edges = edges;
        edgeArray = new Edge[this.edges];
        for (int i = 0; i < edges; ++i)
            edgeArray[i] = new Edge();
    }

    void applyKruskal() {
        Edge finalResult[] = new Edge[vertices];
        int newEdge = 0;
        int index = 0;
        for (index = 0; index < vertices; ++index)
            finalResult[index] = new Edge();

        Arrays.sort(edgeArray);

        Subset subsetArray[] = new Subset[vertices];

        for (index = 0; index < vertices; ++index)
            subsetArray[index] = new Subset();

        for (int vertex = 0; vertex < vertices; ++vertex) {
            subsetArray[vertex].parent = vertex;
            subsetArray[vertex].value = 0;
        }
        index = 0;

        while (newEdge < vertices - 1) {
            Edge nextEdge = new Edge();
            nextEdge = edgeArray[index++];

            int nextSource = findSetOfElement(subsetArray, nextEdge.source);
            int nextDestination = findSetOfElement(subsetArray, nextEdge.destination);

            if (nextSource != nextDestination) {
                finalResult[newEdge++] = nextEdge;
                performUnion(subsetArray, nextSource, nextDestination);
            }
        }
        for (index = 0; index < newEdge; ++index)
            System.out.println(finalResult[index].source + " - " + finalResult[index].destination + ": " + finalResult[index].weight);
    }

    int findSetOfElement(Subset subsetArray[], int i) {
        if (subsetArray[i].parent != i)
            subsetArray[i].parent = findSetOfElement(subsetArray, subsetArray[i].parent);
        return subsetArray[i].parent;
    }

    void performUnion(Subset subsetArray[], int sourceRoot, int destinationRoot) {
        int nextSourceRoot = findSetOfElement(subsetArray, sourceRoot);
        int nextDestinationRoot = findSetOfElement(subsetArray, destinationRoot);

        if (subsetArray[nextSourceRoot].value < subsetArray[nextDestinationRoot].value)
            subsetArray[nextSourceRoot].parent = nextDestinationRoot;
        else if (subsetArray[nextSourceRoot].value > subsetArray[nextDestinationRoot].value)
            subsetArray[nextDestinationRoot].parent = nextSourceRoot;
        else {
            subsetArray[nextDestinationRoot].parent = nextSourceRoot;
            subsetArray[nextSourceRoot].value++;
        }
    }

    public static void main(String[] args) {
        int v, e;
        try (Scanner sc = new Scanner(System.in)) {
            v = sc.nextInt();
            e = sc.nextInt();
            KruskalAlgorithm graph = new KruskalAlgorithm(v, e);

            for(int i = 0; i < e; i++) {
                graph.edgeArray[i].source = sc.nextInt();
                graph.edgeArray[i].destination = sc.nextInt();
                graph.edgeArray[i].weight = sc.nextInt();
            }

            graph.applyKruskal();
        }
    }
}
```
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

# Implementation:
```java
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

/**
 *     
 * @author Anil Madamala 
 * Copyright (c) 2007,2008 Anil Madamala
 * Any problems contact: amadamala+code@gmail.com
 * 
 */
public class FifteenPuzzle implements ActionListener {

    /* Dimension of the Board */
    private static final int DIM = 4;  // For N * N board DIM = N
    /* Total number of cells in the board */
    private static final int SIZE = DIM * DIM;
    /* Win state */
    final String[] WIN = new String[SIZE-1];
    /* Initial Height of the board*/
    private static final int HEIGHT = 400;
    /* Initial Width of the board*/
    private static final int WIDTH = 400;
    /* Initial empty cell in the board*/
    private int emptyCell = DIM * DIM;
    /* 15 puzzle Board, of size (4 X 4)*/
    private JButton[][] board = new JButton[DIM][DIM];
    private JFrame frame;
    private JPanel panel = new JPanel();

    // Suppresses default constructor, ensuring non-instantiability.
    public FifteenPuzzle() {

        // Initialize the win state
        for (int i = 1; i < SIZE; i++) {
            WIN[i-1] = Integer.toString(i);
        }
        
        System.out.println("Win State:" + Arrays.asList(WIN) );
    }

    public static void main(String[] args) {
        FifteenPuzzle game = new FifteenPuzzle();
        game.initializeBoard(); /* Initializes the 15-puzzle game board */

    }

    /**
     * Gives index value corresponding to [row,col] of a square
     * @param i, row
     * @param j, column
     * @return the index of the corresponding to the row and column
     */
    private int getIndex(int i, int j) {       
        return ((i * DIM) + j);  // i * 4 + j        

    }

    /**
     * Generates the random initial state for the game.
     * Assigns unique random number to each square
     */
    private void initializeBoard() {
        ArrayList<Integer> intialList = new ArrayList<Integer>(SIZE);

        // Repeat until creation of solvable initial board
        for (boolean isSolvable = false; isSolvable == false;) {

            // create ordered list
            intialList = new ArrayList<Integer>(SIZE);
            for (int i = 0; i < SIZE; i++) {
                intialList.add(i, i);
            }

            // Shuffle the list
            Collections.shuffle(intialList);

            // Check list can be solvable or not
            isSolvable = isSolvable(intialList);
        }
        System.out.println("Initial Board state:" + intialList);

        // Assigns unique random number to each square        
        for (int index = 0; index < SIZE; index++) {
            final int ROW = index / DIM;  // row number from index
            final int COL = index % DIM;   // column number from index 
            board[ROW][COL] = new JButton(String.valueOf(intialList.get(index)));
            // Initializes the empty square and hide it
            if (intialList.get(index) == 0) {
                emptyCell = index;
                board[ROW][COL].setVisible(false);
            }

            // Decorating each square
            board[ROW][COL].setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
            board[ROW][COL].setBackground(Color.BLACK);
            board[ROW][COL].setForeground(Color.GREEN);
            board[ROW][COL].addActionListener(this);
            panel.add(board[ROW][COL]);
        }

        // Initializes the Frame
        frame = new JFrame("Shuffle Game");
        frame.setLocation(400, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setSize(HEIGHT, WIDTH);

        // Initializes the panel
        panel.setLayout(new GridLayout(DIM, DIM));
        panel.setBackground(Color.GRAY);

        // Initializes the content pane
        java.awt.Container content = frame.getContentPane();
        content.add(panel, BorderLayout.CENTER);
        content.setBackground(Color.GRAY);
        frame.setVisible(true);
    }

    /**
     * Verifies the board for solvability.
     * For more details of solvability goto URL:
     * http://mathworld.wolfram.com/15Puzzle.html 
     * @param list, 16 elements from 0-15, no repetition of elements
     * @return true, if the initial board can be solvable
     *         false, if the initial board can't be solvable
     */
    private boolean isSolvable(ArrayList<Integer> list) {
    	
    	if(list.size() != 16)
    	{
    		System.err.println("isSolvable function works only" +
    			    "with a list having 0-16 as values");
    	}
    	
        int inversionSum = 0;  // If this sum is even it is solvable
        for (int i = 0; i < list.size(); i++) {
            // For empty square add row number to inversionSum                
            if (list.get(i) == 0) {
                inversionSum += ((i / DIM) + 1);  //add Row number
                continue;
            }

            int count = 0;
            for (int j = i + 1; j < list.size(); j++) {
                // No need need to count for empty square
                if (list.get(j) == 0) {
                    continue;
                } else if (list.get(i) > list.get(j)) { // If any element greater 
                    count++;                            // than seed increse the 
                }                                       // inversionSum                    
            }
            inversionSum += count;
        }

        // if inversionSum is even return true, otherwise false
        return ((inversionSum & 1) == 0) ? true : false;
    }

    /**
     * If any button in the board is pressed, it will perform the
     * required actions associated with the button. Actions like
     * checking isAdjacent(), swapping using swapWithEmpty() and also
     * checks to see whether the game is finished or not.
     * 
     * @param event, event performed by the player
     * @throws IllegalArgumentException, if the <tt>index = -1 </tt>
     */
    public void actionPerformed(ActionEvent event) throws IllegalArgumentException {
        JButton buttonPressed = (JButton) event.getSource();
        int index = indexOf(buttonPressed.getText());
        if (index == -1) {
            throw (new IllegalArgumentException("Index should be between 0-15"));
        }
        int row = index / DIM;
        int column = index % DIM;

        // If pressed button in same row or same column
        makeMove(row, column);

        // If the game is finished, "You Win the Game" dialog will appear
        if (isFinished()) {
            JOptionPane.showMessageDialog(null, "You Win The Game.");
        }
    }

    /**
     * Gives the index by processing the text on square
     * @param cellNum, number on the button
     * @return the index of the button
     */
    private int indexOf(String cellNum) {

        for (int ROW = 0; ROW < board.length; ROW++) {
            for (int COL = 0; COL < board[ROW].length; COL++) {
                if (board[ROW][COL].getText().equals(cellNum)) {
                    return (getIndex(ROW, COL));
                }
            }
        }
        return -1;   // Wrong input returns -1

    }

    /**
     * Checks the row or column with empty square
     * @return true, if we pressed the button in same row or column 
     *              as empty square
     *         false, otherwise
     */
    private boolean makeMove(int row, int col) {
        final int emptyRow = emptyCell / DIM;  // Empty cell row number
        final int emptyCol = emptyCell % DIM;   // Empty cell column number
        int rowDiff = emptyRow - row;
        int colDiff = emptyCol - col;
        boolean isInRow = (row == emptyRow);
        boolean isInCol = (col == emptyCol);
        boolean isNotDiagonal = (isInRow || isInCol);

        if (isNotDiagonal) {
            int diff = Math.abs(colDiff);
    
            // -ve diff, move row left
            if (colDiff < 0 & isInRow) {
                for (int i = 0; i < diff; i++) {
                    board[emptyRow][emptyCol + i].setText(
                            board[emptyRow][emptyCol + (i + 1)].getText());
                }

            } // + ve Diff, move row right
            else if (colDiff > 0 & isInRow) {
                for (int i = 0; i < diff; i++) {
                    board[emptyRow][emptyCol - i].setText(
                            board[emptyRow][emptyCol - (i + 1)].getText());
                }
            }

            diff = Math.abs(rowDiff);

            // -ve diff, move column up
            if (rowDiff < 0 & isInCol) {
                for (int i = 0; i < diff; i++) {
                    board[emptyRow + i][emptyCol].setText(
                            board[emptyRow + (i + 1)][emptyCol].getText());
                }

            } // + ve Diff, move column down
            else if (rowDiff > 0 & isInCol) {
                for (int i = 0; i < diff; i++) {
                    board[emptyRow - i][emptyCol].setText(
                            board[emptyRow - (i + 1)][emptyCol].getText());
                }
            }

            // Swap the empty square with the given square
            board[emptyRow][emptyCol].setVisible(true);
            board[row][col].setText(Integer.toString(0));
            board[row][col].setVisible(false);
            emptyCell = getIndex(row, col);
        }

        return true;
    }

    /**
     * Checks where game is finished or not
     * @return true, if the board is in final state
     *         false, if the board is not in final state 
     */
    private boolean isFinished() {
        // Check 1-15 elements whether they are in right position or not
        for (int index = WIN.length - 1; index >= 0; index--) {
            String number = board[index / DIM][index % DIM].getText();           
            if (!number.equals(WIN[index])) {
                return false;       // If any of the index is not aligned 

            }
        }
        return true;
    }
}
```
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

## Implementation:

```java
// import java.util.*;

class Node {
    int start, end;
    int length;
    int[] insertEdg = new int[26];
    int suffixEdg;
}

public class PalindromicSubstrings {
    static final int MAXN = 1000;
    static Node root1 = new Node();
    static Node root2 = new Node();
    static Node[] tree = new Node[MAXN];
    static int currNode;
    static String s;
    static int ptr;

    static void insert(int idx) {
        int tmp = currNode;
        while (true) {
            int curLength = tree[tmp].length;
            if (idx - curLength >= 1 && s.charAt(idx) == s.charAt(idx - curLength - 1))
                break;
            tmp = tree[tmp].suffixEdg;
        }
        if (tree[tmp].insertEdg[s.charAt(idx) - 'a'] != 0) {
            currNode = tree[tmp].insertEdg[s.charAt(idx) - 'a'];
            return;
        }
        ptr++;
        tree[tmp].insertEdg[s.charAt(idx) - 'a'] = ptr;
        tree[ptr] = new Node();
        tree[ptr].length = tree[tmp].length + 2;
        tree[ptr].end = idx;
        tree[ptr].start = idx - tree[ptr].length + 1;
        tmp = tree[tmp].suffixEdg;
        currNode = ptr;
        if (tree[currNode].length == 1) {
            tree[currNode].suffixEdg = 2;
            return;
        }
        while (true) {
            int curLength = tree[tmp].length;
            if (idx - curLength >= 1 && s.charAt(idx) == s.charAt(idx - curLength - 1))
                break;
            tmp = tree[tmp].suffixEdg;
        }
        tree[currNode].suffixEdg = tree[tmp].insertEdg[s.charAt(idx) - 'a'];
    }

    public static void main(String[] args) {
        root1.length = -1;
        root1.suffixEdg = 1;
        root2.length = 0;
        root2.suffixEdg = 1;
        tree[1] = root1;
        tree[2] = root2;
        ptr = 2;
        currNode = 1;
        s = "abcbab";
        int l = s.length();
        for (int i = 0; i < l; i++)
            insert(i);
        System.out.println("All distinct palindromic substrings for " + s + " :");
        for (int i = 3; i <= ptr; i++) {
            System.out.print((i - 2) + ") ");
            for (int j = tree[i].start; j <= tree[i].end; j++)
                System.out.print(s.charAt(j));
            System.out.println();
        }
    }
    // Output:
    // 1) a
    // 2) b
    // 3) c
    // 4) bcb
    // 5) abcba
    // 6) bab
}
```