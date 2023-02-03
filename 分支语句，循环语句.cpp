#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;
		printf("%d ", i);
	}

	return 0;
}
//int main()
//{//一项复杂的计算，但是switch可以套用。
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
//}
//{ 另一种方式
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//}
//失败的输出1~100所有奇数函数方法
//int dio(int x)
//{
//	if ((x % 2) == 1)
//		return x;
//}     这里无法处理不输出偶数的情况。
//
//int main()
//{
//	int i = 1,a;
//	while (i <= 100)
//	{
//		a = dio(i);
//		printf("%d\n", a);
//		i++;
//	}
//}

//{ 输出1~100所有的奇数
//	int i = 1;
//	while(i <= 100)
//	{
//		if ((i % 2) == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//
//}
//{
//	int a = 0, b = 2;
//	if (a == 1)
//	{if (b == 2)
//			printf("haha\n"); }
//	else
//		printf("hehe\n");
//	return 0;
//} 