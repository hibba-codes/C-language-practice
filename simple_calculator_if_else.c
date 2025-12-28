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

    if (op == '+') {
        printf("Addition = %d\n", a + b);
    }
    else if (op == '-') {
        printf("Subraction = %d\n", a - b);
    }
    else if (op == '*') {
        printf("Multiplication = %d\n", a * b);
    }
    else if (op == '/') {
        if (b != 0)
            printf("Division = %d\n", a / b);
        else
            printf("Error: Division by zero\n");
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
