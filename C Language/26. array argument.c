#include <stdio.h>
#include <stdlib.h>

// output 0 1 2 3 4

int mul(int x[5]);

int main(int argc, char *argv[]) {	
	
	int x[5] = {1, 2, 3, 4, 5};
	printf("1X2X3X4X5 = %d\n", mul(x));
	
	return 0;	
}

int mul(int x[5]){
	int result = 1;
	int i;
	for(i = 0; i<5; i++){
		result *= x[i];
	}
	return result;
}

