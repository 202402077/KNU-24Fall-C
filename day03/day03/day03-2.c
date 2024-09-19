#include <stdio.h>
int factorial(int num)
{
	if (num == 0 || num == 1) return;
	int res;
	res = num * factorial(num - 1);
	return res;
}

int main()
{
	int num;
	scanf_s("%d", &num);
	int result = factorial(num);
	printf("%d\n", result);
	return 0;
}
