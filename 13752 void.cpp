#include <stdio.h>
void printbar()
{
	printf("=");
}

int main()
{
	int a, b;
	scanf("%d", &a);

	for (int n = 1; n <= a;n++)
	{
		scanf("%d", &b);

		for (int t = 1; t <= b; t++)
		{
			printbar();
		}
			printf("\n");
	}
	return 0;
}
