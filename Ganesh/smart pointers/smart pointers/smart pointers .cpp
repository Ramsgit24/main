#include<iostream>
#include<memory>
using namespace std;
int main()
{
	
	unique_ptr<int> u1(new int);
    *u1=100;
	cout<<*u1<<endl;
	shared_ptr<int> s1(new int);
//	unique_ptr<int> u2(u1);
*s1=200;
cout<<s1<<endl;
shared_ptr<int> s2(s1);
*s2=300;
cout<<*s2<<endl;
//both s1 and s2 getting same memory location
shared_ptr<int> s3(s2);
//weak_ptr<int> w1(u1);
//weak_ptr<int> w1(new int);
weak_ptr<int> w1(s1);
*s1=500;
cout<<*s1<<endl;
}







#include<iostream>
#include<memory>
using namespace std;
int main()
{
unique_ptr<int> u1(new int);
*u1=100;
cout<<*u1<<endl;
shared_ptr<int> s1(new int);
//unique_ptr<int> u2(u1);
shared_ptr<int> s2(s1);
shared_ptr<int> s3(s2);
//weak_ptr<int> w1(u1);
//weak_ptr<int> w2(new int);
weak_ptr<int> w3(s3);
*s3=500;
//cout<<w3<<endl;
cout<<s1<<endl;
}

