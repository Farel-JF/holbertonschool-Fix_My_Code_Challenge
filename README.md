Fix My Code
Overview
Fix My Code is an engaging project where you'll dive into existing codebases to identify and correct issues. This initiative focuses on refining and debugging pre-written code, rather than starting from scratch. The goal is to enhance the functionality and efficiency of the provided code samples.

Project Background
This project invites you to explore a repository named Fix_My_Code_Challenge. Your task is to address and rectify issues in the provided code files. These files are designed to have intentional bugs or inefficiencies that need fixing. The challenge helps you improve your debugging skills and gain a deeper understanding of code maintenance.

Note: Participation in this project is optional. However, completing any part of it can positively influence your project grade, potentially raising your average if you perform well. If your current average is higher than your score on this project, it might lower your average, but it’s a valuable opportunity to learn and grow.

Requirements
General
Allowed Editors: vi, vim, emacs
Compilation Environment: Ubuntu 20.04 LTS
File Endings: Ensure all your files end with a new line.
README.md: A README.md file is mandatory at the root of the project folder.
Getting Started
Clone the Repository

Start by cloning the repository containing the code samples:

bash
Copy code
git clone https://github.com/your-username/Fix_My_Code_Challenge.git
Navigate to the Directory

Change into the project directory:

bash
Copy code
cd Fix_My_Code_Challenge
Review the Code

Open the files provided and identify areas where the code needs fixing. Pay attention to comments, errors, or any output mismatches.

Apply Fixes

Correct the identified issues in the code. Ensure that your changes are tested and that the code behaves as expected.

Document Your Changes

Update this README file or add comments to the code explaining the changes made and the reasons behind them.

Example
If you encounter a script that’s intended to sort a list of numbers but has errors, your task would be to debug and correct the sorting algorithm to ensure it sorts the numbers correctly. You might also need to ensure that input validation and output formatting are handled properly.

Conclusion
This project is a practical way to enhance your coding and debugging skills. Dive in, explore the code, and have fun fixing the bugs!
Fix My Code Challenge
Overview
This project involves fixing existing code across various languages and tasks. The goal is to correct errors in the provided implementations to ensure they work as expected. The tasks include implementing FizzBuzz in Python, printing squares in JavaScript, sorting arguments in Ruby, and managing a doubly linked list in C.

Tasks
0. FizzBuzz (Python)
Description
The task is to implement the FizzBuzz algorithm in Python. The FizzBuzz problem requires printing numbers from 1 to a given limit, replacing multiples of 3 with "Fizz", multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz".

File
0-fizzbuzz.py
Testing
To test the implementation, run the following command:

bash
Copy code
./0-fizzbuzz.py 50
Expected Output:

Copy code
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 Fizz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 Fizz 46 47 Fizz 49 Buzz
1. Print Square (JavaScript)
Description
The task is to print a square of a given size using the # character. The size of the square is determined by the command-line argument.

File
1-print_square.js
Testing
To test the implementation, run the following commands:

bash
Copy code
./1-print_square.js 4
Expected Output:

shell
Copy code
####
####
####
####
bash
Copy code
./1-print_square.js 10
Expected Output:

shell
Copy code
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
2. Sort (Ruby)
Description
The task is to sort a list of command-line arguments in Ruby. The sorting should handle both numeric and string values correctly.

File
2-sort.rb
Testing
To test the implementation, run the following command:

bash
Copy code
ruby 2-sort.rb 12 41 2 C 9 -9 31 fun -1 32
Expected Output:

diff
Copy code
31
32
12
41
2
9
-9
-1
3. User Password (Python)
Description
The task is to implement a User class in Python that handles password management. The class should include methods for setting a password (hashed using MD5) and validating a password.

File
3-user.py
Testing
To test the implementation, run the following command:

bash
Copy code
./3-user.py
Expected Output:

sql
Copy code
Test User
is_valid_password should return True if it's the right password
4. Doubly Linked List (C)
Description
The task is to manage a doubly linked list in C. The provided functions include adding a node at the end, deleting a node at a specific index, printing the list, and freeing all nodes.

Files
lists.h - Header file with definitions and function prototypes.
add_dnodeint_end.c - Function to add a node at the end of the list.
delete_dnodeint_at_index.c - Function to delete a node at a specific index.
free_dlistint.c - Function to free all nodes in the list.
print_dlistint.c - Function to print all elements in the list.
main.c - Contains the main function to test the list operations.
Testing
To compile and test the code, use the following commands:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c free_dlistint.c print_dlistint.c add_dnodeint_end.c delete_dnodeint_at_index.c -o delete_dnodeint
./delete_dnodeint
Expected Output:

markdown
Copy code
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
98
402
1024
-----------------
1
2
3
4
98
402
1024
-----------------
2
3
4
98
402
1024
-----------------
3
4
98
402
1024
-----------------
4
98
402
1024
-----------------
98
402
1024
-----------------
402
1024
-----------------
1024
-----------------
(no output, list is empty)
...
Requirements
Allowed editors: vi, vim, emacs
All files should be compiled on Ubuntu 20.04 LTS
All files should end with a new line
A README.md file is mandatory at the root of the folder of the project
