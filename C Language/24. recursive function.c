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
	
	printf("n! ��� ���α׷��Դϴ�. n�� �Է� = ");
	scanf("%d", &number);
	
	printf("%d�� ���丮�� ���� %d �Դϴ�.\n", number, fact(number));
	return 0;	
}

