Documentation for Question no. 6

Given the array of the data (unsorted), Write a program to build the min and max heap.

(A) Data Structures Defined

i} I used a standard integer array to store the heap elements. This is a simple way to represent a complete binary tree where parent and child positions are calculated by index.

ii} I created two separate arrays, data_max and data_min, so the program can demonstrate both types of heaps using the same starting numbers.

iii} This structure allows the program to organize data efficiently without needing to define a complex tree structure with pointers.

(B) Functions

i} The max_heapify() function ensures the largest value stays at the root. It compares a parent with its children and swaps them if a child is bigger.

ii} The min_heapify() function does the opposite, ensuring the smallest value stays at the root by swapping the parent with the smallest child.

iii} The build functions use a loop that starts from the middle of the array and moves to the front, calling the heapify functions to organize the entire list.

iv} The show_array() function is a simple utility that loops through the array to print the final results on the screen.

(C) The main() function

i} I wrote the main() function to initialize the unsorted data with the values 15, 20, 7, 9, and 30.

ii} I used print statements to show the original list first so the changes are easy to see for the user.

iii} The program calls the build_max_heap function first and displays the result, followed by the build_min_heap function.

iv} The output is clearly labeled to show which array represents the max heap and which represents the min heap.

(D) Sample Output

Original array:

15 20 7 9 30


Max heap array:

30 20 7 9 15 


Min heap array:

7 9 15 20 30 