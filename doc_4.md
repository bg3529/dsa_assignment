Documentation for Question no. 4
How can we implement the doubly linked list using structure? Write a method to insert(after given node) and delete the node in a doubly linked list. Write main() to demonstrate the use of the functions.

(A) Data Structures Defined

i} I used a structure called node that contains three parts: an integer for data, a pointer to the next node, and a pointer to the previous node.

ii} I defined a global head pointer initialized to NULL to keep track of the start of the list.

iii} By including the prev pointer, the structure allows the program to traverse the list in both forward and backward directions easily.

(B) Functions

i} The add_to_end() function helps build the initial list by connecting the next of the old node to the new node, and the prev of the new node back to the old one.

ii} The insert_after() function searches for a specific value and places a new node right after it by updating four different pointer links to maintain the chain.

iii} The delete_node() function removes a node by making the nodes before and after it point to each other, effectively skipping the node to be removed.

iv} The show_list() function prints the values in order and uses symbols to visually represent how the nodes are linked in both directions.

(C) The main() function

i} I wrote the main() function to create a starting list with the values 10, 20, and 30 to show the basic structure.

ii} I called the insert_after function to demonstrate how to add the number 25 specifically after the number 20.

iii} I used the delete_node function to show that the program can successfully remove a value and still keep the rest of the list connected.

iv} I used descriptive print statements throughout main to show exactly what is happening to the list at each step of the process.

(D) Sample Output

Initial list:
10 -20 -30 -NULL
After inserting 25 after 20:
10 -20 -25 -30 -NULL
After deleting 10 (head node):
20 -25 -30 -NULL