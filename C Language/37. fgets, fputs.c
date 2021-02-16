#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) {
	FILE *fp;
	int line = 0;
	char buffer[80];
	
	fp = fopen(argv[1], "r");
	while (fgets(buffer, 80, fp) != NULL){
		line++;
		printf("%3d %s", line, buffer);
	}
}

