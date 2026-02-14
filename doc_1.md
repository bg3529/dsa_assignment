Documentation of Question no 1

Write a program to check if any given mathematical expression has a balanced number of parentheses or not?
Run the program by testing following expression-
⇒ a + (b - c) * (d
⇒ m + [a - b * (c + d * {m)]
⇒ a + (b - c)
Hint: Use stack

(A) Data Structures Defined

i} I used a standard character array called s[100] to act as the stack for this program. This serves as a temporary storage to keep track of the brackets as they appear.

ii} In order to manage the stack, I defined an integer variable t. This tracks the top index and starts at -1 to show the stack is empty.

iii} The structure is designed to only store opening brackets like (, [, or { when they are found in the expression string.

(B) Functions

i} The check() function is the core of the program, taking the math expression as a parameter and returning 1 if it is balanced or 0 if it is not.

ii} Inside this function, a loop scans the string, pushing opening brackets onto the stack and popping them when a closing bracket is encountered.

iii} I used logic to compare the popped character with the current closing bracket to ensure they are the same type (like matching [ with ]).

iv} The main() function is used to store the test data and display the final results on the screen.

(C) The main() function

i} I organized the main() function by first declaring a 2D character array named data that contains the three expressions required by the assignment.

ii} A for loop is used to iterate through each of these three strings one by one.

iii} Inside the loop, the program prints the expression it is currently checking so the output is easy to read.

iv} It calls the check() function and uses an if-else statement to print either "balanced" or "not balanced" based on the return value.

(D) Sample Output

Expression: a + (b - c) * (d
Status: not balanced

Expression: m + [a - b * (c + d * {m)]
Status: not balanced

Expression: a + (b - c)
Status: Balanced
