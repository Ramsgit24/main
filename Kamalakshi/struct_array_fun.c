#include<stdio.h>
void disp (struct emp X[]);
struct emp 
{
	int id;
	char sec;
	float sal;
};
void main()
{
	struct emp X[2]={{10,'A',2000.00f},{20,'B',3000.00f}};
	disp(X);
}
void disp(struct emp Z[])
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d %c %f\n",Z[i].id,Z[i].sec,Z[i].sal);
	}
}