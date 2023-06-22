#include <stdio.h>

int main() {
    float n1, n2, res;
    char operator;
    printf("Enter Number 1: ");
    scanf("%f", &n1);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter Number 2: ");
    scanf("%f", &n2);

    switch (operator) {
        case '+':
            res = n1 + n2;
            printf("Result: %.2f\n", res);
            break;
        case '-':
            res = n1 - n2;
            printf("Result: %.2f\n", res);
            break;
        case '*':
            res = n1 * n2;
            printf("Result: %.2f\n", res);
            break;
        case '/':
           res = n1 / n2;
                printf("Result: %.2f\n", res);
           break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}