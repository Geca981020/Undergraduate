#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int count = 1;
	int total = 0;
	
	do{
		total += count;
		count += 1;
	}while(count <= 100);
	
	printf("total = %d", total);
	
	return 0;
}
