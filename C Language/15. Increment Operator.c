#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 5;
	int j = 7;
	
	printf("(i++) + j = %d\n ", (i++)+j);
	printf("i = %d\n", i);
	
	printf("(++i) + j = %d\n ", (++i)+j);
	printf("i = %d\n", i);
}
