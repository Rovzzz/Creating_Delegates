#include "Header.h"

delegate initdelegate(int n)
{
	delegate d = calloc(n, sizeof(f));
	return d;
}

void addfunc(delegate d, f func) 
{
	for (size_t i = 0; i < N; i++) 
	{
		if(!d[i])
		{
			d[i] = func;
			break;
		}
	}
}
void removefunc(delegate d, f func) 
{
	for (size_t i = 0; i < N; i++) 
	{
		if (d[i] == func) 
		{
			d[i] = NULL;
			break;
		}
	}
}
void showdelegate(delegate f, int a, int b)
{
	for(size_t i=0; i < N; i++)
	{
		if(f[i])
		{
			printf("%d ", f[i](a, b));
		}
	}
}
main() 
{
	system("chcp 1251 > null");
	delegate d = initdelegate(N);
	d[0] = sum;
	d[1] = min;
	addfunc(d, umn);
	addfunc(d, umn);
	printf("%d ", d[1](4, 6));
	printf("%d ", d[2](4, 6));
	//showdelegate(d, 4, 6);
	putchar('\n');
	removefunc(d, umn);
	//showdelegate(d, 4, 6);

}