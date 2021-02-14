#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int number;
	printf("당신이 좋아하는 숫자를 입력해주세요 = ");
	scanf("%d", &number);
	
	if (number < 0 || number > 100)
		printf("당신은 매우 큰 숫자를 좋아하시는군요!\n");
	else
		printf("당신은 적당한 크기의 숫자를 좋아하시는군요!"); 
}
