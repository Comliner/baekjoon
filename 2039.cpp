#include <stdio.h>
#include <algorithm>
int main()
{
	int a [9];
	int not1, not2;
	int sum;
	sum = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf(" %d", &a[i]);
	}
	std::sort(a, a + 9);
	for (int i = 0; i < 9; i++)
	{
		sum = a[i] + sum;
	}

	sum = sum - 100;

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (a[i] + a[j] == sum)
			{
				not1 = i;
				not2 = j;
				break;
			}
			
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == not1 || i == not2)
		{
			continue;
		}
		printf("%d\n", a[i]);
	}
	
	return 0;
}
