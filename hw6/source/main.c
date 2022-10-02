#include <stdio.h>
#include <stdlib.h>
int t;

int main()
{
	for (int i = 6; i > 0; i--)
	{
		for (int j = 1; j <= 5-t; j++)
			printf(" ");
		for (int k = 0; k < 2*t-1; k++)
			printf("*");
		++t;
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}