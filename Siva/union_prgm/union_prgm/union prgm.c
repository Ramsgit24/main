#include<stdio.h>

union bittu
{
	int id;
	char sec;
	float sal;
};
int main()
{
	union bittu V;

	V.id=10;
	V.sal=1200.00f;
	V.sec='D';

	printf("%c\n",V.sec);
}