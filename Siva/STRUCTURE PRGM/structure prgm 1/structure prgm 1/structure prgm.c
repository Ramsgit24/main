#include<stdio.h>
struct emp
{
	int id;
	char sec;
	float sal;
};
struct emp y={110,'A',5000.00};
struct emp m={200}; 
int main()
{
	struct emp X={100,'B',5000.00};
	struct emp Z={300,'D'};
	printf("%d\n%c\n%f\n",X.id,X.sec,X.sal);
	printf("%d %c %f\n",y.id,y.sec,y.sal);
}