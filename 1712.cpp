#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d", &a); //고정비용
	scanf("%d", &b); //가변비용
	scanf("%d", &c); //노트북 가격
	
	if (b>=c)
	{
		printf("-1");
	}
	
	else
	{
		printf("%d", a/(c-b)+1);
	}
	return 0;
}
