#include <stdio.h> 

// This tells the compiler that a function named 'displayWelcomeMessage' exists
// It takes no arguments (void) and returns nothing (void).
// first method
void HelloWorld();//*!!!* declaration of the function actual code written below

// second method
double calculator(double num1, double num2, char operation){
    double result; 
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
    return result;
}

int main() {
    HelloWorld(); // The program jumps to the function's code and executes it, then returns to the next line in main.
    calculator(6, 2, '/');
    return 0;
}

// *!!!*  This is the actual code of the function
void HelloWorld() {
    printf("Hello World!\n");
}