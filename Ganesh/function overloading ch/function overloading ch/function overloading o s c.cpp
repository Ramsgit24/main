//#include<iostream>
//using namespace std;
//void add(int ,int);
//void sub(int);
//void letter(char,char);
//void mark(float,float);
//int main()
//{
//	add(30,40);
//	sub(20);
//	letter('G','A');
//	mark(1.8f,2.8f);
//}
//void add(int a,int b)
//{
//	cout<<"c="<<a+b<<endl;
//}
//void sub(int c)
//{
//	int a=20;
//	int d;
//	d=a-c;
//	cout<<"d="<<d<<endl;
//}
//void letter(char h,char y)
//{
//	cout<<"a="<<h<<" "<<y<<endl;
//	
//}
//void mark(float a,float b)
//{
//	float f=a/b;
//	cout<<"f="<<f<<endl;
//}
//
//


#include<iostream>
using namespace std;
class A
{
public:
	void len(char*);
	void copy(char*,char*);

};
void A::copy(char *a,char *b)
{
	
	while(*b!='\0')
	{
		*a=*b;
		b++;
		a++;
	}
	*a='\0';
	//cout<<a<<endl;
}



void A::len(char *a)
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	cout<<i<<endl;


}
int main()
{
	A obj1;
	obj1.len("Ganesh");
	char c[10];
	obj1.copy(c,"chandu ");
	cout<<c<<endl;

}
