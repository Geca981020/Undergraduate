#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Integral type\n");
	printf("char�� ũ��� ������ �����ϴ�. =        %d\n", sizeof(char));
	printf("short�� ũ��� ������ �����ϴ�. =       %d\n", sizeof(short));
	printf("int�� ũ��� ������ �����ϴ�. =         %d\n", sizeof(int));
	printf("long�� ũ��� ������ �����ϴ�. =        %d\n", sizeof(long));
	printf("long long�� ũ��� ������ �����ϴ�. =   %d\n\n", sizeof(long long));
	printf("floating point type\n");
	printf("float�� ũ��� ������ �����ϴ�. =       %d\n", sizeof(float));
	printf("double�� ũ��� ������ �����ϴ�. =      %d\n", sizeof(double));
	printf("long double�� ũ��� ������ �����ϴ�. = %d\n", sizeof(long double));
}
