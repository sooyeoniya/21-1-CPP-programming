#include <stdio.h>

void main()
{
	// ������ ���α׷���
	int i = 1;
	int dan = 2;
	printf("[������ ���α׷���]\n");
	printf("[������ 2~9��]\n");
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