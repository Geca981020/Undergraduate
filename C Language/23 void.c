#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void add(int x, int y);
void sub(int x, int y);
void mul(int x, int y);
void divi(int x, int y);

int main(int argc, char *argv[]) {	
	int i = 20;
	int j = 10;
	
	add(i, j);
	sub(i ,j);
	mul(i, j);
	divi(i ,j);
	
	return 0;	
}

void add(int x, int y){
	printf(" i + j = %d\n", x+y);
}
void sub(int x, int y){
	printf(" i - j = %d\n", x-y);
}
void mul(int x, int y){
	printf(" i * j = %d\n", x*y);
}
void divi(int x, int y){
	printf(" i / j = %d\n", x/y);
}

