//#include<iostream>
//using namespace std;
//class A
//{
//	int x;
//	int y;
//public:
//	A()
//	{
//		x=10;
//		y=20;
//	}
//	virtual void assign(int a,int b)
//	{
//		x=a;
//		y=b;
//	}
//	void display()
//	{
//		cout<<x<<y<<endl;
//	}
//};
//class B:public A
//{
//	int p;
//	int q;
//public:
//	B()
//	{
//		p=30;
//		q=40;
//	}
//	void assign(int c,int d)
//	{
//		p=c;
//		q=d;
//	}
//	void display()
//	{
//		cout<<p<<q<<endl;
//	}
//};
//
//int main()
//{
//	/*int x=10;
//	char b='n';
//	x=static_cast<int>(b);
//	cout<<x<<endl;
//
//	A obj1;
//	B obj2;
//
//	A *pobj1=static_cast<A*>(&obj2);
//	pobj1->display();*/
//
//	A obj1;
//	B obj2;
//
//	A *pobj1=dynamic_cast<A*>(&obj2);
//
//	B *pobj2=dynamic_cast<B*>(&obj1);
//
//	if(pobj1==NULL)
//	{
//		cout<<"Invalid"<<endl;
//	}
//	else 
//	{
//		pobj1->display();
//	}
//
//	if(pobj2==NULL)
//	{
//		cout<<"Invalid"<<endl;
//	}
//	else 
//	{
//		pobj2->display();
//	}
//
//
//
//}



#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
    public:
    A()
    {
        x=10;
        y=20;
    }
   virtual void assign(int a,int b)
    {
        x=a;
        y=b;
    }
   virtual void display()
    {
        cout<<x<<y<<endl;
    }
};
class B:public A
{
    int p;
    int q;
    public:
    B()
    {
        p=30;
        q=40;
    }
    void assign(int c,int d)
    {
        p=c;
        q=d;
    }
    void display()
    {
        cout<<p<<q<<endl;
    }
};
int main()
{
    /*int A=50;
    char B='b';
	float C=232.4f;
    A=static_cast<int>(B);
    cout<<A<<endl;
	B=static_cast<char>(A);
	cout<<B<<endl;
    C=(float)A;
	cout<<C<<endl;*/
    /*float A=222.3f;
    int B=50;
    B=static_cast<int>(A);
    cout<<B<<endl;*/
	A A1;
	B B1;
	A* P1;
	P1=dynamic_cast<A*>(&B1);//upcasting base* <--dervied*
	B* P2;//Derived*<--base*
	P2=dynamic_cast<B*>(&A1);
	if(P1!=NULL){
		P1->assign(101,220);
		P1->display();

	}
	

    
}