#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i; 
	
	printf("숫자를 입력: ");
	scanf("%d", &i);
	
	if(i){
   		printf("조건식 == 참");
	}else{
    	printf("조건식 == 거짓");
	}
	return 0;
}
