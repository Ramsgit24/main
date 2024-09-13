//#include<iostream>
//using namespace std;
//
//class A
//{
//	int *ptr1;
//	int x;
//	int *ptr2;
//public:
//	A()
//	{
//		ptr1=&x;
//		x=100;
//		ptr2=(int*)malloc(sizeof(int));
//	}
//	void assign(int a)
//	{
//		ptr1=a+100;
//		ptr2=a+200;
//		x=a+300;
//	}
//	void display()
//	{
//		cout<<x<<" "<<*ptr1<<" "<<*ptr2<<endl;
//		//cout<<x<<endl;
//	}
//	~A()
//	{
//		free(ptr2);
//		cout<<"A destructor"<<endl;
//	}
//};
//int main()
//{
//	A obj;
//	obj.assign(11);
//	obj.display();
//
//	/*A *pobj1=(A*)malloc(sizeof(A));
//	pobj1->assign(11);
//	pobj1->display();	*/
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//	//int *ptr1;
//	int x;
//	//int *ptr2;
//public:
//	A()
//	{
//		//ptr1=&x;
//		x=100;
//		//ptr2=(int*)malloc(sizeof(int));
//	}
//	void assign(int a)
//	{
//		//ptr1=a+100;
//		//ptr2=a+200;
//		x=a+300;
//	}
//	void display()
//	{
//		//cout<<x<<" "<<*ptr1<<" "<<*ptr2<<endl;
//		cout<<x<<endl;
//	}
//	~A()
//	{
//		//free(ptr2);
//		cout<<"A destructor"<<endl;
//	}
//};
//int main()
//{
//	/*A obj;
//	obj.assign(11);
//	obj.display();*/
//
//	/*A *pobj1=(A*)malloc(sizeof(A));
//	pobj1->assign(11);
//	pobj1->display();	*/
//
//
//	int *ptr=new int;
//	*ptr=200;
//	cout<<*ptr<<endl;
//	delete ptr;
//}
/*#include<iostream>
using namespace std;

class A
{
public:
	int *ptr1;
	int B;
	A()
	{
		B=100;
		ptr1=&B;
	}
	void assign(int c)
	{
		*ptr1=B+200;
		B=c;
	}
	void display()
	{
		cout<<B<<" "<<ptr1<<endl;
	}
};
int main()
{
	A obj;
	obj.assign(11);
	obj.display();

	int *ptr=new int;
	*ptr=200;
	cout<<*ptr<<endl;
	delete ptr;
}*/


#include<iostream>
using namespace std;

class A
{
	int x;
	int y;
	int *ptr;
public:
	A()
	{
		x = 10;
		y = 20;
		ptr = &x; 
	}
	~A()
	{
		free(ptr);
		cout<<"A destructor"<<endl;
	}
	void assign(int a,int b)
	{
		x = a;
		y = b;
		*ptr = 99;
	}
	void display()
	{
		cout<<x<<y<<*ptr<<endl;
	}
	
};
int main()
{
	
	A obj1;
	A* ptr = new A;
	ptr->assign(11,22);
	ptr->display();
}