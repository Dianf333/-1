#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z=1,i=0;
	scanf("%d%d", &x, &y);
	//���ȱ�֤x>=y
	if (x < y)
	{
		int a;
		a = x, x = y, y = a;
	}
	//�ж��Ƿ�������ż������ż��һ����Զ�
	while ((x % 2 == 0) && (y % 2 == 0))
	{
		x = x / 2, y = y / 2;
		i++;
	}
	//��ʽ����,ֱ��z==0ʱ�����𷨣�
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
	if (i != 0)//�ж��Ƿ���Ҫ��*2
		x = x * 2 * i;
	printf("%d\n", x);
}