#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) {
	int i;
	char string1[3][10] = {"red", "blue", "white"};
	char *string2[3] = {"red", "yellow", "black"};
	
	for (i = 0; i < 3; i++)
		printf("%s ", string1[i]);
	printf("\n");
	
	for (i = 0; i < 3; i++)
		printf("%s ", string1[i]);
	printf("\n");
	
	for (i = 0; i < 3; i++)
		printf("%s ", string2[i]);
	printf("\n");	
	
}

