#include<stdio.h>
struct student {
	int id;
	char sec;
	float marks;
};
int main()
{
	struct student S={11,'A',333.2f};
	struct student *A=&S;
	A->id=20;
	A->sec='D';
	A->marks=2122.22f;
	printf("%d %c %f",S.id,S.sec,S.marks);
}