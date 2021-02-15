#include <stdio.h>
#include <stdlib.h>

// output 1X2X3X4X5 = 120

int mul(int x[], int size);

int main(int argc, char *argv[]) {	
	
	int x[] = {1, 2, 3, 4, 5};
	int size = sizeof(x)/sizeof(x[0]);
	
	printf("1X2X3X4X5 = %d\n", mul(x, size));
	
	return 0;	
}

int mul(int x[], int size){
	int result = 1;
	int i;
	for(i = 0; i<size; i++){
		result *= x[i];
	}
	return result;
}

