#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);  

    switch (op) {
        case '+':
            printf("SUM = %d\n", a + b);
            break;

        case '-':
            printf("DIFFERENCE = %d\n", a - b);
            break;

        case '*':
            printf("PRODUCT = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("DIVISOR = %d\n", a / b);
            else
                printf("Division by zero is not allowed\n");
            break;
            
        case '%':
            printf("REMAINDER = %d\n", a%b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
