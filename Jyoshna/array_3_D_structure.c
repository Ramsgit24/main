#include<stdio.h>
struct emp
{
	int id;
	char sec;
	float sal;
};
int main()
{
	int i,j,k;
	struct emp a[2][2][2]={{{{10,'A',23.4f},{20,'B',34.5f}},{{30,'C',33.4f},{40,'D',44.5f}}},{{{50,'E',55.4f},{60,'F',66.5f}},{{70,'G',77.4f},{80,'H',88.5f}}}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d-%c-%f\n",a[i][j][k].id,a[i][j][k].sec,a[i][j][k].sal);
			}
		}
	}
}
