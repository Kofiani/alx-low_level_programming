#include <stdio.h>
void modify(int *cc, int *ccc)
{
	*cc = 10;
	*ccc = 5;
}

int main(void)
{
	int c;
       int p[1];

	p[0] = 2;
	c = 20;
	printf("before call p was %d and c was %d\n", *p, c);
	modify(&p[0], &c);
	printf("after call p is %d and c is %d\n", *p, c);
	return (0);
}
