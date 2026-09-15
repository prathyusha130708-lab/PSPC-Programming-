#include <stdio.h>

int main() {
    char op;
    float a, b, res;
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two values: ");
    scanf("%f %f", &a, &b);
    switch(op) {
        case '+':
            res = a + b;
            printf("Result: %.2f + %.2f = %.2f\n", a, b, res);
            break;

        case '-':
            res = a - b;
            printf("Result: %.2f - %.2f = %.2f\n", a, b, res);
            break;

        case '*':
            res = a * b;
            printf("Result: %.2f * %.2f = %.2f\n", a, b, res);
            break;

        case '/':
            if(b != 0) {
                res = a / b;
                printf("Result: %.2f / %.2f = %.2f\n", a, b, res);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
