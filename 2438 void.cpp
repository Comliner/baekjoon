#include <stdio.h>

void printstar(int n)
{
	for (int k = 1; k <= n;k++)
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	int a;
	scanf("%d", &a);

	for (int i=1; i<=a; i++)
	{
		printstar(i);
	}
	return 0;
}
