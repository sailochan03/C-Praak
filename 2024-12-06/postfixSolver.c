#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define INITIAL_STACK_SIZE 100

int *stack;
int maxSize = INITIAL_STACK_SIZE;
int top = -1;

// Function prototypes
void push(int data);
int pop();
int postfix(char *exp);
void stackResize(int ns);

int main() {
    stack = (int *)malloc(maxSize * sizeof(int));
    if (stack == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter postfix expression: ");
    char exp[100] = "234*6*+";  // Example input

    int result = postfix(exp);
    printf("Result of given postfix: %d\n", result);

    free(stack);  // Free allocated memory
    return 0;
}

// Push operation
void push(int data) {
    if (top == maxSize - 1) {
        stackResize(maxSize * 2);  // Resize stack if overflow occurs
        printf("Stack has been resized to twice its current size.\n");
    }
    stack[++top] = data;
}

// Pop operation
int pop() {
    if (top == -1) {
        printf("\nStack underflow.\n");
        exit(1);
    }
    return stack[top--];
}

// Resize the stack
void stackResize(int ns) {
    stack = (int *)realloc(stack, ns * sizeof(int));
    if (stack == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    maxSize = ns;
}

// Evaluate postfix expression
int postfix(char *exp) {
    int i = 0, operand1, operand2, result;
    char ch;

    while ((ch = exp[i++]) != '\0') {
        if (isdigit(ch)) {
            push(ch - '0');  // Convert char to int
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            operand2 = pop();
            operand1 = pop();

            switch (ch) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("Invalid operator: %c\n", ch);
                    exit(1);
            }

            push(result);
        } else if (ch == ' ') {
            continue;  // Ignore spaces
        } else {
            printf("Invalid character in expression: %c\n", ch);
            exit(1);
        }
    }

    return pop();  // Final result
}
