#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, g;
	int h, i;
	scanf("%d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g);
	h = 0;
	i = 100;
	
	if (a % 2 == 1)
	{
		h = h + a;

		if (a < i)
		{
			i = a;
		}

	}
	
	if (b % 2 == 1)
	{
		h = h + b;

		if (b < i)
		{
			i = b;
		}
	}

	if (c % 2 == 1)
	{
		h = h + c;

		if (c < i)
		{
			i = c;
		}
	}

	if (d % 2 == 1)
	{
		h = h + d;

		if (d < i)
		{
			i= d;
		}
	}
	
	if (e % 2 == 1)
	{
		h = h + e;

		if (e < i)
		{
			i = e;
		}
	}
	
	if (f % 2 == 1)
	{
		h = h + f;

		if (f < i)
		{
			i = f;
		}
	}
	
	if (g % 2 == 1)
	{
		h = h + g;

		if (g < i)
		{
			i = g;
		}
	}

	if (h == 0)
	{
		printf("-1");
	}

	else
	{
		printf("%d\n%d",h,i);
	}
}
