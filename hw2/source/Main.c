#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("最大值:%d\n", c);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("最小值:%d\n", c);
	system("pause");
	return 0;
}