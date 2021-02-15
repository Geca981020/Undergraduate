#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int divi(int x, int y);

int main(int argc, char *argv[]) {	
	int i = 20;
	int j = 10;
	int a, b, c, d;
	
	a = add(i, j);
	b = sub(i ,j);
	c = mul(i, j);
	d = divi(i ,j);
	
	printf("add = %d, sub = %d, mul = %d, div = %d\n", a, b, c, d);
	
	return 0;	
}

int add(int x, int y){
	return x+y;
}
int sub(int x, int y){
	return x-y;
}
int mul(int x, int y){
	return x*y;
}
int divi(int x, int y){
	return x/y;
}
