#include <stdio.h>
int main()
{
	int n;
	int m;
	int a;
	int b;

	scanf("%d", &n);
	scanf("%d", &m);

	a = n - 1;
	b = (m - 1) * n;
	
	printf("%d",a+b);

	return 0;

}
