
#include<stdio.h>
void fun(struct emp[]);
struct emp
{
	int id;
	char sec;
	float sal;
};
void main()
{
	struct emp X[2]={{10,'A',111.11f},{20,'B',222.22f}};
	fun(X);
}
void fun(struct emp C[])
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d %c %f\n",C[i].id,C[i].sec,C[i].sal);
	}
}