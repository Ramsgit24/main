#include<stdio.h>
struct stu
{
	int id;
	char section;
	float marks;
};
int main()
{
	struct stu s1={11,'A',487.3f};
	struct stu s2;
	struct stu s3;
	s2.id=123;
	s2.section='B';
	s2. marks=888.3f;

	printf("s1 details are \n");
	printf("id is %d\n",s1.id);
	printf("section is %c\n",s1.section);
	printf("marks are %f\n",s1.marks);
	s3.id=s1.id+s2.id;
	s3.section=s1.section+s2.section;
	s3.marks=s1.marks+s2.marks;

	printf("s2 details are\n");
	printf("id is %d\n",s2.id);
	printf("section is %c\n",s2.section);
	printf("marks are %f\n",s2.marks);

	printf("s3 details are\n");
	printf("id is %d\n",s3.id);
	printf("section is %c\n",s3.section);
	printf("marks are %f\n",s3.marks);
}




