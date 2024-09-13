#include<stdio.h>
struct student
{
	int id;
	char gender;
	char section;
	float marks;
};
int main()
{
	struct student s1={11,'M','A',847.7f};
	/* s1.id=10;
	s1.gender='M';
	s1.section='A';
	s1.marks=847.7;*/
	printf("ID of the student %d\n",s1.id);
	printf("GENDER of the student %c\n",s1.gender);
	printf("SECTION ofthe student %c\n",s1.section);
	printf("MARKS of the student %f\n",s1.marks);
	return 0;
}
