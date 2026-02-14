Documentation of Question no. 2: 

Write a program to convert an infix mathematical expression to postfix and evaluate it.


(A) Data Structures Defined

i} I used a standard character array called stack[MAX] to serve as the storage for my program. During the first part, it holds math operators, and in the second part, it stores the numbers being calculated.

ii} To manage this stack, I defined an integer variable named top. I set it to -1 at the start of each process to indicate that the stack is currently empty and ready for use.

iii} I also used a character array called postfix[MAX] to act as a temporary buffer. This is where I store the rearranged expression so the computer can read it from left to right without needing to look back.

(B) Functions

i} I created a push() function which is responsible for placing a new character or number onto the stack and moving the top index up by one.

ii} The pop() function was written to do the opposite; it retrieves the item from the very top and moves the top index back down.

iii} I implemented a precedence() function to handle the math rules. It assigns a rank to each operator, ensuring that multiplication and division are handled before addition and subtraction.

iv} I used built-in tools like isalnum() to distinguish between math symbols and actual numbers or letters, making the code much cleaner and easier to read.

(C) The main() function

i} I organized the main() function into two clear phases. The first phase focuses on the conversion logic, taking the infix input and turning it into a postfix string.

ii} Inside the first loop, the program decides whether to print a character immediately or save it on the stack based on whether it is an operand, a parenthesis, or an operator.

iii} After the conversion was finished, I made sure to reset the top variable to -1. This is a simple but important step that allowed me to reuse the same stack for the math calculation phase.

iv} In the final evaluation part, the program scans the new postfix string. It pushes numbers onto the stack and, whenever it hits an operator, it pops the two most recent numbers to calculate them and pushes the result back.

(D) Sample Output

Enter math expression: 3+(4*2)-5

Postfix string: 342*+5-

Final Math Result: 6

Expression: 2+34

Postfix string: 234+

Final Math Result: 14