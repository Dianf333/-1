#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z=1,i=0;
	scanf("%d%d", &x, &y);
	//首先保证x>=y
	if (x < y)
	{
		int a;
		a = x, x = y, y = a;
	}
	//判断是否是两个偶数，是偶数一起除以二
	while ((x % 2 == 0) && (y % 2 == 0))
	{
		x = x / 2, y = y / 2;
		i++;
	}
	//正式开减,直到z==0时（减损法）
	while (z != 0)
	{
		z = x - y;
		if (z > y)
			x = z;
		else
		{
			x = y;
			y = z;
		}
	}
	if (i != 0)//判断是否需要变*2
		x = x * 2 * i;
	printf("%d\n", x);
}