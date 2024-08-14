/*using namespace std;
class A
{
public:
	int x;
	int y;

	A()
	{
		cout<<"A hello"<<endl;
		x=10;
		y=20;
	}
	void Adisp()
	{
		cout<<x<<" "<<y<<endl;
	}

};
class B:public A
{
public:
	int p;
	int q;
	

	B()
	{
		cout<<"B hello"<<endl;
		p=30;
		q=40;
	}
	void Bdisp()
	{
		cout<<p<<" "<<q<<endl;
	}
	void check()
	{
		x=33;
		y=44;
		p=55;
		q=66;
	}
};
class C:public B
{
public:
	int m;
	int n;
	

	C()
	{
		cout<<"C hello"<<endl;
		m=50;
		n=60;
	}
	void Cdisp()
	{
		cout<<m<<" "<<n<<endl;
	}
	void show()
	{
		x=111;
		y=222;
		p=333;
		q=444;
		m=555;
		n=666;
	}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;

	obj1.Adisp();
	obj2.check();
	obj3.show();
	obj1.Adisp();
	obj2.Bdisp();
	
	obj3.Cdisp();
	
	
}*/