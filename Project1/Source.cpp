#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a > 0)
	{
		printf("%d > 0", a);
	}
	else if (a < 0)
	{
		printf("%d < 0", a);
	}
	else
	{
		printf("%d = 0", a);
	}
	return 0;
}