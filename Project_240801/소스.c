/*
void main()
{
	int a;
	float b;

	a = 123.45;
	b = 200;

	printf("a의 값 ==> %d \n", a); //123
	printf("b의 값 ==> %d \n", b); //0
}
*/
/*
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
*/
#include <stdio.h>

int sum(int v1, int v2)
{
	int result;
	result = v1 + v2;
	return result;
}
void main()
{
	int hap;
	hap = sum(100, 200);
	printf("100과 200의 sum() 함수 결과는 : %d\n", hap);
}


