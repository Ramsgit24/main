/*#include<iostream>  /// multi level inheritance programmmmm....
using namespace std;
class A
{
public:
	int x;
	int y;
	A()
	{
		cout<<"A const"<<endl;
		x=20;
		y=30;

	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A{
	public:
		int p;
		int q;
		B()
		{
			cout<<"B constr"<<endl;
			p=40;
			q=50;
		}
		void Bdisplay()
		{
			cout<<p<<" "<<q<<endl;
		}
		void check()
		{
			x=35;
			y=45;
			p=22;
			q=12;
		}
	};
	class C:public B
	{
	public:
		int m;
		int n;
		C()
		{
			cout<<"C const"<<endl;
			m=21;
			n=31;
		}
		void Cdisplay()
		{
			cout<<m<<" "<<n<<endl;
		}
		void show()
		{
			x=11;
			y=12;
			p=13;
			q=14;
			m=15;
			n=16;
		}
	};
	int main()
	{
		A obj1;
		B obj2;
		C obj3;
		obj1.Adisplay();
		obj2.check();
		obj3.show();
		obj2.Bdisplay();
		obj3.Cdisplay();
	}*/
                              //multiple inheritance
/*#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	A()
	{
		cout<<"A constr"<<endl;
		x=20;
		y=10;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B
{
public:
	int p;
	int q;
	B()
	{
		cout<<" B constr"<<endl;
		p=22;
		q=33;
	}
	void Bdisplay()
	{
		cout<<p<<" "<<q<<endl;
	}
};
class C:public A,public B
{
public:
	int m;
	int n;
	C()
	{
		cout<<"C constr"<<endl;
		m=33;
	    n=55;	
	}
	void Cdisplay()
	{
		cout<<m<<" "<<n<<endl;
	}
	void check()
	{
		x=55;
		y=56;
		p=57;
		q=58;
		m=59;
		n=60;
	}
};
int main()
{
	A L;
	B O;
	C K;
	L.Adisplay();
	O.Bdisplay();
	K.Adisplay();
	K.Bdisplay();
	K.Cdisplay();
	K.check();
	K.Adisplay();
	K.Bdisplay();
	K.Cdisplay();
}*/
                           ///hybrid inheritance
/*#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	A()
	{
		cout<<" A constr"<<endl;
		x=11;
		y=12;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B
{
public:
	int p;
	int q;
	B()
	{
		cout<<" B constr"<<endl;
		p=22;
		q=33;
	}
	void Bdisplay()
	{
		cout<<p<<" "<<q<<endl;
	}
};
class C:public A,public B
{
public:
	int m;
	int n;
	C()
	{
		cout<<"C constr"<<endl;
		m=33;
	    n=55;	
	}
	void Cdisplay()
	{
		cout<<m<<" "<<n<<endl;
	}
	void check()
	{
		x=55;
		y=56;
		p=57;
		q=58;
		m=59;
		n=60;
	}
};
class D:public C
{
public:
	int f;
	int u;
	D()
	{
		cout<<"D constrctor"<<endl;
		f=112;
		u=113;
	}
	void Ddisplay()
	{
		cout<<f<<" "<<u<<endl;
	}
	void show()
	{
        x=65;
		y=66;
		p=67;
		q=68;
		m=69;
		n=70;
		f=71;
		u=72;
	}
};
class E
{
public:
	int b;
	int h;
	E()
	{
		cout<<"E constr"<<endl;
		b=73;
		h=74;
	}
	void Edisplay()
	{
		cout<<b<<" "<<h<<endl;
	}
};
class F:public D,public E
{
public:
	int s;
	int i;
	F()
	{
		cout<<"F constrctor"<<endl;
		s=222;
		i=333;
	}
	void Fdisplay()
	{
		cout<<s<<" "<<i<<endl;
	}
	void bharath()
	{
        x=85;
		y=86;
		p=87;
		q=88;
		m=89;
		n=90;
		f=91;
		u=92;
		s=93;
		i=94;
		b=95;
		h=96;
	}
};
int main()
{
	A obj1;
	B obj2;
	C obj3;
	D obj4;
	E obj5;
	F obj6;

}*/
/*#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	A()
	{
		cout<<"A constructor"<<endl;
		x=1;
		y=2;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
{

	public:
	int a;
	int b;
	B()
	{
		cout<<"B constructor"<<endl;
		a=1;
		b=2;
	}
	void Bdisplay()
	{
		cout<<a<<" "<<b<<endl;
	}
};
class D:public A
{
public:
	int c;
	int d;
	D()
	{
		cout<<"c constructor"<<endl;
		c=3;
		d=4;
	}
	void Ddisplay()
	{
		cout<<c<<" "<<d<<endl;
	}
};
class C:public B,public D
{
public:
	int e;
	int f;
	C()
	{
		cout<<"e constrctor"<<endl;
		e=5;
		f=6;
	}
	void Cdisplay()
	{
		cout<<e<<" "<<f<<endl;
	}
};
class E:public D
{
public:
	int g;
	int h;
	E()
	{
		cout<<"E constructor"<<endl;
		g=7;
		h=8;
	}
	void Edisplay()
	{
		cout<<g<<" "<<h<<endl;
	}
};
class F:public C,public E
{
public:
	int i;
	int j;
	F()
	{
		cout<<"F constructor"<<endl;
		i=9;
		j=10;
	}
	void Fdisplay()
	{
		cout<<i<<" "<<j<<endl;
	}
};
int main()
{
	A a1;
	B b1;
	C c1;
	D d1;
	E e1;
	F f1;
}*/
#include<iostream>
using namespace std;
class A
{
public:
	int x;
	int y;
	A()
	{
	   
		cout<<"A constructor"<<endl;
		x=1;
		y=2;
	}
	void Adisplay()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class D:public A
{

	public:
	int a;
	int b;
	D()
	{
		cout<<"D constructor"<<endl;
		a=1;
		b=2;
	}
	void Ddisplay()
	{
		cout<<a<<" "<<b<<endl;
	}
};
class B:public A
{
public:
	int c;
	int d;
	B()
	{
		cout<<"B constructor"<<endl;
		c=3;
		d=4;
	}
	void Bdisplay()
	{
		cout<<c<<" "<<d<<endl;
	}
};
class C:public B,public D
{
public:
	int e;
	int f;
	C()
	{
		cout<<"C constrctor"<<endl;
		e=5;
		f=6;
	}
	void Cdisplay()
	{
		cout<<e<<" "<<f<<endl;
	}
};
class E:public D
{
public:
	int g;
	int h;
	E()
	{
		cout<<"E constructor"<<endl;
		g=7;
		h=8;
	}
	void Edisplay()
	{
		cout<<g<<" "<<h<<endl;
	}
};
class F:public C,public E
{
public:
	int i;
	int j;
	F()
	{
		cout<<"F constructor"<<endl;
		i=9;
		j=10;
	}
	void Fdisplay()
	{
		cout<<i<<" "<<j<<endl;
	}
};
int main()
{
	F f1;
	
}

