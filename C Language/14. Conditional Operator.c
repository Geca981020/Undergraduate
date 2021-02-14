#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i = 5;
	int j = 10;
	
	int logic = (i<j)?1:0;
	int logic2 = (i>j)?1:0;
	
	printf("logic = %d \n", logic);
	printf("logic2 = %d \n", logic2);
}
