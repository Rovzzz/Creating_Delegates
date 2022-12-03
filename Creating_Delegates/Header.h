#include <stdio.h>
#include <malloc.h>
#define N 10
int sum(int a, int b)
{
	return a + b;
}
int min(int a, int b)
{
	return a - b;
}
int umn(int a, int b)
{
	return a * b;
}
typedef int (*f)(int, int);
typedef f* delegate;