# Module 4

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
# Module 5

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

# Module 6:

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