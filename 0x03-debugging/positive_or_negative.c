#include<stdio.h>
#include "main.h"

void positive_or_negative(int i);
{
	int i;
	
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else if (i < 0)
		printf("%d is negative", i);
	printf("\n");
	return (0);
}
