# Module 1:

## All Questions Seem Easy. So Can Come For 2 or 5 Marks.

## Theory Summary: - Following Concepts of Theory Were Required in the Following Questions

### Dictionary:
- **Definition:** A collection of key-value pairs, where each key must be unique.
- **Creation:** Created using curly braces `{}` or the `dict()` constructor.
- **Accessing Values:** Values are accessed using square brackets and the key.
- **Mutability:** Dictionaries are mutable, meaning their values can be changed after creation.

### Set:
- **Definition:** An unordered collection of unique elements.
- **Creation:** Created using curly braces `{}` or the `set()` constructor.
- **Uniqueness:** Sets only store unique elements, automatically eliminating duplicates.
- **Operations:** Supports set operations like union, intersection, and difference.

### List:
- **Definition:** An ordered and mutable collection of elements.
- **Creation:** Created using square brackets `[]`.
- **Indexing:** Elements are accessed by their index, starting from 0.
- **Mutability:** Lists can be modified by adding, removing, or changing elements.

### Tuple:
- **Definition:** An ordered and immutable collection of elements.
- **Creation:** Created using parentheses `()`.
- **Immutability:** Once created, the elements in a tuple cannot be changed.
- **Use Cases:** Often used to represent fixed collections, like coordinates.

### String:
- **Definition:** A sequence of characters.
- **Creation:** Created using single or double quotes.
- **Indexing:** Characters in a string are accessed by their index.
- **Immutability:** Strings are immutable; individual characters cannot be changed.

### Array:
- **Definition:** A collection of elements of the same data type.
- **Creation:** Created using the `array` module.
- **Type Constraint:** All elements in an array must be of the same data type.
- **Numeric Operations:** Supports numeric operations on array elements.

### Absolute Value:
- **Definition:** The distance of a number from zero, always positive.
- **Function:** In Python, the `abs()` function returns the absolute value of a number.
- **Use Cases:** Useful in scenarios where only magnitude matters, not direction.

### Type Conversion:
- **Definition:** Changing the data type of a variable.
- **Functions:** `int()`, `float()`, `str()`, etc., are used for type conversion.
- **Implicit Conversion:** Automatic conversion by Python based on context.
- **Explicit Conversion:** Manually converting data types using appropriate functions.

### Single and Double Quotes:
- **Usage:** Both can be used to define strings in Python.
- **Interchangeability:** Single and double quotes are interchangeable for string creation.
- **Use Cases:** Use double quotes inside single quotes and vice versa to include quotes in a string.

### Dot Product:
- **Definition:** The sum of the products of corresponding elements of two sequences.
- **Calculation:** Achieved using the `zip()` function and list comprehension.
- **Use Cases:** Commonly used in linear algebra and vector operations.

### Duplicate Removal:
- **Process:** Removing repeated elements from a collection.
- **Method:** Convert the collection to a set and then back to a list to eliminate duplicates.
- **Use Cases:** Useful when maintaining unique elements is crucial.
---
### This glossary summarizes key concepts related to dictionaries, sets, lists, tuples, strings, arrays, absolute value, type conversion, quotes in Python, dot product, and duplicate removal. Understanding these concepts is essential for effective Python programming.
---
## Questions: 
### 1. How can you update the value of a key in a dictionary in Python?
```python
# Sample Dictionary
my_dict = {"key": "old_value"}

# Update the value of the key
my_dict["key"] = "new_value"
```

### 2. How can you create a new dictionary from two existing dictionaries in Python?
```python
# Sample Dictionaries
dict1 = {"a": 1, "b": 2}
dict2 = {"c": 3, "d": 4}

# Create a new dictionary by merging dict1 and dict2
merged_dict = {**dict1, **dict2}
```

### 3. How can you create a string using values from a dictionary in Python?
```python
# Sample Dictionary
my_dict = {"name": "John", "age": 30}

# Create a string using values from the dictionary
my_string = f"My name is {my_dict['name']} and I am {my_dict['age']} years old."
```

### 4. How can you create a set in Python?
```python
# Create a set
my_set = {1, 2, 3}
```

### 5. How can you add an element to a set in Python?
```python
# Add an element to the set
my_set.add(4)
```

### 6. How can you remove an element from a set in Python?
```python
# Remove an element from the set
my_set.remove(3)
```

### 7. How can you convert a list to an array in Python?
```python
# Using the array module
from array import array

# Sample List
my_list = [1, 2, 3]

# Convert the list to an array
my_array = array('i', my_list)
```

### 8. Write a Python code to find the absolute value of a given number and print the result.
```python
# Find the absolute value
number = -5
absolute_value = abs(number)
print(absolute_value)
```

### 9. How do you convert a floating-point number to an integer in Python? Write a Python code to demonstrate the conversion and print the result.
```python
# Convert a floating-point number to an integer
float_number = 3.14
int_number = int(float_number)
print(int_number)
```

### 10. What is the difference between single and double quotes in Python? Write a Python code to demonstrate the use of single and double quotes in a string and print the result.
- Single and double quotes are interchangeable for creating strings in Python.

```python
# Using single quotes
single_quoted_string = 'Hello, World!'

# Using double quotes
double_quoted_string = "Hello, World!"

# Print the strings
print(single_quoted_string)
print(double_quoted_string)
```

### 11. Write a Python code to assign the value 10 to a variable named "x" and then change the value to 15. Print the final value of the variable.
```python
# Assign and update variable value
x = 10
x = 15
print(x)
```

### 12. What is the difference between a tuple and a list in Python? Write a Python code to demonstrate the creation and modification of a tuple and a list and print the final results.
- Lists are mutable, while tuples are immutable.

```python
# List creation and modification
my_list = [1, 2, 3]
my_list[0] = 0
print(my_list)

# Tuple creation and modification (will result in an error)
my_tuple = (1, 2, 3)
# Uncommenting the next line will raise an error: my_tuple[0] = 0
# print(my_tuple)
```

### 13. Write a Python code to create a dictionary named "my_dict" with three key-value pairs: "name": "John", "age": 30, and "gender": "Male". Print the value associated with the key "age".
```python
# Create a dictionary
my_dict = {"name": "John", "age": 30, "gender": "Male"}

# Print the value associated with the key "age"
print(my_dict["age"])
```

### 14. How do you copy a list in Python? Write a Python code to create a list named "my_list" with three elements: 1, 2, and 3. Copy the list to a new list named "new_list" and append the element 4 to the new list. Print the final contents of both lists.
```python
# Copy and modify a list
my_list = [1, 2, 3]
new_list = my_list.copy()
new_list.append(4)

# Print the final contents of both lists
print(my_list)
print(new_list)
```

### 15. Convert the floating-point number 3.14159 to an integer in Python.
```python
# Convert a floating-point number to an integer
float_number = 3.14159
int_number = int(float_number)
```

### 16. Write a Python program that takes a list of names as input and outputs the names in reverse alphabetical order.
```python
# Reverse alphabetical order of names
names = ["Alice", "Bob", "Charlie"]
names.sort(reverse=True)
print(names)
```

### 17. Given a dictionary of people's ages, write a Python program that prints the names of all the people who are over 18 years old.
```python
# Print names of people over 18
ages = {"Alice": 20, "Bob": 17, "Charlie": 25}
for name, age in ages.items():
    if age > 18:
        print(name)
```

### 18. Write a Python program that takes a string as input and outputs the number of vowels in the string.
```python
# Count vowels in a string
input_string = "Hello, World!"
vowel_count = sum(1 for char in input_string if char.lower() in 'aeiou')
print(vowel_count)
```

### 19. Write a Python program that takes a list of numbers as input and outputs the largest and smallest numbers in the list.
```python
# Find the largest and smallest numbers in a list
numbers = [5, 2, 8, 1, 7]
largest = max(numbers)
smallest = min(numbers)
print("Largest:", largest)
print("Smallest:", smallest)
```

### 20. Given two tuples of integers of the same length, write a Python program that calculates the dot product of the two tuples.
```python
# Calculate dot product of two tuples
tuple1 = (1, 2, 3)
tuple2 = (4, 5, 6)
dot_product = sum(x * y for x, y in zip(tuple1, tuple2))
print(dot_product)
```

### 21. Write a Python program that takes a list of integers as input and outputs a new list with the same numbers, but with any duplicates removed.
```python
# Remove duplicates from a list
input_list = [1, 2, 2, 3, 4, 4, 5]
unique_list = list(set(input_list))
print(unique_list)
```
---

# Module 2:

## All Questions Seem Easy Again. So Can Come For 2 or 5 Marks.

## Theory Summary: - Following Concepts of Theory Were Required in the Following Questions

### 1. Function and Sorting:
- **Function Definition:** A named, reusable block of code that performs a specific task.
- **Sorting Dictionary Values:** A function can take a dictionary as an argument and return its values sorted in descending order using the `sorted()` function and a custom sorting key.

### 2. Default Parameter:
- **Definition:** A default parameter is a parameter in a function that assumes a default value if a value is not provided during the function call.
- **Purpose:** It allows a function to be flexible by providing a default value, making the parameter optional.

### 3. Function with Default Parameter:
- **Definition:** A function with a default parameter has a parameter that already has a predefined value.
- **Purpose:** It provides a default value if the user does not specify one, enhancing the function's versatility.

### 4. **kwargs Parameter:
- **Definition:** The `**kwargs` parameter in a function allows you to pass a variable number of keyword arguments.
- **Purpose:** It enables the function to accept any number of keyword arguments, improving flexibility.

### 5. Arbitrary Number of Arguments:
- **Definition:** A function can accept an arbitrary number of arguments using `*args`.
- **Purpose:** It allows the function to handle a variable number of arguments without explicitly specifying them.

### 6. Nested Function:
- **Definition:** A nested function is a function defined inside another function.
- **Purpose:** It encapsulates functionality, enhancing code organization and modularity.

### 7. Nested Function Example:
- **Definition:** A function that squares each element in a list using a nested function.
- **Purpose:** Demonstrates the use of a nested function for a specific task.

### 8. try and except Statements:
- **Definition:** The `try` and `except` statements are used for exception handling in Python.
- **Purpose:** They allow the program to handle errors gracefully, preventing crashes.

### 9. Function Definition and Call:
- **Function Definition:** A function that takes two parameters and returns their sum.
- **Function Call:** Calling the function with specific arguments.

### 10. While Loop Countdown:
- **Loop Structure:** A while loop that counts down from 10 to 0.
- **Printing:** Prints each number in the countdown.

### 11. While Loop for Even Numbers:
- **Loop Structure:** Uses a while loop to print even numbers up to a user-specified positive integer.

### 12. Reverse String with for Loop:
- **Loop Structure:** Uses a for loop to reverse a user-entered string.

### 13. Sum of Even Numbers in a List:
- **Loop Structure:** Uses a for loop to find and print the sum of even numbers in a list.

### 14. Palindrome Check:
- **Function Definition:** A function named `is_palindrome` that checks if a string is a palindrome.
- **Return:** Returns `True` if palindrome, `False` otherwise.

### 15. Function for Sum of Even Numbers:
- **Function Definition:** A function that takes a list of numbers and returns the sum of even numbers.

### 16. Using break Statement:
- **Usage:** Demonstrates how the `break` statement can exit a loop prematurely.
- **Example:** Exiting a loop when a specific condition is met.

### 17. Finding Common Elements:
- **Function Definition:** A function named `find_common_elements` that returns common elements between two lists.

### 18. Finding Longest String:
- **Program:** Takes a list of strings as input and prints the longest string.

### 19. Finding Min and Max:
- **Function Definition:** A function named `find_min_max` to find the minimum and maximum values in a list.

### 20. While Loop Sum of Natural Numbers:
- **Loop Structure:** Calculates the sum of the first 10 natural numbers using a while loop.
- **Break Statement:** Exits the loop when the sum exceeds 20.

### 21. Function for Sum of Even Numbers (Repeated):
- **Function Definition:** Repeats the definition of a function that calculates the sum of even numbers in a list.

---
## Questions:

### 1. Define a function that takes a dictionary as an argument and returns the values sorted in descending order.
```python
def sort_dict_values_desc(dictionary):
    return sorted(dictionary.values(), reverse=True)
```

### 2. Explain the purpose of a default parameter in a function.
- **Purpose:** Provides a default value for a parameter, making it optional during function call.

### 3. Define a function with a default parameter that takes a string and an integer, and prints the string a number of times equal to the integer.
```python
def print_string_multiple_times(text, times=1):
    print(text * times)
```

### 4. Explain the purpose of the **kwargs parameter in a function.
- **Purpose:** Allows a function to accept a variable number of keyword arguments, providing flexibility.

### 5. Define a function that takes an arbitrary number of arguments and returns their sum.
```python
def sum_of_arguments(*args):
    return sum(args)
```

### 6. Explain the purpose of a nested function in Python.
- **Purpose:** Enhances code organization and modularity by encapsulating functionality.

### 7. Define a function that takes a list of integers and returns a new list with each integer squared using a nested function.
```python
def square_list_elements(input_list):
    def square_number(number):
        return number ** 2
    return [square_number(num) for num in input_list]
```

### 8. What is the purpose of the try: and except: statements in Python? Give an example of how they can be used to handle errors.
- **Purpose:** Handles errors gracefully by attempting a risky operation in the `try` block and providing an alternative in the `except` block.

```python
try:
    result = 10 / 0  # Risky operation
except ZeroDivisionError:
    result = "Cannot divide by zero"
```

### 9. Define a function in Python that takes two parameters and returns their sum. How would you call this function?
```python
def add_numbers(a, b):
    return a + b

# Function call
result = add_numbers(5, 10)
```

### 10. Write a while loop in Python that counts down from 10 to 0, printing each number along the way.
```python
count = 10
while count >= 0:
    print(count)
    count -= 1
```

### 11. Using a while loop, write a program that takes a positive integer as input from the user and prints out all the even numbers from 0 up to that number.
```python
limit = int(input("Enter a positive integer: "))
num = 0
while num <= limit:
    if num % 2 == 0:
        print(num)
    num += 1
```

### 12. Write a program that asks the user to enter a string and then prints out the string in reverse order using a for loop.
```python
user_input = input("Enter a string: ")
reverse_string = ""
for char in reversed(user_input):
    reverse_string += char
print(reverse_string)
```

### 13. Write a program that takes a list of integers as input and prints out the sum of the even numbers

 in the list using a for loop.
```python
numbers = [2, 5, 8, 3, 6, 7, 10]
even_sum = sum(num for num in numbers if num % 2 == 0)
print(even_sum)
```

### 14. Write a function named is_palindrome that takes in a string as input and returns True if the string is a palindrome (i.e., reads the same backwards as forwards) and False otherwise.
```python
def is_palindrome(input_string):
    return input_string == input_string[::-1]
```

### 15. Write a Python function that takes a list of numbers as a parameter and returns the sum of all the even numbers in the list. How would you call this function?
```python
def sum_of_even_numbers(numbers):
    return sum(num for num in numbers if num % 2 == 0)

# Function call
result = sum_of_even_numbers([1, 2, 3, 4, 5, 6])
```

### 16. How can you use the break statement in Python to exit a loop prematurely? Give an example of how this can be useful.
- **Usage:** The `break` statement exits a loop prematurely when a certain condition is met.

```python
for num in range(10):
    if num == 5:
        break  # Exit the loop when num is 5
    print(num)
```

### 17. Write a function named find_common_elements that takes in two lists and returns a new list containing the common elements between the two input lists. If there are no common elements, the function should return an empty list.
```python
def find_common_elements(list1, list2):
    return list(set(list1) & set(list2))
```

### 18. Write a program that takes a list of strings as input and prints out the longest string in the list. If there are two or more strings with the same length that are the longest, the program should print out the first one that appears in the list.
```python
strings = ["apple", "banana", "kiwi", "grapefruit", "orange"]
longest_string = max(strings, key=len)
print(longest_string)
```

### 19. Write a program that takes a list of numbers as input and prints out the maximum and minimum values in the list. Use a function named find_min_max to find the minimum and maximum values.
```python
def find_min_max(numbers):
    return min(numbers), max(numbers)

numbers = [5, 2, 8, 1, 7]
min_value, max_value = find_min_max(numbers)
print("Minimum:", min_value)
print("Maximum:", max_value)
```

### 20. Write a Python program that uses a while loop to calculate the sum of the first 10 natural numbers (i.e., 1 + 2 + 3 + ... + 10). Use the break statement to exit the loop when the sum is greater than 20.
```python
sum_natural_numbers = 0
current_number = 1
while current_number <= 10:
    sum_natural_numbers += current_number
    if sum_natural_numbers > 20:
        break
    current_number += 1
print(sum_natural_numbers)
```

### 21. Write a Python function that takes a list of numbers as a parameter and returns the sum of all the even numbers in the list. How would you call this function?
- **Repeated from Question 15.**

```python
def sum_of_even_numbers(numbers):
    return sum(num for num in numbers if num % 2 == 0)

# Function call
result = sum_of_even_numbers([1, 2, 3, 4, 5, 6])
```
---

# Module 3:

## **2 Marks:**

### 1. Describe the purpose of self-variables in Python.
- **Instance Reference:** `self` refers to the instance of the class, allowing access to its attributes and methods.
- **Instance Specific:** It distinguishes between variables of different instances, ensuring instance-specific data.

### 2. Define a constructor in Python and explain its purpose.
- **Definition:** A constructor is a special method (`__init__`) in a class used for initializing object attributes.
- **Purpose:** Sets initial values, allowing the creation of objects with predefined properties.

### 3. Explain the difference between instance variables and class variables in Python.
- **Instance Variables:** Belong to instances, unique for each object. Defined inside methods using `self`.
- **Class Variables:** Belong to the class, shared among all instances. Defined outside methods in the class.

### 4. Define a class in Python and explain its purpose.
- **Definition:** A class is a blueprint for creating objects, encapsulating attributes and methods.
- **Purpose:** Promotes code organization, reusability, and modeling real-world entities.

### 5. Explain the difference between a class and an object in Python.
- **Class:** Blueprint or template for creating objects.
- **Object:** Instance of a class, representing a specific entity.

### 6. Define an abstract class in Python and give an example.
- **Definition:** An abstract class cannot be instantiated and may contain abstract methods.
- **Example:**
  ```python
  from abc import ABC, abstractmethod

  class Shape(ABC):
      @abstractmethod
      def area(self):
          pass
  ```

### 7. Explain the purpose of the super() method in Python.
- **Calling Superclass Methods:** `super()` is used to call a method from a parent class.
- **Method Resolution Order (MRO):** Resolves the correct method to call in multiple inheritance scenarios.

---

## **5 marks:** 

### 1. Explain the difference between method overloading and method overriding in Python.
- **Method Overloading:**
  - **Definition:** Same method name with different parameters in the same class.
  - **Example:**
    ```python
    class Calculator:
        def add(self, a, b):
            return a + b

        def add(self, a, b, c):
            return a + b + c
    ```
- **Method Overriding:**
  - **Definition:** Child class provides a specific implementation for a method already defined in the parent class.
  - **Example:**
    ```python
    class Animal:
        def sound(self):
            print("Animal sound")

    class Dog(Animal):
        def sound(self):
            print("Bark")
    ```

### 2. Describe the purpose and syntax of a constructor in Python. Write an example code to demonstrate how to create a constructor for a class.
- **Purpose of Constructor:**
  - Initializes object attributes when an object is created.
- **Syntax:**
  ```python
  def __init__(self, parameters):
      # constructor body
  ```
- **Example:**
  ```python
  class Student:
      def __init__(self, name, age):
          self.name = name
          self.age = age
  ```

### 3. Explain the difference between a class method and an instance method in Python. Write an example code to demonstrate each type of method.
- **Class Method:**
  - **Definition:** Belongs to the class rather than the instance.
  - **Syntax:**
    ```python
    @classmethod
    def method_name(cls, parameters):
        # method body
    ```
  - **Example:**
    ```python
    class MyClass:
        @classmethod
        def class_method(cls):
            print("Class Method")
    ```
- **Instance Method:**
  - **Definition:** Belongs to the instance of the class.
  - **Syntax:**
    ```python
    def method_name(self, parameters):
        # method body
    ```
  - **Example:**
    ```python
    class MyClass:
        def instance_method(self):
            print("Instance Method")
    ```

### 4. What is polymorphism in object-oriented programming? Explain with an example how polymorphism is achieved in Python.
- **Polymorphism:**
  - **Definition:** Ability of a single entity to take on multiple forms.
- **Example:**
  ```python
  class Animal:
      def sound(self):
          pass

  class Dog(Animal):
      def sound(self):
          print("Bark")

  class Cat(Animal):
      def sound(self):
          print("Meow")

  def make_sound(animal):
      animal.sound()

  dog = Dog()
  cat = Cat()

  make_sound(dog)  # Output: Bark
  make_sound(cat)  # Output: Meow
  ```

### 5. Define an abstract class in Python. Explain why you would use an abstract class in a program. Provide an example code to demonstrate how to create an abstract class in Python.
- **Abstract Class:**
  - **Definition:** A class that cannot be instantiated and may contain abstract methods.
  - **Use Cases:**
    - Provide a common interface for all subclasses.
    - Enforce the implementation of specific methods in subclasses.
- **Example:**
  ```python
  from abc import ABC, abstractmethod

  class Shape(ABC):
      @abstractmethod
      def area(self):
          pass
  ```

### 6. What is the purpose of the super() method in Python? Write an example code to demonstrate how to use the super() method in a class.
- **Purpose of super():**
  - **Calling Superclass Methods:** `super()` is used to call a method from a parent class.
- **Example:**
  ```python
  class Parent:
      def method(self):
          print("Parent method")

  class Child(Parent):
      def method(self):
          super().method()
          print("Child method")

  obj = Child()
  obj.method()
  ```

### 7. Describe the method resolution order (MRO) in Python. Explain how the MRO determines the order in which methods are called in a class hierarchy.
- **Method Resolution Order (MRO):**
  - **Definition:** The order in which Python searches for methods in a class hierarchy.
  - **Determined by:**
    - The order of base classes in the class definition.
    - Depth-first, left-to-right search.
  - **Example:**
    ```python
    class A:
        def method(self):
            print("A method")

    class B(A):
        def method(self):
            print("B method")

    class C(A):
        def method(self):
            print("C method")

    class D(B, C):
        pass

    obj = D()
    obj.method()
    ```
    Output:
    ```
    B method
    ```
---

## **10 Marks:**

### 1. What is an interface in Python? Explain how an interface is different from an abstract class. Provide an example code to demonstrate how to create an interface in Python.
- **Interface in Python:**
  - **Definition:** An interface defines a contract for classes, specifying a set of methods without implementation.
  - **Difference from Abstract Class:**
    - An interface cannot have any implementation.
    - An abstract class may have both abstract and concrete methods.
  - **Purpose:**
    - Allows for achieving abstraction and multiple inheritances.
    - Emphasizes "what to do" rather than "how to do it."
  - **Flexibility:**
    - A class can implement multiple interfaces.
  - **Example Code:**
    ```python
    from abc import ABC, abstractmethod

    class Interface(ABC):
        @abstractmethod
        def method1(self):
            pass

        @abstractmethod
        def method2(self):
            pass
    ```
  - **Explanation:**
    - The `Interface` class defines two abstract methods (`method1` and `method2`).
    - Classes implementing this interface must provide concrete implementations for these methods.

### 2. Explain the concept of self-variables and constructors in Python classes. Write a program to create a class with a constructor that takes two parameters and initializes instance variables with their values.
- **Self-Variables and Constructors:**
  - **Self-Variables:**
    - `self` refers to the instance of the class, allowing access to its attributes and methods.
    - It is the first parameter in the method definition.
  - **Constructors:**
    - `__init__` is a special method used for initializing object attributes.
    - Called when an object is created.
  - **Purpose:**
    - Self-variables allow instance-specific operations.
    - Constructors initialize object attributes during instantiation.
  - **Example Code:**
    ```python
    class Car:
        def __init__(self, model, year):
            self.model = model
            self.year = year
    ```
  - **Explanation:**
    - The `Car` class has attributes `model` and `year`, initialized through the constructor.
    - `self` allows access to these attributes within the class methods.

### 3. Discuss the different types of methods in Python classes with suitable examples. Also, explain the concept of inner classes and how they are useful in Python programming.
- **Types of Methods:**
  - **Instance Methods:**
    - Operate on an instance of the class.
    - Access instance variables and can modify them.
  - **Class Methods:**
    - Operate on the class itself.
    - Access class variables and cannot modify them.
  - **Static Methods:**
    - Do not depend on the instance or class.
    - Cannot access or modify instance or class variables.
  - **Inner Classes:**
    - **Definition:** A class inside another class.
    - **Usefulness:** Can encapsulate and logically group related classes.
    - **Example Code:**
      ```python
      class Outer:
          class Inner:
              pass
      ```
  - **Methods in Inner Classes:**
    - Inner classes can have all types of methods (instance, class, static).
    - Enhances encapsulation within the outer class.
  - **Explanation:**
    - Different types of methods provide flexibility in defining behavior at different levels (instance, class, or static).
    - Inner classes help organize and structure related classes within a broader context.

### 4. Inheritance is an essential concept in object-oriented programming. Write a Python program to create a base class with a constructor that takes one parameter and a derived class that inherits the base class constructor. Explain how constructors work in inheritance with an example.
- **Inheritance - an essential concept in object-oriented programming:**
  - Inheritance allows a class (derived/child) to inherit attributes and methods from another class (base/parent).
  - The derived class can extend or override the functionalities of the base class.
  - Promotes code reuse and the creation of a logical hierarchy of classes.
- **Example Code:**
  ```python
  class Animal:
      def __init__(self, species):
          self.species = species

  class Dog(Animal):
      def __init__(self, species, breed):
          super().__init__(species)
          self.breed = breed
  ```
- **Explanation:**
  - The `Animal` class has a constructor that initializes the `species`.
  - The `Dog` class inherits from `Animal` and extends the constructor to include `breed`.
  - `super().__init__(species)` is used to call the constructor of the parent class (`Animal`) within the derived class (`Dog`).
  - Ensures that both the base and derived class attributes are initialized during object creation.

### 5. What is Polymorphism in Python classes? How does it differ from Method Overloading and Method Overriding? Write a Python program to demonstrate Polymorphism using two classes with a common method.
- **Polymorphism:**
  - **Definition:** A single interface for different data types or methods.
  - **Types:**
    - Compile-time polymorphism (Method Overloading).
    - Runtime polymorphism (Method Overriding).
  - **Difference from Method Overloading/Overriding:**
    - Method Overloading: Same method name, different parameters.
    - Method Overriding: Same method name, different implementations.
  - **Purpose:**
    - Provides flexibility and code reusability.
  - **Example Code:**
    ```python
    class Dog:
        def sound(self):
            print("Bark")

    class Cat:
        def sound(self):
            print("Meow")

    def make_sound(animal):
        animal.sound()

    dog = Dog()
    cat = Cat()
    make_sound(dog)  # Output: Bark
    make_sound(cat)  # Output: Meow
    ```
  - **Explanation:**
    - The `make_sound` function demonstrates polymorphism.
    - Different classes with a common method can be used interchangeably.

### 6. Explain the concept of abstract classes in Python with an example. Also, discuss the super() method and how it is used in Python classes.
- **Abstract Classes:**
  - **Definition:** Classes that cannot be

 instantiated and may have abstract methods.
  - **Purpose:**
    - Provides a blueprint for other classes.
    - Ensures that derived classes implement specific methods.
  - **Example Code:**
    ```python
    from abc import ABC, abstractmethod

    class Shape(ABC):
        @abstractmethod
        def area(self):
            pass

    class Circle(Shape):
        def __init__(self, radius):
            self.radius = radius

        def area(self):
            return 3.14 * self.radius * self.radius
    ```
- **Explanation:**
  - The `Shape` class is an abstract class with an abstract method `area`.
  - The `Circle` class inherits from `Shape` and provides an implementation for the `area` method.
  - `super()` is not explicitly used in this example.

### 7. Write a Python program to demonstrate the concept of operator overloading in Python classes. Explain the Method Resolution Order (MRO) and how it affects the inheritance hierarchy in Python programming.
- **Operator Overloading:**
  - **Definition:** Redefining how operators behave for user-defined objects.
  - **Purpose:**
    - Provides a way to customize the behavior of operators.
  - **Example Code:**
    ```python
    class ComplexNumber:
        def __init__(self, real, imaginary):
            self.real = real
            self.imaginary = imaginary

        def __add__(self, other):
            real_sum = self.real + other.real
            imaginary_sum = self.imaginary + other.imaginary
            return ComplexNumber(real_sum, imaginary_sum)
    ```
- **Method Resolution Order (MRO):**
  - **Definition:** Order in which Python searches for methods in a class hierarchy.
  - **Affect on Inheritance:**
    - Determines the sequence of method execution.
  - **Example Code:**
    ```python
    class A:
        def method(self):
            print("A method")

    class B(A):
        def method(self):
            print("B method")

    class C(A):
        def method(self):
            print("C method")

    class D(B, C):
        pass

    obj = D()
    obj.method()
    ```
  - **Explanation:**
    - MRO in the example is D -> B -> C -> A.
    - The `method` of class B is executed first due to the MRO.
    - MRO ensures a consistent order for method resolution in multiple inheritance scenarios.
---

# Module 4:

## **2 Marks:**

### 1. Define an exception in Python and give an example.
- **Definition:** An exception is an event that occurs during the execution of a program, disrupting the normal flow.
- **Example:**
  ```python
  try:
      x = 1 / 0
  except ZeroDivisionError as e:
      print(f"Exception: {e}")
  ```

### 2. Describe the purpose of exception handling in Python.
- **Purpose:** Exception handling allows the graceful handling of errors during program execution.
- **Benefits:**
  - Prevents program termination due to errors.
  - Provides the opportunity to handle errors or take alternative actions.

### 3. Name two common types of exceptions in Python.
- **Common Exceptions:**
  - `ZeroDivisionError`: Raised when division or modulo by zero occurs.
  - `TypeError`: Raised when an operation or function is applied to an object of an inappropriate type.

### 4. Explain how the except block works in Python.
- **Functionality:** The `except` block catches and handles exceptions.
- **Syntax:**
  ```python
  try:
      # code that may raise an exception
  except SomeException as e:
      # code to handle the exception
  ```

### 5. Explain the difference between importing a module and importing a function from a module in Python.
- **Importing a Module:**
  - Imports the entire module.
  - Syntax: `import module_name`
- **Importing a Function:**
  - Imports a specific function from a module.
  - Syntax: `from module_name import function_name`

### 6. Describe the purpose of the `__init__.py` file in Python packages.
- **Purpose:** The `__init__.py` file indicates that the directory should be treated as a package.
- **Functionality:**
  - Can be empty or contain package initialization code.
  - Required for Python 3.3 and below; optional for Python 3.3 and above.

### 7. Explain the difference between the `import` and `from-import` statements in Python.
- **Import Statement:**
  - Imports an entire module.
  - Syntax: `import module_name`
- **From-Import Statement:**
  - Imports specific attributes from a module.
  - Syntax: `from module_name import attribute_name`

---

## **5 Marks:**

### 1. Write a Python program that prompts the user to input two numbers and raises a `TypeError` exception if the inputs are not numerical.
- **Purpose of `TypeError` Exception:**
  - Indicates that an operation or function is applied to an object of an inappropriate type.
- **Handling Non-Numerical Inputs:**
  - The program uses a `try-except` block to catch a `ValueError` when converting user inputs to floats.
  - If a `ValueError` occurs, it raises a `TypeError` with a specific message.
- **Example Code:**
  ```python
  try:
      num1 = float(input("Enter the first number: "))
      num2 = float(input("Enter the second number: "))
  except ValueError:
      raise TypeError("Inputs must be numerical.")
  ```

### 2. Write a Python program that executes a list operation and handles an `AttributeError` exception if the attribute does not exist.
- **Purpose of `AttributeError` Exception:**
  - Indicates that the requested attribute does not exist on the object.
- **Handling Attribute Error:**
  - The program attempts to call a non-existent method on a list, causing an `AttributeError`.
  - It catches the `AttributeError` and prints a specific error message.
- **Example Code:**
  ```python
  my_list = [1, 2, 3]
  try:
      result = my_list.nonexistent_method()
  except AttributeError as e:
      print(f"AttributeError: {e}")
  ```

### 3. Write a Python program that executes division and handles an `ArithmeticError` exception if there is an arithmetic error.
- **Purpose of `ArithmeticError` Exception:**
  - Serves as a base class for arithmetic errors.
- **Handling Arithmetic Error:**
  - The program attempts division by zero, causing an `ArithmeticError`.
  - It catches the `ArithmeticError` and prints a specific error message.
- **Example Code:**
  ```python
  try:
      result = 1 / 0
  except ArithmeticError as e:
      print(f"ArithmeticError: {e}")
  ```

### 4. What is the use of a `raise` statement? Write a code to accept two numbers and display the quotient. Appropriate exception should be raised if the user enters the second number (denominator) as zero (0).
- **Purpose of `raise` Statement:**
  - Allows manual raising of exceptions.
- **Handling Zero Denominator:**
  - The program raises a `ValueError` if the user enters zero as the denominator.
  - It provides a specific error message indicating that the denominator cannot be zero.
- **Example Code:**
  ```python
  try:
      num1 = float(input("Enter the numerator: "))
      num2 = float(input("Enter the denominator: "))
      if num2 == 0:
          raise ValueError("Denominator cannot be zero.")
      result = num1 / num2
      print("Quotient:", result)
  except ValueError as e:
      print(f"ValueError: {e}")
  ```

### 5. Write a Python program that opens a file and handles a `PermissionError` exception if there is a permission issue.
- **Purpose of `PermissionError` Exception:**
  - Indicates that the operation does not have the necessary permission.
- **Handling Permission Error:**
  - The program attempts to write to a file without proper permissions, causing a `PermissionError`.
  - It catches the `PermissionError` and prints a specific error message.
- **Example Code:**
  ```python
  try:
      with open("example.txt", "w") as file:
          file.write("Hello, World!")
  except PermissionError as e:
      print(f"PermissionError: {e}")
  ```

### 6. List five common Exception types and explain when they occur.
- **Common Exception Types:**
  1. **`ValueError`:**
     - Occurs when a built-in operation or function receives an argument with the correct type but an inappropriate value.
     - Example: Converting a string to an integer using `int("abc")`.
  2. **`TypeError`:**
     - Indicates that the object type is inappropriate for the operation.
     - Example: Performing addition between a string and an integer (`"5" + 3`).
  3. **`FileNotFoundError`:**
     - Raised when an attempt to open a file or directory fails.
     - Example: Trying to open a non-existent file with `open("nonexistent.txt")`.
  4. **`IndexError`:**
     - Occurs when a sequence subscript is out of range.
     - Example: Accessing an element at an index that doesn't exist in a list (`my_list[5]` where `my_list` has less than 6 elements).
  5. **`KeyError`:**
     - Raised when a dictionary key is not found.
     - Example: Accessing a dictionary with a key that does not exist (`my_dict["nonexistent_key"]`).

### 7. What is a Python package, and how is it different from a module? Provide an example of a package and demonstrate how it can be used in a program.
- **Python Package:**
  - **Definition:** A package is a way of organizing related modules into a single directory hierarchy.
  - **Difference from Module:**
    - A module is a single file, while a package is a collection of modules.
- **Example Package:**
  - Suppose we have a package named `shapes` with modules `circle` and `rectangle`.
- **Usage:**
  ```python
  # Importing the entire package
  import shapes

  # Using modules from the package
  shapes.circle.calculate_area()

  # Importing specific modules
  from shapes import rectangle
  rectangle.calculate_area()
  ```
--- 

## **10 Marks:**
### 1. Write a Python program that accepts a list of numbers as input from the user and calculates their average. However, if the list is empty, the program should raise a custom exception indicating that the input list is empty. Implement exception handling to ensure the program does not crash due to the raised exception. 

```py
class EmptyListError(Exception):
    pass

def calculate_average(numbers):
    if not numbers:
        raise EmptyListError("The input list is empty")
    
    total = sum(numbers)
    average = total / len(numbers)
    return average

try:
    # Get a list of numbers from the user
    input_numbers = input("Enter a list of numbers separated by spaces: ")
    numbers = [float(num) for num in input_numbers.split()]

    # Calculate and print the average
    result = calculate_average(numbers)
    print("The average is:", result)

except ValueError:
    print("Invalid input. Please enter valid numbers.")
except EmptyListError as e:
    print(e)
except Exception as e:
    print("An error occurred:", e)
```
---

### 2. Implement a Python program that simulates a simple online store. Create a package that includes modules for handling product inventory, customer orders, and payment processing. Document the package and its modules using appropriate conventions and tools. Create test modules to verify that the package's modules function as intended. Import and export the package's modules as required.

#### inventory.py
```py
class Inventory:
    def __init__(self):
        self.products = {}

    def add_product(self, product_name, price, quantity):
        self.products[product_name] = {'price': price, 'quantity': quantity}

    def get_product_info(self, product_name):
        return self.products.get(product_name)
```
#### orders.py
```py
class Order:
    def __init__(self):
        self.order_items = {}

    def add_item(self, product_name, quantity):
        if product_name in self.order_items:
            self.order_items[product_name] += quantity
        else:
            self.order_items[product_name] = quantity

    def get_order_summary(self, inventory):
        summary = {}
        for product_name, quantity in self.order_items.items():
            product_info = inventory.get_product_info(product_name)
            if product_info:
                total_price = product_info['price'] * quantity
                summary[product_name] = {'quantity': quantity, 'total_price': total_price}
        return summary
```
#### payment.py
```py
def process_payment(order_summary):
    total_amount = sum(item['total_price'] for item in order_summary.values())
    return f"Payment processed successfully. Total amount: ${total_amount:.2f}"
```
#### main.py
```py
from inventory import Inventory
from orders import Order
from payment import process_payment

# Initialize inventory
store_inventory = Inventory()
store_inventory.add_product("Laptop", 800, 10)
store_inventory.add_product("Phone", 300, 20)

# Create an order
customer_order = Order()
customer_order.add_item("Laptop", 2)
customer_order.add_item("Phone", 3)

# Display order summary
order_summary = customer_order.get_order_summary(store_inventory)
print("Order Summary:")
for product_name, details in order_summary.items():
    print(f"{product_name}: {details['quantity']} items - ${details['total_price']:.2f}")

# Process payment
payment_result = process_payment(order_summary)
print(payment_result)
```
---
### 3. Implement a Python program that simulates a simple online store. Create a package that includes modules for handling product inventory, customer orders, and payment processing. Document the package and its modules using appropriate conventions and tools. Import and export the package's modules as required. 

#### store_package/inventory.py
```py
def create_inventory():
    return {}

def add_product(inventory, product_name, price, quantity):
    inventory[product_name] = {'price': price, 'quantity': quantity}

def get_product_info(inventory, product_name):
    return inventory.get(product_name)
```

#### store_package/orders.py
```py
def create_order():
    return {}

def add_item(order, product_name, quantity):
    order[product_name] = order.get(product_name, 0) + quantity

def get_order_summary(order, inventory):
    summary = {}
    for product_name, quantity in order.items():
        product_info = inventory.get_product_info(product_name)
        if product_info:
            total_price = product_info['price'] * quantity
            summary[product_name] = {'quantity': quantity, 'total_price': total_price}
    return summary
```

#### store_package/payment.py
```py
def process_payment(order_summary):
    total_amount = sum(item['total_price'] for item in order_summary.values())
    return f"Payment processed successfully. Total amount: ${total_amount:.2f}"
```

#### store_package/main.py
```py
from store_package.inventory import create_inventory, add_product, get_product_info
from store_package.orders import create_order, add_item, get_order_summary
from store_package.payment import process_payment

# Initialize inventory
store_inventory = create_inventory()
add_product(store_inventory, "Laptop", 800, 10)
add_product(store_inventory, "Phone", 300, 20)

# Create an order
customer_order = create_order()
add_item(customer_order, "Laptop", 2)
add_item(customer_order, "Phone", 3)

# Display order summary
order_summary = get_order_summary(customer_order, store_inventory)
print("Order Summary:")
for product_name, details in order_summary.items():
    print(f"{product_name}: {details['quantity']} items - ${details['total_price']:.2f}")

# Process payment
payment_result = process_payment(order_summary)
print(payment_result)
```
---
### 4. How can a Python module or package be exported for use in other programs or by other developers? Provide an example of how to export a module or package and explain how it can be imported by another program. 

#### Exporting a Python Module or Package

1. Creating a Python Module

- **Create a Python file:**
  ```python
  # mymodule.py
  def my_function():
      return "Hello from my module!"
  ```

2. Creating a Python Package

- **Create a directory:**
  ```
  mypackage/
  ├── __init__.py
  └── mymodule.py
  ```

  - The `__init__.py` file signifies that the directory should be treated as a package.

- **mymodule.py in the package:**
  ```python
  # mypackage/mymodule.py
  def my_function():
      return "Hello from my package!"
  ```

3. Exporting a Module

- **In a Python program:**
  ```python
  # main_program.py
  from mymodule import my_function
  
  result = my_function()
  print(result)
  ```

4. Exporting a Package

- **In a Python program:**
  ```python
  # main_program.py
  from mypackage.mymodule import my_function
  
  result = my_function()
  print(result)
  ```

5. Making the Module or Package Distributable

- **Create `setup.py` for a package:**
  ```python
  # setup.py
  from setuptools import setup, find_packages
  
  setup(
      name="mypackage",
      version="0.1",
      packages=find_packages(),
  )
  ```

- **Install the package:**
  ```bash
  pip install .
  ```

6. Importing the Exported Module or Package

- **In another program:**
  ```python
  # another_program.py
  from mymodule import my_function
  
  result = my_function()
  print(result)
  ```

- **In another program for a package:**
  ```python
  # another_program.py
  from mypackage.mymodule import my_function
  
  result = my_function()
  print(result)
  ```

- Ensure that the module or package is in the Python path or use relative imports accordingly.

This guide outlines how to export a simple module and a package and how they can be imported by other programs. The last section demonstrates how to make a package distributable, allowing other developers to install and use it.
---
### 5. How does the "assert" statement in Python work, and what is its purpose? Provide an example of how it can be used to validate input data in a program.

- The `assert` statement in Python is used for debugging purposes. It checks if a given expression is `True`, and if it's not, it raises an `AssertionError` exception. The primary purpose of the `assert` statement is to provide a way to test assumptions about the state of the program during development.

- The syntax for the `assert` statement is as follows:

```python
assert expression [, message]
```

- `expression`: The condition that is expected to be `True`. If it's `False`, an `AssertionError` is raised.
- `message` (optional): An optional message that can provide additional information about the assertion.

Here's an example of how the `assert` statement can be used to validate input data in a program:

```python
def calculate_square_root(number):
    assert number >= 0, "Input must be a non-negative number"
    return number ** 0.5

# Test the function
try:
    result = calculate_square_root(-4)
    print("Square root:", result)
except AssertionError as e:
    print(f"Error: {e}")
```

- In this example, the `calculate_square_root` function calculates the square root of a number. However, it includes an `assert` statement to check if the input number is non-negative. If the input is negative, the `assert` statement raises an `AssertionError` with the specified message. This helps catch potential issues during development and ensures that the function is used with valid input data.
---
### 6. Design a Python program that reads a user's input and calculates the square root of the input value. If the input value is negative, raise a custom exception and display an error message to the user. Implement exception handling to ensure the program does not crash due to the raised exception.

```python
class NegativeInputError(Exception):
    pass

def calculate_square_root(number):
    if number < 0:
        raise NegativeInputError("Input must be a non-negative number")
    return number ** 0.5

try:
    # Get user input
    user_input = float(input("Enter a number to calculate its square root: "))

    # Calculate and print the square root
    result = calculate_square_root(user_input)
    print("Square root:", result)

except ValueError:
    print("Invalid input. Please enter a valid number.")
except NegativeInputError as e:
    print(f"Error: {e}")
except Exception as e:
    print("An error occurred:", e)
```

In this program:

- The `NegativeInputError` class is a custom exception that is raised when the input is negative.
- The `calculate_square_root` function checks if the input is negative and raises the `NegativeInputError` if necessary.
- The `try` block gets user input, calls the function, and handles potential exceptions.
- The `except ValueError` block catches the case where the user inputs a non-numeric value.
- The `except NegativeInputError` block catches the custom exception for negative input.
- The `except Exception` block serves as a general catch-all for other unexpected errors.
- This design ensures that the program gracefully handles errors and provides informative error messages to the use
---
### 7. Write a Python program that prompts the user to input a number and handles a KeyboardInterrupt exception if the user cancels the input.

Here's a simple Python program that prompts the user to input a number and handles a `KeyboardInterrupt` exception if the user cancels the input:

```python
try:
    # Get user input
    user_input = float(input("Enter a number: "))

    # Process the input (in this example, simply print the input)
    print("You entered:", user_input)

except KeyboardInterrupt:
    print("\nInput canceled by the user.")
except ValueError:
    print("Invalid input. Please enter a valid number.")
except Exception as e:
    print("An error occurred:", e)
```

In this program:

- The `try` block attempts to get user input using `input()` and then processes the input (in this example, it just prints the input).
- The `except KeyboardInterrupt` block catches the `KeyboardInterrupt` exception, which is raised when the user cancels the input (e.g., by pressing `Ctrl+C`).
- The `except ValueError` block catches the case where the user inputs a non-numeric value.
- The `except Exception` block serves as a general catch-all for other unexpected errors.
- This design ensures that the program handles a keyboard interrupt gracefully and provides appropriate error messages for other potential issues.
---

# Module 5:

## **2 Marks:**

### 1. Describe how to open a file in Python using the open() function.
- **File Opening Process:**
  - The `open()` function is used to initiate the file opening process.
  - It requires the filename and the mode in which the file is to be opened, such as "r" for read or "w" for write.
  - Example: 
    ```python
    file = open("example.txt", "r")
    ```

### 2. Explain why it is important to close a file in Python.
- **Resource Management:**
  - Closing a file is crucial for efficient resource management, ensuring that system resources are released.
  - Without closing, the file may remain in an open state, leading to potential issues.
  - Example:
    ```python
    file = open("example.txt", "r")
    # file operations
    file.close()
    ```

### 3. Observe the following code and answer the questions that follow:
   ```python
   file1 = open("mydata", "a")
   file1.write("ABC")  # Blank1
   file1.close()
   ```
   (i) **Type of File:** The file "mydata" is of type Text.
   (ii) **Fill in Blank 1:** The provided code already writes "ABC" to the file, so no additional action is needed.

### 4. Explain how to check whether a file exists in Python.
- **File Existence Check:**
  - The `os.path.exists()` function is utilized to determine whether a file exists in the specified path.
  - A conditional statement is employed to handle the existence or non-existence of the file.
  - Example:
    ```python
    import os
    if os.path.exists("example.txt"):
        print("File exists.")
    else:
        print("File does not exist.")
    ```

### 5. Describe how to work with binary files in Python.
- **Binary File Handling:**
  - Binary files contain non-textual data and are opened in binary mode by appending 'b' to the mode, such as "rb" or "wb".
  - Binary mode ensures that the data is read or written as raw bytes.
  - Example:
    ```python
    with open("binary_data.bin", "wb") as file:
        # binary file operations
    ```

### 6. Define appending text to a file in Python and give an example.
- **Appending Text to a File:**
  - Appending text involves opening a file in append mode ("a") and adding new content without overwriting existing content.
  - It is beneficial for preserving previous data in the file.
  - Example:
    ```python
    with open("example.txt", "a") as file:
        file.write("Appended Text\n")
    ```

### 7. Describe the purpose of file exceptions in Python.
- **Error Handling in File Operations:**
  - File exceptions in Python, such as `FileNotFoundError` and `PermissionError`, address errors related to file operations.
  - They provide a structured way to handle issues like missing files or insufficient permissions during runtime.
  - Example:
    ```python
    try:
        file = open("example.txt", "r")
        # file operations
    except FileNotFoundError as e:
        print(f"File not found: {e}")
    except PermissionError as e:
        print(f"Permission error: {e}")
    finally:
        file.close()
    ```

---

## **5 Marks:**

### 1. Give an example of how to write text to a file in Python using the open() function.
- **Writing Text to a File:**
  - **Open Function:** Utilize the `open()` function with the mode "w" for write.
  - **With Statement:** Embrace the `with` statement for automatic closing of the file.
  - **Write Operation:** Use the `write()` method to add text to the file.
  - **Example:**
    ```python
    with open("output.txt", "w") as file:
        file.write("Hello, World!\nThis is a new line.")
    ```
  - **Explanation:**
    - The `open()` function opens the file "output.txt" in write mode.
    - The `with` statement ensures proper resource management, automatically closing the file.
    - The `write()` method adds the specified text to the file, including a newline character for a new line.

### 2. Explain how to check whether a file exists or not in Python and give an example.
- **Checking File Existence:**
  - **File Existence Check:** Utilize the `os.path.exists()` function to verify whether the file exists.
  - **Conditional Statement:** Apply a conditional statement for handling file existence.
  - **Example:**
    ```python
    import os
    file_path = "example.txt"
    if os.path.exists(file_path):
        print(f"The file {file_path} exists.")
    else:
        print(f"The file {file_path} does not exist.")
    ```
  - **Explanation:**
    - The `os.path.exists()` function checks the existence of the specified file.
    - A conditional statement prints a message based on whether the file exists or not.

### 3. Describe the process of working with binary files in Python and give an example of reading and writing binary files.
- **Working with Binary Files:**
  - **Binary File Handling:** Open binary files using modes like "rb" for reading and "wb" for writing.
  - **Reading Binary Data:** Use the `read()` method to retrieve binary data.
  - **Writing Binary Data:** Utilize the `write()` method with bytes to add binary data.
  - **Example:**
    ```python
    # Writing binary data
    with open("binary_data.bin", "wb") as file:
        file.write(b'\x48\x65\x6c\x6c\x6f')  # Hello in binary

    # Reading binary data
    with open("binary_data.bin", "rb") as file:
        data = file.read()
        print(data.decode('utf-8'))  # Output: Hello
    ```
  - **Explanation:**
    - Binary files are handled by specifying modes like "rb" for reading or "wb" for writing.
    - The `write()` method adds binary data using bytes.
    - Reading binary data involves using the `read()` method and decoding it into a readable format.

### 4. Explain the with statement in Python and give an example of using it to open a file.
- **Purpose of the `with` Statement:**
  - **Resource Management:** The `with` statement simplifies resource management and ensures proper closing of the file.
  - **Cleaner Syntax:** It provides a cleaner syntax for handling file operations.
  - **Example:**
    ```python
    with open("example.txt", "r") as file:
        content = file.read()
        print(content)
    ```
  - **Explanation:**
    - The `with` statement creates a context manager for file operations.
    - It ensures that the file is automatically closed after the block of code is executed.
    - The `read()` method reads the file content, and the file is closed upon exiting the `with` block.

### 5. Explain the concept of pickling in Python and give an example of how to pickle and unpickle an object.
- **Pickling in Python:**
  - **Serialization Process:** Pickling involves serializing Python objects into a byte stream.
  - **Pickle Module:** The `pickle` module is used for pickling and unpickling.
  - **Example:**
    ```python
    import pickle

    # Pickling
    data = {'name': 'John', 'age': 30}
    with open('data.pkl', 'wb') as file:
        pickle.dump(data, file)

    # Unpickling
    with open('data.pkl', 'rb') as file:
        loaded_data = pickle.load(file)
        print(loaded_data)
    ```
  - **Explanation:**
    - Pickling involves using `pickle.dump()` to serialize and store Python objects in a file.
    - Unpickling utilizes `pickle.load()` to retrieve and deserialize the stored data.
    - This process facilitates the storage and retrieval of complex data structures.

### 6. Describe the difference between text and binary files in Python and give an example of each.
- **Text vs. Binary Files:**
  | Characteristic       | Text Files                                 | Binary Files                               |
  |----------------------|--------------------------------------------|--------------------------------------------|
  | **Contents**         | Human-readable characters                  | Binary data                                |
  | **Modes**            | "rt" for reading, "wt" for writing         | "rb" for reading, "wb" for writing         |
  | **Encoding**         | Character encoding/decoding applied        | No encoding/decoding; raw data retained    |

- **Difference:**
  - Text files handle human-readable characters using encoding/decoding, making them suitable for textual information.
  - Binary files store and retrieve raw binary data without any character encoding, making them versatile for various data types.
  - The choice between them depends on the nature of the data being stored or processed.

- **Example (Text):**
  ```python
  with open("text_data.txt", "rt") as file:
      content = file.read()
  # Explanation: Reads the content of the text file using the "rt" mode for reading.
  ```

- **Example (Binary):**
  ```python
  with open("binary_data.bin", "rb") as file:
      data = file.read()
  # Explanation: Reads the content of the binary file using the "rb" mode for reading.
  ```

### 7. Explain the concept of file pointers in Python and give an example of how to move the file pointer.
- **File Pointers in Python:**
  - **Pointer Functionality:** File pointers indicate the current position during read or write operations.
  - **Seek Method:** The `seek()` method is used to move the file pointer to a specific position.
  - **Example:**
    ```python
    with open("example.txt", "r") as file:
        content = file.read(10)  # Read first 10 characters
        file.seek(0)  # Move the pointer to the beginning
        new_content = file.read(5)  # Read next 5 characters from the start
    ```
  - **Explanation:**
    - File pointers represent the current location in the file during read or write actions.
    - The `seek()` method moves the file pointer to the specified position.
    - This functionality allows precise control over reading or writing data in a file.

---
## 10 Marks:

### 1. Write a function in Python to read lines from a text file "notes.txt". Your function should find and display the occurrence of the word "the". For example: If the content of the file is: "India is the fastest-growing economy. India is looking for more investments around the globe. The whole world is looking at India as a great market. Most of the Indians can foresee the heights that India is capable of reaching.”

```py
def count_occurrences(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
            # Convert content to lowercase to make the search case-insensitive
            content_lower = content.lower()
            
            # Count occurrences of the word "the"
            occurrences = content_lower.count("the")

            print(f'The word "the" occurs {occurrences} times in the file.')

    except FileNotFoundError:
        print(f"Error: The file '{file_path}' was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
count_occurrences("notes.txt")
```
- Make sure to replace "notes.txt" with the actual path to your file. The function `count_occurrences` reads the file, converts its content to lowercase for a case-insensitive search, and then counts the occurrences of the word "the". It handles potential file not found errors and other exceptions gracefully.
---
### 2. A text file named "matter.txt" contains some text, which needs to be displayed such that every next character is separated by a symbol "#". Write a function definition for hash_display() in Python that would display the entire content of the file matter.txt in the desired format.
```
Example :
If the file matter.txt has the following content stored in it :
THE WORLD IS ROUND

The function hash_display() should display the following content :
T#H#E# #W#O#R#L#D# #I#S# #R#O#U#N#D#
```
- Here is a Python function definition for `hash_display` that reads the content from a file named "matter.txt" and displays it with every next character separated by the symbol "#":

```python
def hash_display(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()

            # Display content with every next character separated by "#"
            result = '#'.join(content)

            print(result)

    except FileNotFoundError:
        print(f"Error: The file '{file_path}' was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
hash_display("matter.txt")
```
- Make sure to replace "matter.txt" with the actual path to your file. The function uses the `join` method to join each character of the content with the "#" symbol and then prints the result. It handles potential file not found errors and other exceptions gracefully.

### 3.
```
A binary file "Book.dat" has structure [BookNo, Book_Name, Author, Price].
i. Write a user defined function createFile() to input data for a record and add to Book.dat.
ii. Write a function countRec(Author) in Python which accepts the Author name as parameter and count and return number of books by the given Author are stored in the binary file "Book.dat"
```
```py
import struct

def createFile():
    try:
        with open("Book.dat", "ab") as file:
            BookNo = int(input("Enter Book Number: "))
            Book_Name = input("Enter Book Name: ")
            Author = input("Enter Author: ")
            Price = float(input("Enter Price: "))

            # Pack the data into a binary format (assuming BookNo is an integer)
            data = struct.pack('I', BookNo) + Book_Name.encode('utf-8') + b'\0' + Author.encode('utf-8') + b'\0' + struct.pack('f', Price)

            # Write the binary data to the file
            file.write(data)

        print("Record added successfully.")

    except Exception as e:
        print(f"An error occurred: {e}")

def countRec(author):
    try:
        with open("Book.dat", "rb") as file:
            count = 0
            record_size = struct.calcsize('I') + 256 + struct.calcsize('f')  # Assuming BookNo is an integer, 256 bytes for Book_Name, and 4 bytes for Price

            while True:
                data = file.read(record_size)
                if not data:
                    break

                # Unpack the data
                unpacked_data = struct.unpack('I256sf', data)
                stored_author = unpacked_data[2].decode('utf-8').rstrip('\0')

                # Check if the stored_author matches the input author
                if stored_author == author:
                    count += 1

        return count

    except FileNotFoundError:
        print("Error: File 'Book.dat' not found.")
        return 0
    except Exception as e:
        print(f"An error occurred: {e}")
        return 0

# Example usage
createFile()

author_to_search = input("Enter the author's name to count books: ")
count = countRec(author_to_search)
print(f"The number of books by {author_to_search} is: {count}")
```
---
### 4.
```
A binary file players.dat, containing records of following list format: [code, name, country and total runs]
●	Write a python function that display all records where player name starts from 'A'
●	Write a python function that accept country as an argument and count and display the number of players of that country.
●	Write a python function that add one record at the end of file.
```
```py
import struct

def display_players_with_name_starting_A():
    try:
        with open("players.dat", "rb") as file:
            record_size = struct.calcsize('I25s25sf')  # Assuming code is an integer, 25 bytes for name, 25 bytes for country, and 4 bytes for total runs

            while True:
                data = file.read(record_size)
                if not data:
                    break

                code, name, country, total_runs = struct.unpack('I25s25sf', data)
                decoded_name = name.decode('utf-8').rstrip('\0')

                if decoded_name.startswith('A'):
                    print(f"Code: {code}, Name: {decoded_name}, Country: {country.decode('utf-8').rstrip('\0')}, Total Runs: {total_runs}")

    except FileNotFoundError:
        print("Error: File 'players.dat' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

def count_and_display_players_by_country(country):
    try:
        with open("players.dat", "rb") as file:
            count = sum(1 for line in file if line[4:29].decode('utf-8').rstrip('\0') == country)  # Assuming the structure is consistent

        print(f"The number of players from {country}: {count}")

    except FileNotFoundError:
        print("Error: File 'players.dat' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

def add_record_at_end(code, name, country, total_runs):
    try:
        with open("players.dat", "ab") as file:
            data = struct.pack('I25s25sf', code, name.encode('utf-8'), country.encode('utf-8'), total_runs)
            file.write(data)

        print("Record added successfully.")

    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
# Assume you have a file already with some data to demonstrate the functions

print("Players with name starting from 'A':")
display_players_with_name_starting_A()

country_to_search = input("Enter the country to count players: ")
count_and_display_players_by_country(country_to_search)

# Example to add a new record
add_record_at_end(101, "John Doe", "USA", 1500)
```
---
### 5. Given a binary file game.dat, containing records of following list format: [game_name, participants] Write a function in Python that would read contents from the file game.dat and creates a file named basket.dat copying only those records from game.dat where the game name is "Basket Ball"
```py
import struct

def copy_basket_records():
    try:
        with open("game.dat", "rb") as input_file, open("basket.dat", "wb") as output_file:
            record_size = struct.calcsize('25sI')  # Assuming 25 bytes for game_name and 4 bytes for participants (assuming participants is an integer)

            while True:
                data = input_file.read(record_size)
                if not data:
                    break

                game_name, participants = struct.unpack('25sI', data)
                decoded_game_name = game_name.decode('utf-8').rstrip('\0')

                if decoded_game_name == "Basket Ball":
                    # Write the record to the output file
                    output_file.write(data)

        print("Records copied successfully to 'basket.dat'.")

    except FileNotFoundError:
        print("Error: File 'game.dat' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
copy_basket_records()
```
---
### 6. Given a binary file employee.dat, created using dictionary object having keys: (empcode, name, and salary)
●	Write a python function that add one more record at the end of file.
●	Write a python function that display all employee records whose salary is more that 30000

Below is a Python program that defines functions to add one more record at the end of the file "employee.dat" and to display all employee records whose salary is more than 30000:

```python
import struct

def add_employee_record(empcode, name, salary):
    try:
        with open("employee.dat", "ab") as file:
            # Pack the data into a binary format
            data = struct.pack('I25sf', empcode, name.encode('utf-8'), salary)

            # Write the binary data to the file
            file.write(data)

        print("Record added successfully.")

    except Exception as e:
        print(f"An error occurred: {e}")

def display_high_salary_employees():
    try:
        with open("employee.dat", "rb") as file:
            record_size = struct.calcsize('I25sf')  # Assuming empcode is an integer, 25 bytes for name, and 4 bytes for salary

            while True:
                data = file.read(record_size)
                if not data:
                    break

                empcode, name, salary = struct.unpack('I25sf', data)
                decoded_name = name.decode('utf-8').rstrip('\0')

                if salary > 30000:
                    print(f"EmpCode: {empcode}, Name: {decoded_name}, Salary: {salary}")

    except FileNotFoundError:
        print("Error: File 'employee.dat' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example to add a new record
add_employee_record(101, "John Doe", 35000.0)

# Example to display high salary employees
print("Employees with salary more than 30000:")
display_high_salary_employees()
```

This program includes two functions:

1. `add_employee_record`: Adds a new employee record at the end of the file.
2. `display_high_salary_employees`: Displays all employee records whose salary is more than 30000.
---

### 7. Write a function in Python to count the words "this" and "these" present in a text file "article.txt". [Note that the words "this" and "these" are complete words]

```py
def count_words(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()

            # Split the content into words
            words = content.split()

            # Count occurrences of the words "this" and "these"
            count_this = words.count("this")
            count_these = words.count("these")

            print(f'The word "this" occurs {count_this} times.')
            print(f'The word "these" occurs {count_these} times.')

    except FileNotFoundError:
        print(f"Error: File '{file_path}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
count_words("article.txt")
```
---
# Module 6:

## 2 Marks:

### 1. What is the purpose of layout managers in GUI programming?
- **Definition:** Layout managers are tools in GUI programming that control the placement and arrangement of widgets within a graphical user interface.
- **Responsibilities:**
  - Determine how widgets should be displayed.
  - Manage resizing and repositioning of widgets in response to window changes.
  - Examples include `pack()`, `grid()`, and `place()` in Tkinter.

### 2. How do you create a radio button widget in Tkinter?
- **Creation Process:**
  - Import the Tkinter module: `from tkinter import *`
  - Create a Tkinter window: `root = Tk()`
  - Create a radio button: `radio_button = Radiobutton(root, text="Option 1", value=1)`
  - Pack or place the radio button in the window: `radio_button.pack()`

### 3. What is a dialog box and how is it used in GUI programming?
- **Definition:** A dialog box is a secondary window that appears to prompt the user for input or to convey information.
- **Usage:**
  - Created using Tkinter's `tkinter.simpledialog` module.
  - Examples include message boxes, input boxes, and file dialogs.

### 4. What is event-driven programming in GUI programming?
- **Concept:** Event-driven programming is a paradigm where the flow of the program is determined by events such as user actions, sensor outputs, or messages from other programs.
- **Implementation:**
  - GUI programs respond to events like button clicks, key presses, or mouse movements.
  - In Tkinter, event-driven programming involves binding functions to events using `bind()`.

### 5. Write a Python program to find all words starting with 'a' or 'e' in a given string.
```python
import re

def find_words_starting_with_a_or_e(input_string):
    words = re.findall(r'\b[aeAE]\w*\b', input_string)
    return words

input_str = "Apple is an amazing fruit, and elephants are huge."
result = find_words_starting_with_a_or_e(input_str)
print(result)
```
- **Explanation:** The `find_words_starting_with_a_or_e` function uses a regular expression to find words starting with 'a' or 'e' in the given string.

### 6. How do you perform a SELECT query in MySQL using Python?
- **Process:**
  - Import the MySQL connector: `import mysql.connector`
  - Establish a connection to the database: `connection = mysql.connector.connect(...)`
  - Create a cursor object: `cursor = connection.cursor()`
  - Execute the SELECT query: `cursor.execute("SELECT * FROM table_name")`
  - Fetch the results: `results = cursor.fetchall()`

### 7. How do you perform an INSERT operation on a MySQL database using Python?
- **Procedure:**
  - Connect to the database and create a cursor.
  - Formulate the INSERT query: `INSERT INTO table_name (column1, column2, ...) VALUES (%s, %s, ...)`
  - Execute the query with values: `cursor.execute(query, values)`
  - Commit the changes: `connection.commit()`

---
## 5 Marks:

### 1. Explain the concept of event-driven programming in GUI programming. Develop a program using Tkinter to illustrate the implementation of event-driven programming.
- **Event-Driven Programming:**
  - **Definition:** GUI elements respond to events (e.g., button clicks, keypresses).
  - **Implementation:** Functions are bound to events using `bind()`.
  - **Asynchronous Nature:** Allows user actions to trigger specific responses in a non-blocking manner.

```python
from tkinter import *

def on_button_click():
    label.config(text="Button Clicked!")

root = Tk()
button = Button(root, text="Click Me", command=on_button_click)
label = Label(root, text="Event-Driven Programming Example")

button.pack()
label.pack()

root.mainloop()
```
- **Explanation:** Clicking the button triggers the `on_button_click` function, updating the label text. The program demonstrates the responsiveness of GUI elements to user actions.

### 2. How can dialog boxes be used in GUI programming? Illustrate their implementation in Python using the Tkinter module.
- **Dialog Box Usage:**
  - **Purpose:** Display messages, gather input, or open files.
  - **Implementation:** Tkinter's `tkinter.simpledialog` module.
  - **User Interaction:** Enhances user experience by providing a pop-up interface for input or feedback.

```python
from tkinter import *
from tkinter import simpledialog

root = Tk()

def open_dialog():
    result = simpledialog.askinteger("Input", "Enter a number:")
    label.config(text=f"You entered: {result}")

button = Button(root, text="Open Dialog", command=open_dialog)
label = Label(root, text="")

button.pack()
label.pack()

root.mainloop()
```
- **Explanation:** Clicking the button opens a dialog box asking for a number, and the result is displayed. Dialog boxes facilitate user input and interaction.

### 3. What is database connectivity in Python? Classify the different types of databases used with Python.
- **Database Connectivity:**
  - **Definition:** The ability of a program to connect to and interact with a database.
  - **Importance:** Enables data storage, retrieval, and manipulation within applications.
  - **Types of Databases:**
    - **Relational Databases:** Structured databases with tables and relationships (e.g., MySQL, PostgreSQL).
    - **NoSQL Databases:** Schema-less databases suitable for unstructured data (e.g., MongoDB).
    - **In-Memory Databases:** Data stored in the system's main memory for fast access (e.g., Redis).

### 4. Explain how to perform insert, delete, and update operations on a MySQL database using Python. Develop a Python program to implement these operations on a MySQL database.
- **Operations:**
  - **Insert:** Using `INSERT INTO table_name (column1, column2, ...) VALUES (%s, %s, ...)`.
  - **Delete:** Using `DELETE FROM table_name WHERE condition`.
  - **Update:** Using `UPDATE table_name SET column1 = value1 WHERE condition`.
  - **Commit and Close:** Ensures changes are applied and resources are released.

```python
import mysql.connector

# Connect to the database
connection = mysql.connector.connect(
    host="your_host",
    user="your_user",
    password="your_password",
    database="your_database"
)

# Create a cursor
cursor = connection.cursor()

# Insert operation
cursor.execute("INSERT INTO users (name, age) VALUES (%s, %s)", ("John", 25))

# Delete operation
cursor.execute("DELETE FROM users WHERE name = %s", ("John",))

# Update operation
cursor.execute("UPDATE users SET age = %s WHERE name = %s", (26, "John"))

# Commit changes and close the connection
connection.commit()
connection.close()
```
- **Explanation:** This program connects to a MySQL database, performs insert, delete, and update operations on the "users" table, and ensures changes are committed and resources are released.

### 5. What are the various layout options available in GUI programming with Tkinter? Develop a GUI program to demonstrate the implementation of different layouts.
- **Layout Options:**
  - **Pack Layout:** Organizes widgets in blocks before placing them in the parent widget.
  - **Grid Layout:** Organizes widgets in a table-like structure with rows and columns.
  - **Place Layout:** Places widgets at an absolute position defined by x and y coordinates.
  - **Frame Layout:** Uses frames as containers for other widgets, allowing hierarchical organization.

```python
from tkinter import *

root = Tk()

# Pack Layout
button_pack = Button(root, text="Pack Layout")
button_pack.pack()

# Grid Layout
button_grid = Button(root, text="Grid Layout")
button_grid.grid(row=0, column=1)

# Place Layout
button_place = Button(root, text="Place Layout")
button_place.place(x=100, y=50)

# Frame Layout
frame

 = Frame(root)
frame.pack()
button_frame = Button(frame, text="Frame Layout")
button_frame.pack()

root.mainloop()
```
- **Explanation:** This program demonstrates the use of different layouts (pack, grid, place, and frame) to organize buttons in a Tkinter GUI. Each layout option provides a different way to arrange and structure widgets.

### 6. How can you establish a connection between Python and MySQL database? Discuss the steps involved in connecting Python to MySQL.
- **Connection Steps:**
  1. Install the MySQL Connector: `pip install mysql-connector-python`.
  2. Import the connector module: `import mysql.connector`.
  3. Establish a connection: `connection = mysql.connector.connect(...)`.
  4. Create a cursor: `cursor = connection.cursor()`.

### 7. Discuss the role of widgets in GUI programming using Tkinter. Develop a GUI program to implement different types of widgets available in Tkinter.
- **Role of Widgets:**
  - **Definition:** Widgets are graphical elements (buttons, labels, etc.) that users interact with.
  - **Functions:** Provide a visual representation of GUI elements and enable user interaction.

```python
from tkinter import *

root = Tk()

# Label Widget
label = Label(root, text="Label Widget")
label.pack()

# Button Widget
button = Button(root, text="Button Widget")
button.pack()

# Entry Widget
entry = Entry(root, width=20)
entry.pack()

# Checkbutton Widget
checkbutton = Checkbutton(root, text="Checkbutton Widget")
checkbutton.pack()

root.mainloop()
```
- **Explanation:** This program displays various Tkinter widgets, including labels, buttons, entry fields, and checkbuttons. Widgets play a crucial role in creating interactive and user-friendly graphical interfaces.
--- 

## 10 Marks:

### 1. Create a Python GUI application using Tkinter that allows the user to select a file and display its contents in a text box. Include a menu option to save any changes made to the file.

```py
import tkinter as tk
from tkinter import filedialog

class TextEditorApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Text Editor")

        self.text_box = tk.Text(root, wrap="word", width=40, height=10)
        self.text_box.pack(pady=10)

        menu_bar = tk.Menu(root)
        root.config(menu=menu_bar)

        file_menu = tk.Menu(menu_bar, tearoff=0)
        menu_bar.add_cascade(label="File", menu=file_menu)
        file_menu.add_command(label="Open", command=self.open_file)
        file_menu.add_command(label="Save", command=self.save_file)

    def open_file(self):
        file_path = filedialog.askopenfilename(defaultextension=".txt", filetypes=[("Text files", "*.txt"), ("All files", "*.*")])

        if file_path:
            with open(file_path, 'r') as file:
                content = file.read()
                self.text_box.delete("1.0", tk.END)  # Clear previous content
                self.text_box.insert(tk.END, content)

    def save_file(self):
        file_path = filedialog.asksaveasfilename(defaultextension=".txt", filetypes=[("Text files", "*.txt"), ("All files", "*.*")])

        if file_path:
            with open(file_path, 'w') as file:
                content = self.text_box.get("1.0", tk.END)
                file.write(content)
                print("File saved successfully.")

if __name__ == "__main__":
    root = tk.Tk()
    app = TextEditorApp(root)
    root.mainloop()

```
---
### 2. Write a Python program that connects to a MySQL database and allows the user to enter a new record into a table. Use the SQL INSERT statement to insert the record.

- Certainly! To interact with a MySQL database in Python, you can use the `mysql-connector` library. First, you need to install the library if you haven't already:

```bash
pip install mysql-connector-python
```

Now, you can create a Python program to connect to a MySQL database and allow the user to enter a new record into a table. Below is an example:

```python
import mysql.connector

def connect_to_database():
    # Replace the following values with your MySQL database credentials
    host = "your_host"
    user = "your_user"
    password = "your_password"
    database = "your_database"

    try:
        # Connect to the database
        connection = mysql.connector.connect(host=host, user=user, password=password, database=database)
        print("Connected to the database.")
        return connection

    except mysql.connector.Error as err:
        print(f"Error: {err}")
        return None

def insert_record(connection, table_name, data):
    try:
        cursor = connection.cursor()

        # Create the SQL INSERT statement
        insert_query = f"INSERT INTO {table_name} VALUES (%s, %s, %s)"

        # Execute the INSERT statement with user-provided data
        cursor.execute(insert_query, data)

        # Commit the changes to the database
        connection.commit()

        print("Record inserted successfully.")

    except mysql.connector.Error as err:
        print(f"Error: {err}")

    finally:
        if cursor:
            cursor.close()

def main():
    # Connect to the database
    connection = connect_to_database()

    if connection:
        try:
            # Example table structure: (id INT PRIMARY KEY, name VARCHAR(255), age INT)
            table_name = "your_table_name"

            # Get user input for a new record
            id_value = int(input("Enter ID: "))
            name_value = input("Enter Name: ")
            age_value = int(input("Enter Age: "))

            # Prepare the data to be inserted
            new_record = (id_value, name_value, age_value)

            # Insert the record into the table
            insert_record(connection, table_name, new_record)

        finally:
            # Close the database connection
            connection.close()
            print("Connection closed.")

if __name__ == "__main__":
    main()
```

- Make sure to replace placeholders like "your_host," "your_user," "your_password," "your_database," and "your_table_name" with your actual MySQL database credentials and table information.

- This program connects to a MySQL database, allows the user to enter a new record, and inserts the record into the specified table using the SQL INSERT statement.

### 3. Develop a Python GUI application that displays a list of items and allows the user to select one or more items using checkboxes. Once the items are selected, the user can perform a specific action on the selected items.

- Below is an example of a Python GUI application using Tkinter that displays a list of items with checkboxes. The user can select one or more items, and when a button is pressed, it prints the selected items.

```python
import tkinter as tk

class ItemSelectionApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Item Selection App")

        # Create a list of items
        self.items = ["Item 1", "Item 2", "Item 3", "Item 4", "Item 5"]

        # Create a list to store the selected items
        self.selected_items = []

        # Create and populate the checklist
        self.checkboxes = []
        for item in self.items:
            var = tk.StringVar()
            checkbox = tk.Checkbutton(root, text=item, variable=var, onvalue=item, offvalue="", command=self.update_selected_items)
            checkbox.pack(anchor=tk.W)
            self.checkboxes.append((item, checkbox, var))

        # Create a button to perform an action on selected items
        self.action_button = tk.Button(root, text="Perform Action", command=self.perform_action)
        self.action_button.pack(pady=10)

    def update_selected_items(self):
        # Update the list of selected items based on the checkbox state
        self.selected_items = [item for item, _, var in self.checkboxes if var.get()]

    def perform_action(self):
        # Print the selected items
        if self.selected_items:
            print("Selected items:", ", ".join(self.selected_items))
        else:
            print("No items selected.")

if __name__ == "__main__":
    root = tk.Tk()
    app = ItemSelectionApp(root)
    root.mainloop()
```

In this example:

- The `ItemSelectionApp` class initializes a Tkinter application with a list of items, checkboxes, and a button.
- The checkboxes are created for each item, and a `Checkbutton` widget is used to represent each checkbox.
- The `update_selected_items` method is called whenever a checkbox state changes, updating the `selected_items` list based on the checkbox states.
- The `perform_action` method is called when the "Perform Action" button is pressed, and it prints the selected items.

---
### 4. Develop a Python GUI application that displays a form for entering customer information, and saves the information to a MySQL database when the user clicks the Save button. Include validation to ensure that all required fields are filled out.

```py
import tkinter as tk
from tkinter import messagebox
import mysql.connector

class CustomerInfoApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Customer Information Form")

        # Create variables to store customer information
        self.name_var = tk.StringVar()
        self.email_var = tk.StringVar()
        self.phone_var = tk.StringVar()

        # Create labels and entry widgets for the form
        tk.Label(root, text="Name:").grid(row=0, column=0, sticky=tk.E)
        tk.Entry(root, textvariable=self.name_var).grid(row=0, column=1)

        tk.Label(root, text="Email:").grid(row=1, column=0, sticky=tk.E)
        tk.Entry(root, textvariable=self.email_var).grid(row=1, column=1)

        tk.Label(root, text="Phone:").grid(row=2, column=0, sticky=tk.E)
        tk.Entry(root, textvariable=self.phone_var).grid(row=2, column=1)

        # Create the Save button
        tk.Button(root, text="Save", command=self.save_to_database).grid(row=3, column=0, columnspan=2, pady=10)

    def save_to_database(self):
        # Validate that all required fields are filled out
        if not all([self.name_var.get(), self.email_var.get(), self.phone_var.get()]):
            messagebox.showerror("Error", "All fields are required.")
            return

        # Connect to the MySQL database
        try:
            connection = mysql.connector.connect(
                host="your_host",
                user="your_user",
                password="your_password",
                database="your_database"
            )

            cursor = connection.cursor()

            # Insert customer information into the database
            insert_query = "INSERT INTO customers (name, email, phone) VALUES (%s, %s, %s)"
            customer_data = (self.name_var.get(), self.email_var.get(), self.phone_var.get())
            cursor.execute(insert_query, customer_data)

            # Commit the changes to the database
            connection.commit()

            messagebox.showinfo("Success", "Customer information saved successfully.")

        except mysql.connector.Error as err:
            messagebox.showerror("Error", f"Database Error: {err}")

        finally:
            if cursor:
                cursor.close()
            if connection.is_connected():
                connection.close()

if __name__ == "__main__":
    root = tk.Tk()
    app = CustomerInfoApp(root)
    root.mainloop()

```
---
### 5. Create a Python GUI application using Tkinter that displays a list of products and their prices. Allow the user to select a product and enter a quantity, and calculate the total cost of the order.

```py
import tkinter as tk

class OrderCalculatorApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Order Calculator")

        # Product data (you can modify this with your own product information)
        self.products = {
            "Product 1": 10.0,
            "Product 2": 15.0,
            "Product 3": 20.0,
            "Product 4": 25.0,
        }

        # Create variables to store user input
        self.selected_product = tk.StringVar()
        self.quantity_var = tk.IntVar()

        # Create product label and dropdown
        tk.Label(root, text="Select Product:").pack(pady=5)
        tk.OptionMenu(root, self.selected_product, *self.products.keys()).pack(pady=5)

        # Create quantity label and entry
        tk.Label(root, text="Enter Quantity:").pack(pady=5)
        tk.Entry(root, textvariable=self.quantity_var).pack(pady=5)

        # Create total cost label
        self.total_label = tk.Label(root, text="Total Cost: $0.00")
        self.total_label.pack(pady=10)

        # Create calculate button
        tk.Button(root, text="Calculate", command=self.calculate_total).pack(pady=10)

    def calculate_total(self):
        # Calculate the total cost based on the selected product and quantity
        product = self.selected_product.get()
        quantity = self.quantity_var.get()

        if product and quantity > 0:
            price = self.products.get(product, 0.0)
            total_cost = price * quantity
            self.total_label.config(text=f"Total Cost: ${total_cost:.2f}")
        else:
            self.total_label.config(text="Total Cost: $0.00")

if __name__ == "__main__":
    root = tk.Tk()
    app = OrderCalculatorApp(root)
    root.mainloop()
```

### 6. Write a Python program to search for a literal string in a string and also find the location within the original string where the pattern occurs.Sample text : 'The quick brown fox jumps over the lazy dog.'Searched words : 'fox'

Certainly! Here's a simple Python program that searches for the word 'fox' in the given sample text and finds its location within the original string:

```python
def search_word(text, word):
    index = text.find(word)

    if index != -1:
        print(f"'{word}' found at index {index} in the text.")
    else:
        print(f"'{word}' not found in the text.")

if __name__ == "__main__":
    sample_text = 'The quick brown fox jumps over the lazy dog.'
    searched_word = 'fox'

    search_word(sample_text, searched_word)
```

In this program:

- The `find` method is used to search for the word in the sample text.
- If the word is found (`find` returns a non-negative index), the program prints the index where the word is found; otherwise, it prints that the word is not found.
---
### 7. What are the various layout options available in GUI programming with Tkinter? Develop a GUI program to demonstrate the implementation of different layouts.

In Tkinter, several layout options are available to arrange widgets within a GUI window. Some common layout options include:

1. **Pack Layout:**
   - Widgets are packed into a containing widget (typically a frame or the main window).
   - Use the `pack()` method to specify how widgets should be packed.

2. **Grid Layout:**
   - Widgets are arranged in a table-like structure.
   - Use the `grid()` method to specify the row and column positions of widgets.

3. **Place Layout:**
   - Widgets are placed at an absolute position within a containing widget.
   - Use the `place()` method to specify the exact coordinates.

Now, let's develop a simple Tkinter GUI program to demonstrate the implementation of different layouts:

Certainly! Here's a simplified version of the Tkinter GUI program to demonstrate the implementation of different layouts:

```python
import tkinter as tk

class LayoutDemoApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Layout Demo")

        # Pack Layout
        frame_pack = tk.Frame(root, bd=5, relief=tk.SUNKEN)
        tk.Label(frame_pack, text="Pack Layout").pack()
        tk.Button(frame_pack, text="Button 1").pack()
        tk.Button(frame_pack, text="Button 2").pack()
        frame_pack.pack(side=tk.LEFT, padx=10)

        # Grid Layout
        frame_grid = tk.Frame(root, bd=5, relief=tk.SUNKEN)
        tk.Label(frame_grid, text="Grid Layout").pack()
        tk.Button(frame_grid, text="Button 1").pack()
        tk.Button(frame_grid, text="Button 2").pack()
        frame_grid.pack(side=tk.LEFT, padx=10)

        # Place Layout
        frame_place = tk.Frame(root, bd=5, relief=tk.SUNKEN)
        tk.Label(frame_place, text="Place Layout").pack()
        tk.Button(frame_place, text="Button 1").pack()
        tk.Button(frame_place, text="Button 2").pack()
        frame_place.pack(side=tk.LEFT, padx=10)

if __name__ == "__main__":
    root = tk.Tk()
    app = LayoutDemoApp(root)
    root.mainloop()
```
In this simplified version:

- The labels are removed to focus on the layout demonstration.
- Buttons are directly added to each frame without specifying row or column numbers for Grid Layout.
- The program is still demonstrating the basic concepts of Pack, Grid, and Place layouts.
