#include <stdio.h>

void main()
{
	int a, b, c, d;
	a = 100 + 100;
	b = a + 100;
	c = a + b - 100;
	d = a + b + c;
	printf("a,b,c,d의 값 ==> %d, %d, %d, %d \n", a, b, c, d); //200, 300, 400, 900

	a = 100;
	a = a + 200;
	printf("a의 값 ==> %d \n", a); //300
}