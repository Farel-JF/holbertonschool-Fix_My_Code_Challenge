Doubly Linked List Operations
Overview
This repository contains C code for managing a doubly linked list. It includes functions to add nodes to the end of the list, delete nodes at specific indices, print the list, and free allocated memory. The main function provides a simple test suite to verify the correctness of these operations.

Files
lists.h: Header file with the definitions of the doubly linked list structure and function prototypes.
add_dnodeint_end.c: Function to add a node at the end of the list.
delete_dnodeint_at_index.c: Function to delete a node at a specific index.
free_dlistint.c: Function to free all nodes in the list.
print_dlistint.c: Function to print all elements in the list.
main.c: Contains the main function to test the functionality of the list operations.
Functions
add_dnodeint_end
c
Copy code
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Description: Adds a new node with the value n at the end of the doubly linked list.
Parameters:
head: Pointer to the pointer to the first element of the list.
n: The integer value to store in the new node.
Return: Pointer to the new node or NULL on failure.
delete_dnodeint_at_index
c
Copy code
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
Description: Deletes the node at the specified index from the doubly linked list.
Parameters:
head: Pointer to the pointer to the first element of the list.
index: The index of the node to delete.
Return: 1 on success, -1 on failure.
free_dlistint
c
Copy code
void free_dlistint(dlistint_t *head);
Description: Frees all nodes in the doubly linked list.
Parameters:
head: Pointer to the first element of the list.
Return: None.
print_dlistint
c
Copy code
size_t print_dlistint(const dlistint_t *h);
Description: Prints all elements of the doubly linked list.
Parameters:
h: Pointer to the first element of the list.
Return: The number of elements printed.
Compilation
To compile the code, use the following command:

bash
Copy code
gcc -o doubly_linked_list add_dnodeint_end.c delete_dnodeint_at_index.c free_dlistint.c print_dlistint.c main.c
This will produce an executable named doubly_linked_list.

Usage
Run the compiled program with:

bash
Copy code
./doubly_linked_list
This will execute the main function, which demonstrates adding nodes to the list, deleting nodes, and printing the list after each operation.

Example Output
The program will produce output similar to:

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
-----------------
(no output, list is empty)
...
