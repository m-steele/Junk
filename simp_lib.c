// THis is the first project to use git
#include <stdio.h>
#include <stdlib.h>

int ft_add(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return (sum);
}

int main()
{
	int c, d;
	int result = 0;
	printf("Enter two numbers\n");
	printf("Number One:\n");
	scanf("%d", &c);
	printf("Number Two:\n");
	scanf("%d", &d);
	result = ft_add(c, d);
	printf("Answer: %d\n", result);
	return (0);
}