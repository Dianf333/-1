#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year = 1000;
	while (2000 - year)
	{//�ֳ����֣��ܱ�100��������Ա�100�����ġ�
		if ((year % 100) == 0)
		{
			if ((year % 400) == 0)
				printf("%d ", year);                                                                                   
		}
		else
		{
			if ((year % 4) == 0)
				printf("%d ", year);
		}
		year++;
	}
	return 0;
}