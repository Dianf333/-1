#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//�����������������Լ����շת���������
{
	int x, y,z=1;
	scanf("%d%d", &x, &y);
	//���ȱ�֤x>=y
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