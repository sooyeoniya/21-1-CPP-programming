#include <stdio.h>

void printGuguDan(int dan)
{
	for (int i = 1; i <= 9; i++)
		printf("%2d x %2d = %2d\n", dan, i, dan * i);
}
void main()
{
	// 구조적 프로그래밍
	printf("[구조적 프로그래밍]\n");
	printf("[구구단 2~9단]\n");
	for (int dan = 2; dan < 10; dan++)
		printGuguDan(dan);
}