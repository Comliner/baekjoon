#include <stdio.h>
int main()
{	int ax,ay,bx,by,cx,cy;
	scanf("%d %d",&ax,&ay);
	scanf("%d %d", &bx, &by);
	scanf("%d %d", &cx, &cy);

	if ( ax == bx)
	{
		printf("%d ", cx);
	}
	else if (ax == cx)
	{
		printf("%d ", bx);
	}
	else
	{
		printf("%d ", ax);
	}

	if (ay == by)
	{
		printf("%d", cy);
	}
	else if (ay == cy)
	{
		printf("%d", by);
	}
	else
	{
		printf("%d", ay);
	}


	return 0;
}
