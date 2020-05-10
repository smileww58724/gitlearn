#include <stdio.h>

int main()
{
	char a = 'F';
	int f = 123;

	char *pa = &a;
	int *pb = &f;

	printf("a = %c\n", *pa);
	printf("f = %d\n", *pb);

	*pa = 'C';
	*pb += 1;

	printf("now, a = %c\n", *pa);
	printf("now, f = %d\n", *pb);

	printf("sizeof pa = %d\n", sizeof(pa));
	printf("sizeof pb = %d\n", sizeof(pb));
 	
	printf("the addr of is: %p\n", pa);
	printf("the addr of is: %p\n", pb);

	return 0;
}

