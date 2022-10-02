#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	scanf("%d", &num);
	int a = num % 2;
	if (!a)
	{
		printf("number is even\n");
	}
	else
	{
		printf("number is odd\n");
	}
	system("pause");
	return 0;
}