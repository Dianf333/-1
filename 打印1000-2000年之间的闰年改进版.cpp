#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{//���꣺��4����������100��������400������
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
		}
	}

	return 0;
}