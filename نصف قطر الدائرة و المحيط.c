
#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	double r = 0, area = 0, c = 0;
	printf("Please enter radius\n");
	scanf("%lf", &r); 
	area = 3.14 * r * r;
	c = 2 * 3.14 * r;
	printf("The area is : %.2lf square inches\n",area);
	printf("The circumference is :%.2lf inches\n",c);
	system("pause");
}
 
