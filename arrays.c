#include <stdio.h>

int main() {
    //An array with a fixed size
    //Initial values are undefined.
    int numbers[5];

    //You can directly assign values and the size is determined by the number of elements.
    int scores[] = {1, 2, 3, 4, 5};

    //Same for a fixed size but the rest of the elements are initialized to 0.
    int temperatures[7] = {25, 28, 22};

    // Strings in C are arrays of characters terminated by a null character ('\0').
    char hello[] = "Hello"; // Automatically adds '\0' at the end
    printf("Greeting: %s\n", hello); // %s to print strings

    int data[4] = {1, 2, 3, 4}; // Array of size 4 
    printf("data[0]: %d\n", data[0]);
    printf("data[2]: %d\n", data[2]);

    data[1] = 25;
    printf("data[1] %d\n", data[1]);

    data[3] = data[0] + data[1];
    printf("data[3] %d (changed to %d + %d)\n", data[3], data[0], data[1]);

    // data[4] = 500; //out of bounds = NOOO!!!!  
    //printf("Trying to access data[4] : %d\n", data[4]); // DON'T DO THIS !


    int grades[] = {1,2,3,4,5};
    int numGrades = sizeof(grades) / sizeof(grades[0]); // Calculate number of elements
    for (int i = 0; i < numGrades; i++) {
        printf("index %d: %d\n", i, grades[i]);
    }

    int sum = 0;
    for (int i = 0; i < numGrades; i++) {
        sum += grades[i]; 
    }
    printf("\nSum of grades: %d\n", sum);


    char word[] = "Programming";
    printf("\nChars in the word '%s':\n", word);
    // Loop until ('\0') 
    for (int i = 0; word[i] != '\0'; i++) {
        printf("%c ", word[i]);
    }
    printf("\n");

    return 0;
}