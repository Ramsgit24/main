#include<stdio.h>
struct emp
{
	int id;
	char sec;
	float sal;
};
void disp(struct emp*);
int main()
{
	struct emp X={100,'b',99.98f};
	struct emp* E=&X;
	printf("before updation\n");
	disp(&X);
	printf("After updation\n");
	printf("%d-%c-%f\n",E->id,E->sec,E->sal);

}
void disp(struct emp* Z)
{
	printf("%d-%c-%f\n",Z->id,Z->sec,Z->sal);
	Z->id=200;
	Z->sec='c';
	Z->sal=100.0f;
}
