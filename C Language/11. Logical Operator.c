#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int number;
	printf("����� �����ϴ� ���ڸ� �Է����ּ��� = ");
	scanf("%d", &number);
	
	if (number < 0 || number > 100)
		printf("����� �ſ� ū ���ڸ� �����Ͻô±���!\n");
	else
		printf("����� ������ ũ���� ���ڸ� �����Ͻô±���!"); 
}
