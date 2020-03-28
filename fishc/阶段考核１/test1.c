#include <stdio.h>

int main()
{
	int i, j, k, z;
	k = 0;

	for(i = 0;i < 1000;i++)
	{
		if(i % 3 == 0)
		{
			k += i;
		}
	}
	for(j = 0;j < 1000;j++)
	{
		if(i % 5 == 0)
		{
			z += j;	
		}
	}


	printf("倍数和为:%d\n", k+z);

	return 0;
}
