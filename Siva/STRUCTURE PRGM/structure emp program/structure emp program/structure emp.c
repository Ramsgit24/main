#include<stdio.h>
struct emp
{
	int id;
	char sec;
	float sal;
	

	struct dob
	{
		int dd;
		int mm;
		int yy;
	
	}D;
};
int main()
{
//struct emp X={100,'A',5000.00,{12,12,2024}};
 struct emp X;
	 X.id=1;
	X.sec='A';
	X.sal=100.00;
	X.D.dd=01;
	X.D.mm=02;
	X.D.yy=2024;
	
}