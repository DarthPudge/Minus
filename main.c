#include <string.h>
#include <stdio.h>
#include "Function.h"

int main() 
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);
	int result = eulerFun(n);

	printf("Euler's function of %d is: %d\n", n, result);
	return 0;
}