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
//{//һ��ӵļ��㣬����switch�������á�
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
//{ ��һ�ַ�ʽ
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//}
//ʧ�ܵ����1~100����������������
//int dio(int x)
//{
//	if ((x % 2) == 1)
//		return x;
//}     �����޷��������ż���������
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

//{ ���1~100���е�����
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