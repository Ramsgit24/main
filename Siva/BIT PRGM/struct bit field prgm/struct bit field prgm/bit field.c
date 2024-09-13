#include<stdio.h>
struct divya
{
	char sec:8;
	int id:8;
	int no:5;
	int 
size:8;
};
int main()
{
	struct divya E={'A',111,5};
	printf("%c %d %d\n ",E.sec,E.id,E.no);
    printf("%d\n",sizeof(E));
}
