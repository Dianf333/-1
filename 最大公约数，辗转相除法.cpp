#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//输入两个数，求最大公约数（辗转相除法）。
{
	int x, y,z=1;
	scanf("%d%d", &x, &y);
	//首先保证x>=y
	if (x < y)
	{
		int a;
		a = x, x = y, y = a;
	}
	while (z != 0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	printf("%d", x);
	return 0;
}