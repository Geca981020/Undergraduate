#include <stdio.h>
#include <stdlib.h>

/* output
Have a nice day
Have a nice day2
Have a nice day */

void main(int argc, char *argv[]) {
	char message[] = "Have a nice day";
	char *p = "Have a nice day2";
	
	printf("%s\n", message);
	printf("%s\n", *p);
	 
	char *q = message;
	printf("%s\n", q);
}

