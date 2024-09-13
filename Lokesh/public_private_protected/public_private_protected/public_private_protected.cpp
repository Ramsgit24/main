
//class A    class B:public A
//#include<iostream>
//using namespace std;
//class A{
//	int a1;
//public:
//	int a2;
//protected:
//	int a3;
//public:
//	A();
//	void Agetter();
//	void Aupdate();
//};
//A::A(){
//	a1=23;
//	a2=34;
//	a3=45;
//}
//void A::Agetter(){
//	cout<<a1<<" "<<a2<<" "<<a3<<endl; 
//}
//void A::Aupdate(){
//	a1=1;
//	a2=12;
//	a3=123;
//	Agetter();
//}
//class B:public A{
//	int b1;
//public:
//	int b2;
//protected:
//	int b3;
//public:
//	B();
//	void Bgetter();
//	void Bupdate();
//};
//B::B(){
//	b1=123;
//	b2=234;
//	b3=345;
//}
//void B::Bgetter(){
//	cout<<b1<<" "<<b2<<" "<<b3<<endl;
//}
//void B::Bupdate(){
//	//a1=234;
//	a2=17;
//	a3=90;
//	cout<<a2<<" "<<a3<<endl;
//	Agetter();
//}
//int main(){
//	A A1;
//	B B1;
//	A1.Agetter();
//	B1.Bgetter();
//	A1.Aupdate();
//	B1.Bupdate();
//}


//class A class B: private A

//#include<iostream>
//using namespace std;
//class A{
//	int a1;
//public:
//	int a2;
//protected:
//	int a3;
//public:
//	A();
//	void Agetter();
//	void Aupdate();
//};
//A::A(){
//	a1=23;
//	a2=34;
//	a3=45;
//}
//void A::Agetter(){
//	cout<<a1<<" "<<a2<<" "<<a3<<endl; 
//}
//void A::Aupdate(){
//	a1=1;
//	a2=12;
//	a3=123;
//	Agetter();
//}
//class B:private A{
//	int b1;
//public:
//	int b2;
//protected:
//	int b3;
//public:
//	B();
//	void Bgetter();
//	void Bupdate();
//};
//B::B(){
//	b1=123;
//	b2=234;
//	b3=345;
//}
//void B::Bgetter(){
//	cout<<b1<<" "<<b2<<" "<<b3<<endl;
//}
//void B::Bupdate(){
//	//a1=234;
//	/*a2=17;
//	a3=90;
//	cout<<a2<<" "<<a3<<endl;*/
//	cout<<b2<<endl;
//	//Agetter();
//}
//int main(){
//	//A A1;
//	B B1;
//
//	B1.b2=65;
//
//	//B1.Bgetter();
//	B1.Bupdate();
//	
//}


#include<iostream>
using namespace std;
class A{
	int a1;
public:
	int a2;
protected:
	int a3;
public:
	A();
	void Aashok();
	void Alokesh();
};
A::A(){
	a1=23;
	a2=34;
	a3=45;
}
void A::Aashok(){
	cout<<a1<<" "<<a2<<" "<<a3<<endl; 
}
void A::Alokesh{
	a1=1;
	a2=12;
	a3=123;
	Aashok();
}
class B:protected A{
	int b1;
public:
	int b2;
protected:
	int b3;
public:
	B();
	void Bashok();
	void Blokesh();
};
B::B(){
	b1=123;
	b2=234;
	b3=345;
}
void B::Bashok(){
	cout<<b1<<" "<<b2<<" "<<b3<<endl;
}
void B::Blokesh(){
	//a1=234;
	/*a2=17;
	a3=90;
	cout<<a2<<" "<<a3<<endl;*/
	cout<<b2<<endl;
	//Agetter();
}
int main(){
	//A A1;
	B B1;

	B1.b2=65;

	//B1.Bgetter();
	B1.Blokesh();
	
}

