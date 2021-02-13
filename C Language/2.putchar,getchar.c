#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c;
	
	printf("한 문자를 입력하시오: ");
	c = getchar();
	
	putchar(c);
	 
	return 0;
}
