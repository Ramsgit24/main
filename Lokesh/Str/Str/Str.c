#include<stdio.h>
struct student
{
	int id ;
	char section;
	float marks;
};
int main()
{
	struct student s1 ={11,'A',437.8f};
	struct student s2;
	struct student s3;
	s2.id = 123;
	s2.section='B';
	s2.marks=888.3f;
	printf("id is %d\n",s1.id);
	printf("section is %c\n",s2.section);
	printf("marks is %f\n",s3.marks);
	s3.marks=s1.marks+s2.marks;
	s3.section=s1.section+s2.section;
	s3.id=s2.marks;
	printf("S1 data value:");
	printf("id is %d\n",s3.id);
	printf("section is %c\n",s3.section);
	printf("float is %f\n",s2.marks);
	}


