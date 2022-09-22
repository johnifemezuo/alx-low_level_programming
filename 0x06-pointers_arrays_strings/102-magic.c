#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * wriet you line
	 * - you are not allow to use a
	 * - you are not allow to modify p
	 */
       *(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
 	return (0);	
}
