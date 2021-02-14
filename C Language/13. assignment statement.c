#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i = 2;
	int result = i*i;
	printf("result = %d\n", result);
		
	result *= i;
	printf("result = %d\n", result);

	result *= (i+i);
	printf("result = %d\n", result);
}
