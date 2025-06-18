#include <stdio.h>

//*limit*   The program  assumes valid input from the user.
int main() {

    double num1;
    double num2;
    char operation;
    double result;


    printf("Enter the first number: ");
    scanf("%lf", &num1); // %lf is used to read a double

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation); // %c is used to read a character. Note the space before %c!

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result); // %.2lf to display 2 decimal places
            break; // Exit the switch statement

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero isnt allowed.\n");
            }
            break;

        default: // If the operation character is not recognized
            printf("Error: Invalid operation.\n");
    }

    return 0;
}