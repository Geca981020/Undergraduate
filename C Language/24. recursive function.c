#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fact(int n){
	if(n>1){
		return n*fact(n-1);
	}else{
		return 1;
	}
}

int main(int argc, char *argv[]) {	
	int number;
	
	printf("n! 계산 프로그램입니다. n을 입력 = ");
	scanf("%d", &number);
	
	printf("%d의 팩토리얼 값은 %d 입니다.\n", number, fact(number));
	return 0;	
}

