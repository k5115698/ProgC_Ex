#define _CRT_SECURE_NO_WARNINGS //scanf ������ ��!
#include <stdio.h>

void main()
{
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);

	if ((a % 2) == 0)
	{
		printf("¦���� �Է��߱���.. \n");
	}
	else
	{
		printf("Ȧ���� �Է��߱���.. \n");
	}
}