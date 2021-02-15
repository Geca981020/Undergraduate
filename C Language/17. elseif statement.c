#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int score = 67;
	
	if(score>=90){
		printf("A등급.\n");
	}else if(score>=80){
		printf("B등급.\n");
	}else if(score>=70){
		printf("C등급.\n");
	}else if(score>=60){
		printf("D등급.\n");
	}else{
		printf("F등급.\n");
	}
	
	return 0;
}
