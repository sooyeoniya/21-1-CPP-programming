#include <stdio.h>

void printGuguDan(int dan)
{
	for (int i = 1; i <= 9; i++)
		printf("%2d x %2d = %2d\n", dan, i, dan * i);
}
void main()
{
	// ������ ���α׷���
	printf("[������ ���α׷���]\n");
	printf("[������ 2~9��]\n");
	for (int dan = 2; dan < 10; dan++)
		printGuguDan(dan);
}