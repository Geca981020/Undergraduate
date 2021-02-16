#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) {
	FILE *fp;
	int c;
	
	fp = fopen(argv[1], "w");
	c = fgetc(stdin);
	while(c!=EOF){
		fputc(c, fp);
		c = fgetc(stdin);
	}
	fclose(fp);
}

