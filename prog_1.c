
#include <stdio.h>
#include <string.h>

int check(char p[]) {
    char s[100];
    int t = -1;
    int i;
    int len = strlen(p); 

    for (i = 0; i < len; i++) {
        // if we see open bracket, push it
        if (p[i] == '(' || p[i] == '[' || p[i] == '{') {
            t = t + 1;
            s[t] = p[i];
        } 
        // if we see closing bracket
        else if (p[i] == ')' || p[i] == ']' || p[i] == '}') {
            if (t == -1) {
                return 0; // nothing to pop, so unbalanced
            }
            
            char last = s[t];
            t = t - 1;

            // check if they match pairs
            if (p[i] == ')' && last != '(') return 0;
            if (p[i] == ']' && last != '[') return 0;
            if (p[i] == '}' && last != '{') return 0;
        }
    }

    if (t == -1) {
        return 1; // stack empty means all good
    } else {
        return 0; // something left in stack
    }
}

int main() {
    
    char data[3][50] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]",
        "a + (b - c)"
    };

    int j;
    for (j = 0; j < 3; j++) {
        printf("Expression: %s\n", data[j]);
        if (check(data[j]) == 1) {
            printf("Status: balanced\n\n");
        } else {
            printf("Status: not balanced\n\n");
        }
    }

    return 0;
}