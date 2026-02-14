Documentation for Question no. 3
Write and Implement the reverse traversal algorithm in the linked list. Write main() to demonstrate the use of the function.

(A) Data Structures Defined

i} I used a standard structure called node to build the linked list. Each node contains an integer variable called value to store the data and a pointer called next to link to the next node in line.

ii} I defined a global pointer called head and set it to NULL, which is a simple way to show the list is empty at the very start.

iii} This structure lets the program create new space in memory whenever a new number is added, making the list flexible.

(B) Functions

i} The addNode() function is used to put new numbers into the list. It creates a node and moves through the chain until it finds the end to link the new item.

ii} The showForward() function uses a basic while loop to print all the numbers in the list from the beginning to the end.

iii} The showBackwards() function uses recursion to solve the problem. It tells the program to keep moving to the next node before it ever tries to print anything.

iv} Because the print command is placed after the recursive call, the numbers are printed in backward order as the function "climbs back out" of the stack.

(C) The main() function

i} I wrote the main() function to first build a list with the specific values 100, 250, 475, 600, and 825 using my addNode function.

ii} I used basic print statements to label the output so the results are easy to understand for anyone reading the screen.

iii} The program calls the forward display function first to show the list exactly as it was entered.

iv} Finally, the showBackwards function is called, which uses the power of recursion to print the values in the reverse order required by the assignment.

(D) Sample Output

Normal order list:
100 250 475 600 825 

Reverse order list:
825 600 475 250 100 