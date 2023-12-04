#include <stdio.h>

int main() {
    int n;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    int s = n * n;
    int d = 0;

    for (; s != 0; s /= 10) {
        d += s % 10;
    }

    if (d == n) {
        printf("%d is a Neon number.\n", n);
    } else {
        printf("%d is not a Neon number.\n", n);
    }

    return 0;
}
