#include<stdio.h>
#pragma pack(1)
void display(int);
void display2(struct emp);
struct emp fun();

struct emp
{
	
	char sec;
	short int no;
	int id;
	float sal;
};
 void main()
 {
	 int X=10,a;
	 struct emp siva;
	 struct emp E={'A',2,123,5000.00f};
	 a=sizeof(E);
	 printf("%d\n",a);
	 display(X);
	 display2(E);
	 siva =fun();
 }
 void display(int a)
 {
	 printf("%d",a);
 }
 void display2(struct emp X)
 {
	 printf(" %c %d %d %f ",X.sec,X.no,X.id,X.sal);
 }
 struct emp fun()
 {
	 struct emp A={'C',1,321,4000.00f};
	 return A;
 }



