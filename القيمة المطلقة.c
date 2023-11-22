#include <stdio.h>

int main() {
 int x;
  printf("Enter a number:");
 scanf("%d",&x);
 if (x < 0) printf("%d",-1*x);
 
 else printf("%d",x);
 
  return 0;
}
