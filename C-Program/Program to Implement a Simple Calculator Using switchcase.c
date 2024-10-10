#include <stdio.h>
 
int main() {
    float num1, num2, result;
    char operator;
 
    // Asking user for the first number
    printf("Enter first number: ");
    scanf("%f", &num1);
     
    // Asking user for the second number
    printf("Enter second number: ");
    scanf("%f", &num2);
     
    // Asking user for the operation they want to perform
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
 
    // Performing the chosen operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }
 
    // Displaying the result
    printf("Result: %.2f\n", result);
    return 0;
}
