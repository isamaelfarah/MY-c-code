#include <stdio.h>

int main() {

  float a, b, c;

    printf("enter on ");
    scanf("%f", &a);

    printf("iner do ");
    scanf("%f", &b);

    printf("iner ther ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("thes is mothalth\n");
    } else {
        printf("not  mothalth\n");
    }

    return 0;
}
