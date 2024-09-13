//#include<iostream>
//#include<memory>
//using namespace std;
//int main()
//{
//	unique_ptr<int> u1(new int);
//	*u1=100;
//	cout<<*u1<<endl;
//	shared_ptr<int> s1(new int);
//	//unique_ptr<int> u2(u1);
//	shared_ptr<int> s2(s1);
//	shared_ptr<int> s3(s2);
//	//weak_ptr<int>s3(s2);
//	//weak_ptr<int>w2(new int);
//	weak_ptr<int> w3(s3);
//	*s3=800;
//	cout<<*s1<<endl;
//}











#include<iostream>
#include<memory>
using namespace std;
class A
{
    public:
    int x;
    int y;
    A()
    {
        x=10;
        y=20;
    }
    void assign(int a,int b)
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
	/*unique_ptr<int> u1(new int);
	*u1=100;
	cout<<*u1<<endl;
	shared_ptr<int> s1(new int);
	shared_ptr<int> s2(s1);
	shared_ptr<int> s3(s2);
	weak_ptr<int> w3(s3);
	*s3=800;
	cout<<*s1<<endl;
	*/
	unique_ptr<A> u1(new A);
	u1->x=100;
	u1->y=200;
	u1->assign(11,22);
	u1->display();
	shared_ptr<A> s1(new A);
	shared_ptr<A> s2(s1);
	s1->assign(44,55);
	s2->display();
}