include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &n);
    }

    printFibonacci(n);

    return 0;
}
