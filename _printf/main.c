#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int retval;
	int limitTesting;

	retval = _printf("%%%s %c%d ", NULL, 404, 808);
	printf("\n%d\n", retval);
	printf("%%%s %c%d ", NULL, 404, 808);
	limitTesting = _printf("%d%i", INT_MAX, INT_MIN);
	printf("\n%d\n", limitTesting);
	printf("%d%i", INT_MAX, INT_MIN);

	return (0);
}
