#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) {
	int i;
	char str[] = "C Programming";
	
	printf("%s\n", str);
	
	for(i=0; str[i] != '\0'; i++){
		printf("%c", str[i]);
	}
	printf("\n");
	
}

