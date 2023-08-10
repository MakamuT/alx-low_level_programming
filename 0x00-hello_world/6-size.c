#include<stdio.h>

/**
 * main - main function
 *
 * Return : must be 0
 */

int main(void)
{
	printf("gcc 6-size.c -m32: %lu byte(s) \n", sizeof(-m32));
	printf("gcc 6-size.c -m64: %lu byte(s) \n", size(-m64));
	printf("Size of a char: %lu byte(s) \n", sizeof(char));
	printf("Size of an int: %lu byte(s) \n", sizeof(int));
	printf("Size of a long int: %lu byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s) \n", sizeof(long long int));
	printf("Size of a float: %lu byte(s) \n", sizeof(float));
	return (0);
}
