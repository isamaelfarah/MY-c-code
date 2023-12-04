#include <stdio.h>

int main() {
    int num, orgNum, revNum = 0, rem;

    printf("Please enter a positive integer: ");
    scanf("%d", &num);

    orgNum = num;

    for (; orgNum != 0; orgNum /= 10) {
        rem = orgNum % 10;
        revNum = revNum * 10 + rem;
    }

    if (num == revNum) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
