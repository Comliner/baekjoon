# include <stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d",&a);

	for (int n=1; n <=a;n++)
	{
		scanf("%d",&b);
	
		for (int t = 1; t <= b; t++)
		{
			printf("=");
		}
		printf("\n");
	}
	
	return 0;
}
