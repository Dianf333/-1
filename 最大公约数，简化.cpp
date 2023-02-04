#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//输入两个数，求最大公约数（辗转相除法）。
{
	int a, b, c = 0;
	scanf("%d%d", &a, &b);
	while (c = a % b)//c到了0结束的特性//在这里依然会进行计算//或许可以把算到0就结束的计算放在这里
	{//a与b的大小问题，在这里似乎不需要担心，如a%b，即使b>a,下一轮计算也会颠正顺序。
		a = b;//解决方式和我一开始似乎差不多
		b = c;
	}

	printf("%d\n", b);
	return 0;
}