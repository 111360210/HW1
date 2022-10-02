#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int t;
	scanf("%d %d", &num1, &num2);
	t = num1 % num2;
	if (t == 0)
	{
		printf("%d is the mutiples of %d ", num1, num2);
	}
	else
	{
		printf("%d is not the mutiples of %d ", num1, num2);
	}
	system("pause");
	return 0;
}