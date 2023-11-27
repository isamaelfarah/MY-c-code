#include <stdio.h>

int main() {
    int number = 5;

    printf("Multiplication Table for %d:\n", number);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
