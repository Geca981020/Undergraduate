#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int count = 1;
	int total = 0;
	
	for(count = 1, total = 0; count <= 100; count++){
		total += count; 
	}
	
	printf("total = %d", total);
	
	return 0;
}
