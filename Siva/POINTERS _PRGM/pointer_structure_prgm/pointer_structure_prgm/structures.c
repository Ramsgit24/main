#include<stdio.h>
struct stu
{
	int id;
	char sec;
	float sal;
};
void main()
{
	struct stu S={10,'A',5000.2};
	struct stu *M=&S;
	M->id;
	M->sec;
	M->sal;
	printf("%d %c %f\n",M->id,M->sec,M->sal);
}