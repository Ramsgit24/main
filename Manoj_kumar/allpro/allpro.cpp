//single inheritance
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int x;
//	int y;
//	A()
//	{
//		cout<<"a con"<<endl;
//		x=10;
//		y=20;
//	}
//	void adisplay()
//	{
//		cout<<x<<y<<endl;
//	}
//};
//class B:public A
//{
//public:
//	int p;
//	int q;
//	B()
//	{
//		cout<<"b con"<<endl;
//		p=20;
//		q=30;
//	}
//	void bdisplay()
//	{
//		cout<<p<<q<<endl;
//	}
//	void update();
//};
//void B::update()
//{
//	x=11;
//	y=12;
//	p=21;
//	q=31;
//}
//int main()
//{
//	A obj;
//	B obj1;
//
//	obj.adisplay();
//	obj1.bdisplay();
//	obj1.update();
//	obj1.adisplay();//11 22
//	obj1.bdisplay();//21 31
//}

//multi level inheritance
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int x;
//	int y;
//	A()
//	{
//		cout<<"a con"<<endl;
//		x=10;
//		y=20;
//	}
//	void adisplay()
//	{
//		cout<<x<<y<<endl;
//	}
//};
//class B:public A
//{
//public:
//	int p;
//	int q;
//	B()
//	{
//		cout<<"b con"<<endl;
//		p=20;
//		q=30;
//	}
//	void bdisplay()
//	{
//		cout<<p<<q<<endl;
//	}
//	void update();
//};
//void B::update()
//{
//	x=11;
//	y=12;
//	p=21;
//	q=31;
//}
//class C:public B
//{
//public:
//	int c1;
//	int c2;
//	C()
//	{
//		cout<<" con"<<endl;
//		c1=111;
//		c2=222;
//	}
//	void cdisplay()
//	{
//		cout<<c1<<c2<<endl;
//	}
//	void update1();
//};
//void C::update1()
//{
//	x=11;
//	y=12;
//	p=22;
//	q=32;
//	c1=41;
//	c2=51;
//}
//
//int main()
//{
//	A obj;
//	B obj1;
//	C obj2;
//
//	obj.adisplay();
//	obj1.bdisplay();
//	obj1.update();
//	obj1.adisplay();//11 22
//	obj1.bdisplay();//21 31
//	obj2.cdisplay();
//	obj2.update1();
//	obj2.cdisplay();//41 51
//	obj2.bdisplay();//22 32
//	obj1.adisplay();//11 12
//}

//multiple inheritance
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int x;
//	int y;
//	A()
//	{
//		cout<<"a con"<<endl;
//		x=10;
//		y=20;
//	}
//	void adisplay()
//	{
//		cout<<x<<y<<endl;
//	}
//};
//class B
//{
//public:
//	int p;
//	int q;
//	B()
//	{
//		cout<<"b con"<<endl;
//		p=20;
//		q=30;
//	}
//	void bdisplay()
//	{
//		cout<<p<<q<<endl;
//	}
//};
//class C:public A,public B
//{
//public:
//	int c1;
//	int c2;
//	C()
//	{
//		cout<<" con"<<endl;
//		c1=111;
//		c2=222;
//	}
//	void cdisplay()
//	{
//		cout<<c1<<c2<<endl;
//	}
//	void update1();
//};
//void C::update1()
//{
//	x=11;
//	y=12;
//	p=22;
//	q=32;
//	c1=41;
//	c2=51;
//}
//
//int main()
//{
//	A obj;
//	B obj1;
//	C obj2;
//
//	obj.adisplay();
//	obj1.bdisplay();//11 22
//	obj1.bdisplay();//21 31
//	obj2.cdisplay();
//	obj2.update1();
//	obj2.cdisplay();//41 51
//	obj2.bdisplay();//22 32
//	obj2.adisplay();//11 12
//}
//hybrid inheritance
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int x;
//	int y;
//	A()
//	{
//		cout<<"a con"<<endl;
//		x=10;
//		y=20;
//	}
//	void adisplay()
//	{
//		cout<<x<<y<<endl;
//	}
//};
//class B
//{
//public:
//	int p;
//	int q;
//	B()
//	{
//		cout<<"b con"<<endl;
//		p=20;
//		q=30;
//	}
//	void bdisplay()
//	{
//		cout<<p<<q<<endl;
//	}
//};
//class C:public A,public B
//{
//public:
//	int c1;
//	int c2;
//	C()
//	{
//		cout<<" con"<<endl;
//		c1=111;
//		c2=222;
//	}
//	void cdisplay()
//	{
//		cout<<c1<<c2<<endl;
//	}
//	void update1()
//	{
//		x=11;
//		y=12;
//		p=22;
//		q=32;
//		c1=41;
//		c2=51; 
//	}
//};
//class D:public C
//{
//public:
//	int d1;
//	int d2;
//	D()
//	{
//		cout<<"d con"<<endl;
//		d1=20;
//		d2=30;
//	}
//	void ddisplay()
//	{
//		cout<<d1<<d2<<endl;
//	}
//	void updated()
//	{
//		d1=1997;
//		d2=1998;
//	}
//};
//class E
//{
//public:
//	int e1;
//	int e2;
//	E()
//	{
//		cout<<"e con"<<endl;
//		e1=20;
//		e2=30;
//	}
//	void edisplay()
//	{
//		cout<<e1<<e2<<endl;
//	}
//};
//class F :public D,public E
//{
//public:
//	int f1;
//	int f2;
//	F()
//	{
//		cout<<"f con"<<endl;
//		f1=20;
//		f2=30;
//	}
//	void fdisplay()
//	{
//		cout<<f1<<f2<<endl;
//	}
//
//	void updatef()
//	{
//		x=1991;
//		y=1992;
//		f1=32;
//		f2=33;
//	}
//};
//int main()
//{
//	A obj;
//	B obj1;
//	C obj2;
//	D obj3;
//	E obj4;
//	F obj5;
//
//	obj.adisplay();
//	obj1.bdisplay();//11 22
//	obj1.bdisplay();//21 31
//	obj2.cdisplay();
//	obj2.update1();
//	obj2.cdisplay();//41 51
//	obj2.bdisplay();//22 32
//	obj2.adisplay();//11 12
//	obj5.updatef();
//	obj5.adisplay();
//	obj5.fdisplay();
//}

//function overloading with class
//#include<iostream>
//using namespace std;
//class A
//{
//    public:
//int add(int a,int b)
//{
//    int c;
//    c=a+b;
//    return c;
//}
//float add(float a,float b)
//{
//    float c;
//    c=a+b;
//    return c;
//}
//int add(int a)
//{
//    int c;
//    c=a+10;
//    return c;
//}
//};
//
//int main()
//{
//    A obj;
//    int a=obj.add(10,20);
//    float b=obj.add(35.66f,23.56f);
//    int c=obj.add(33);
//    cout<<a<<" "<<b<<" "<<c<<endl;
//}

////function overloading without class
//#include<iostream>
//using namespace std;
//
//int add(int a,int b)
//{
//    int c;
//    c=a+b;
//    return c;
//}
//float add(float a,float b)
//{
//    float c;
//    c=a+b;
//    return c;
//}
//int add(int a)
//{
//    int c;
//    c=a+10;
//    return c;
//}
//
//int main()
//{
//
//    int a=add(10,20);
//    float b=add(35.66f,23.56f);
//    int c=add(33);
//    cout<<a<<" "<<b<<" "<<c<<endl;
//}

//constructor overloading with class
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
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<y<<endl;
    }
};

int main()
{
    A obj;
    A obj2(11,22);
    
    obj.display();
    obj2.display();
}
