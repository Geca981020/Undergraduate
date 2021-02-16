#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	int id;
	char name[20];
	char major[20];
};

void main(int argc, char *argv[]) {
	
	struct student s1, s2, *p, *q;
	s1.id = 201716933;
	strcpy(s1.name, "hong gil dong");
	strcpy(s1.major, "IT information");
	printf("학번 = %d, 이름 = %s, 전공 = %s\n", s1.id, s1.name, s1.major);
	
	s2 = s1;
	printf("학번 = %d, 이름 = %s, 전공 = %s\n", s2.id, s2.name, s2.major);
	
	p = &s2;
	printf("학번 = %d, 이름 = %s, 전공 = %s\n", p->id, p->name, p->major);
	
	q = (struct student *)malloc(sizeof(struct student *));
	q->id = 201716934;
	strcpy(q->name, "yun gil dong");
	strcpy(q->major, "Computer");
	printf("학번 = %d, 이름 = %s, 전공 = %s\n", q->id, q->name, q->major);
}

