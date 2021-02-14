#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char i = 10;
	
	printf("i<<2 = %d\n", i<<2);
	printf("i>>3 = %d\n", i>>2);
	
	i = 10;
	char j = 15;
	
	printf("~i = %d\n", ~i);
	printf("i&j = %d\n", i&j);
	printf("i|j = %d\n", i|j);	
	printf("i^j = %d\n", i^j);
	
 
}
