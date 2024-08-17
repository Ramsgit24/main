#include<iostream>
using namespace std;
class A
{

	int x;
	char y;
	float z;
public:
	void assign(int a,char b,float c);
	
	void display();
	//{
	//	cout<<x<<"lokesh"<<y<<"jeevan"<<z<<endl;
	//}
	friend int main();
};
void A::assign(int a,char b,float c)
{
		x=a;
		y=b;
		z=c;
	}

void A::display()
{
	cout<<x<<" "<<y<<" "<<z<<endl;
}

int main()
{
	
	class A AA;

	AA.assign(10,20,3.1);

	AA.x=11;
	AA.y='b';
	
	AA.display();

}