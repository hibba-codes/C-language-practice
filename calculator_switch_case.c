#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Addition: %d\n", a + b);
            break;

        case '-':
            printf("Subtraction: %d\n", a - b);
            break;

        case '*':
            printf("Multiplication:  %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Division: = %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
