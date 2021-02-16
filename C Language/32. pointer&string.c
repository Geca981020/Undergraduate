#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) {
	int i;
	char m[] = "C Programming";
	char *p;
	
	p = m;
	for(i=0; i<strlen(m); i++)
		printf("%c", m[i]);
	printf("\n");
	
	for(i=0; i<strlen(m); i++)
		printf("%c", *(p+i));
	printf("\n");
	
	printf("%s\n", m);
	printf("%s\n", p);
}

