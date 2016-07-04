#include <stdio.h>

int main( void )
{
	int inn = 0, i = 0;

	printf("Please input num for count n\n");
	while (scanf("%d", &inn) != EOF)
	{
		printf("%d: Fib(%d) = %d\n", i++, inn, Fib(inn));
		printf("Please input another num\n");
	}

	return 0;
}

int Fib(int n)
{
	return additiveSequence(n, 7, 10);
}

int additiveSequence(int n, int t0, int t1)
{
	if (n == 0) return t0;
	if (n == 1) return t1;

	return additiveSequence(n - 1, t1, t0 + t1);
}
