#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Integral type\n");
	printf("char의 크기는 다음과 같습니다. =        %d\n", sizeof(char));
	printf("short의 크기는 다음과 같습니다. =       %d\n", sizeof(short));
	printf("int의 크기는 다음과 같습니다. =         %d\n", sizeof(int));
	printf("long의 크기는 다음과 같습니다. =        %d\n", sizeof(long));
	printf("long long의 크기는 다음과 같습니다. =   %d\n\n", sizeof(long long));
	printf("floating point type\n");
	printf("float의 크기는 다음과 같습니다. =       %d\n", sizeof(float));
	printf("double의 크기는 다음과 같습니다. =      %d\n", sizeof(double));
	printf("long double의 크기는 다음과 같습니다. = %d\n", sizeof(long double));
}
