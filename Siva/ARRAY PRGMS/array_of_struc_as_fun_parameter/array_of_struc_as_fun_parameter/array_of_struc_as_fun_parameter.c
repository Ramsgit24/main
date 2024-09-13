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
	struct emp X[2]={{10,'f',789.9f},{20,'g',555.56f}};
	fun(X);

}

void fun(struct emp C[])
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d-%c-%f\n",C[i].id,C[i].sec,C[i].sal);
	}
}