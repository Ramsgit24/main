#include<stdio.h>
struct student
{
	char name ;
	char section ;
	float marks;
	int number ;
};
int main()
{
	struct student s1;
	s1.name = 'L';
	s1.section = 'A';
	s1.marks =477.6f;
	s1.number = 2;

	printf("Name of the student %c\n",s1.name);
	printf("SECTION of the student %c\n",s1.section);
	printf("MARKS of the student %f\n",s1.marks);
	printf("NUMBER of the student %d\n",s1.number);
}
