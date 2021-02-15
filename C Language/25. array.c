#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	
	int x[5];
	int i;
	for(i=0; i<5; i++){
		x[i] = i;
	}
	
	for(i=0; i<5; i++){
		printf("%d ", x[i]);
	}
	return 0;	
}

