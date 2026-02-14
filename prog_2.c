#include <stdio.h>
#include <ctype.h>

#define MAX 50


char stack[MAX];
int top = -1;

// Basic Push and Pop
void push(char item) {
    stack[++top] = item;
}

char pop() {
    return stack[top--];
}

// Checking which math sign is stronger
int precedence(char symbol) {
    if (symbol == '(') return 0;
    if (symbol == '+' || symbol == '-') return 1;
    if (symbol == '*' || symbol == '/') return 2;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i, j = 0;

    printf("Enter math expression: ");
    scanf("%s", infix);

    // converting infix to postfix 
    for (i = 0; infix[i] != '\0'; i++) {
        char current = infix[i];

        if (isalnum(current)) {
            postfix[j++] = current; // If it's a number/letter, add to result
        } 
        else if (current == '(') {
            push(current);
        } 
        else if (current == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop(); // Remove '(' from stack
        } 
        else {
            // While operator on stack is stronger, move it to result
            while (top != -1 && precedence(stack[top]) >= precedence(current)) {
                postfix[j++] = pop();
            }
            push(current);
        }
    }

    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0'; // End the postfix string

    printf("Postfix string: %s\n", postfix);

    // --- PART 2: EVALUATE THE POSTFIX ---
    // Resetting top to reuse the same stack for numbers
    top = -1; 
    
    for (i = 0; postfix[i] != '\0'; i++) {
        char current = postfix[i];

        if (isdigit(current)) {
            // Convert 'char' to 'int' (e.g., '5' becomes 5)
            push(current - '0'); 
        } 
        else {
            // When we see +, -, *, /... take two numbers out
            int number2 = pop();
            int number1 = pop();

            if (current == '+') push(number1 + number2);
            else if (current == '-') push(number1 - number2);
            else if (current == '*') push(number1 * number2);
            else if (current == '/') push(number1 / number2);
        }
    }

    printf("Final Math Result: %d\n", pop());

    return 0;
}