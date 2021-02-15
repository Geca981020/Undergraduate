#include <stdio.h>
#include <stdlib.h>

/*output
12
0.714286
*/

typedef int IntType;
typedef double RealType;

void main(int argc, char *argv[]) {
	int i = 5;
	IntType j = 7, k;
	RealType x;
	
	k = i+j;
	printf("%d\n", k);
	x = (RealType)i/j;
	printf("%f\n", x);
}

