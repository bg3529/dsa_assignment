Documentation for Question no. 8

Write a program that generates a list of N random integers in the range [1, 1000], where N
is provided by the user at run time. Then, perform the following tasks:
(a) Ask the user to choose a sorting algorithm from the following:
• Bubble Sort
• Selection Sort
• Insertion Sort
• Merge Sort
(b) Sort the randomly generated numbers using the chosen algorithm.
(c) Print the numbers before and after sorting.
(d) Display the total number of comparisons and swaps (if applicable) performed by the
chosen algorithm.

(A) Data Structures Defined

i} I used a standard integer array to store the list of random numbers. The size of this array is determined by the variable N which the user enters during execution.

ii} I used two global integer variables named comp and swp to track the performance of the chosen algorithm by counting every comparison and data movement.

iii} This approach keeps the data organized in a single block of memory, making it easy to pass the entire list to different sorting functions.

(B) Functions

i} The sorting functions like bubble_sort, selection_sort, and insertion_sort use simple loops to compare values and rearrange them in ascending order.

ii} The merge_sort function uses a recursive strategy to break the list into smaller parts, which are then combined back together by the merge function.

iii} I added simple counter increments inside each function so the program can record exactly how many operations are performed during the sort.

iv} The use of the srand and rand functions allows the program to create a different set of numbers every time it is run, providing a true test for the algorithms.

(C) The main() function

i} I wrote the main function to first capture the user's preferred list size and then fill that list with random integers between 1 and 1000.

ii} I used a menu system with if-else statements to allow the user to select which specific sorting logic they want to apply to the data.

iii} The program prints the array before the sort starts and again after it finishes so the user can verify the results were successful.

iv} Finally, the program prints the values of the global counters to show the efficiency of the algorithm chosen by the user.

(D) Sample Output

Enter number of elements (N): 50

Original array: 208 193 607 595 865 956 405 167 889 845 14 594 392 61 365 771 849 292 989 875 813 891 949 362 669 557 885 380 84 771 520 356 52 920 59 976 872 145 733 781 258 482 423 188 647 909 814 725 7 900

Select Sorting Algorithm:
1. Bubble
2. Selection
3. Insertion
4. Merge
Choice: 2

Sorted array: 7 14 52 59 61 84 145 167 188 193 208 258 292 356 362 365 380 392 405 423 482 520 557 594 595 607 647 669 725 733 771 771 781 813 814 845 849 865 872 875 885 889 891 900 909 920 949 956 976 989

Total Comparisons: 1225
Total Swaps/Shifts: 49