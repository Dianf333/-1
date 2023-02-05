#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year = 1000;
	while (2000 - year)
	{//分成两种，能被100整除与可以被100整除的。
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