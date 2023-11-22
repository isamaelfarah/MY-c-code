#include <stdio.h>

int main() {
 int a=15,b=3,c=6;
if (a>b && a>c)
{
 printf("%d",a);
} 
else if (a>b && a<c)
{
     printf("%d",c);
}else if (a<b && b>c){

 printf("%d",b);
}
else {
    printf("%d",c);
}
  return 0;
}
v
