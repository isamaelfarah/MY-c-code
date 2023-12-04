#include <stdio.h>

int main() {
    int n, o, r, c = 0, res = 0;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    o = n;

    for (; o != 0; o /= 10) {
        ++c;
    }

    o = n;

    for (; o != 0; o /= 10) {
        r = o % 10;

        int p = 1;
        for (int i = 0; i < c; ++i) {
            p *= r;
        }

        res += p;
    }

    if (res == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
