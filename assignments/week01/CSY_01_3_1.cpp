#include <stdio.h>

void main()
{
	// 절차적 프로그래밍
	int i = 1;
	int dan = 2;
	printf("[절차적 프로그래밍]\n");
	printf("[구구단 2~9단]\n");
loop:
	printf("%2d x %2d = %2d\n", dan, i, dan * i);
	i++;
	if (i <= 9) goto loop;

	if (i > 9 && dan < 9)
	{
		i = 1;
		dan++;
		goto loop;
	}
}