#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i; 
	
	printf("���ڸ� �Է�: ");
	scanf("%d", &i);
	
	if(i){
   		printf("���ǽ� == ��");
	}else{
    	printf("���ǽ� == ����");
	}
	return 0;
}
