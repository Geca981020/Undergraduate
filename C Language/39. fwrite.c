#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main(int argc, char *argv[]) {

	struct student recode;
	FILE *fp;
	
	if(argc != 2){
		fprintf(stderr, "사용법: %s 파일이름\n", argv[0]);
		return -1;
	}
	
	fp = fopen(argv[1], "r");
	printf("%s %7s %6s\n", "record", "name", "score");
	
	while(scanf(fp, " %d %s %d", &record.id, record.name, &record.score) == 3){
		fwrite(&record, sizeof(record), 1, fp);
			
	fclose(fp);
	
	return 0;
}

