//#include<stdio.h>
//struct A{//public
//	int a;
//	float b;
//	char c;
//	double t;
//	struct D{
//		int f;
//		float g;
//		char h;
//	}e;
//};
//struct {
//	int q;
//	int p;
//	int r;
//}h;
//int main(){
//	struct A q;
//	//q={1,2.54f,'c',{11,2.897f,'t'}};
//	//q={1,2.54f,'c',{11,2.897f,'t'}};
//	/*q.a=1;
//	q.b=2.54f;
//	q.c='c';
//	q.e.f=11;
//	q.e.g=2.897;
//	q.e.h='t';*/
//	h.p=2;
//	h.q=12;
//	h.r=123;
//	printf("%d",sizeof(q));
//}

//#include<stdio.h>
//struct D{
//	int p;
//	float q;
//	char r;
//};
//struct A{
//	int a;
//	float b;
//	char c;
//	struct D E;
//};
//int main(){
//	struct A Q={10,22.3,'j',{12,33.4,'i'}};
//	int a=sizeof(Q);
//
//}
#include<stdio.h>
struct emp
{
    char id;
    int section;
    char salary;
    /*struct pan
    {
        int id;
        char name;
    }D;*/
};
int main()
{
    struct emp s1;
    s1.id=10;
    s1.section='a';
    s1.salary='b';
    printf("%d",sizeof(s1));
}