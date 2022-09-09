#include <stdio.h>

/**
 * main - entry into the program
 *
 * Description: Prints the size of c to
 * the terminal depending on whether the system is a 32-bit
 * or a 64-bit system
 * Return: 0(success)
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of a int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long));
	prrintf("size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("size of a float: %d byte(s)\n", sizeof(float));

return (0);
}
