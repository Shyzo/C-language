#include <stdio.h>

int main() {
    printf("Counting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Count: %d\n", i);
    }
    printf("\n");

    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    return 0;
}