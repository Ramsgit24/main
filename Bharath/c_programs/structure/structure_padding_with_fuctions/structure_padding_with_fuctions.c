/*
#include<stdio.h>
struct e{
	int a;
	char v;
	int r;
	float o;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);//16 bytes	
}
*/

//without padding
/*
#include<stdio.h>
struct e{
	int a;
	char v;
	int r;
	float o;
	double d;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);//withoutpadding 24 bytes	
}
*/


//technique 1 for padding for less wastage of bytes sorting the data members by size low to high(asscending order)
/*
#include<stdio.h>
struct e{
	char v;
	short int y;
	int a;
	int r;
	float o;
	//double d;
	//long long int t;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);	
}
*/

//technique 1
/*
#include<stdio.h>
struct e{
	char v;
	short int y;
	int a;
	int r;
	float o;
	double d;
	long long int t;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);	
}
*/

//individual datatype checking 
/*
#include<stdio.h>
struct A{
	char c;
};
struct B{
	short int x;
};
struct C{
	int a;
};
struct D{
	float b;
};
struct E{
	double i;
};
struct F{
	long long int j;
};
struct G{
	long double k;
};
int main(){
	int a,b,c,d,e,f,g;
	struct A q;
	struct B r;
	struct C s;
	struct D t;
	struct E u;
	struct F v;
	struct G w;
	a=sizeof(q);//1 byte--char
	b=sizeof(r);//2 byte--short int
	c=sizeof(s);//4 byte--int
	d=sizeof(t);//4 byte--float
	e=sizeof(u);//8 byte--double
	f=sizeof(v);//8 byte--long long int
	g=sizeof(w);//8byte --long double
}
*/


//second technique for padding it is using pragma pack
/*without proper alignment of data members i.e.,
sorting of data members from high to low (descending) or low to high(ascending)*/
/*
#include<stdio.h>
#pragma pack(1);
struct e{
	int a;
	char v;
	int r;
	float o;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);//13 bytes	
}
*/


/*without proper alignment of data members double (8bytes)i.e.,
sorting of data members from high to low (descending) or low to high(ascending)*/
/*
#include<stdio.h>
#pragma pack(1);
struct e{
	int a;
	char v;
	int r;
	float o;
	double d;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);//21 bytes pack(1) //withoutpadding 24 bytes	
}
*/

//using alignment ascending order of size of data members(max 4bytes ie int float
//pragma pack(1) gives no padding and it gives zero wastage of bytes
/*
#include<stdio.h>
#pragma pack(1)
struct e{
	char v;
	short int y;
	int a;
	int r;
	float o;
	//double d;
	//long long int t;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);//15 bytes
}
*/

//using alignment ascending order of size of data members(max 8bytes ie double long long int
/*
#include<stdio.h>
#pragma pack(1)
struct e{
	char v;
	short int y;
	int a;
	int r;
	float o;
	double d;
	long long int t;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);//31	//32
}
*/

/*individual data type put in struct there is no difference in the praga pack(1) 
there is no padding in both scenarios*/
/*
#include<stdio.h>
#pragma pack(1)
struct A{
	char c;
};
struct B{
	short int x;
};
struct C{
	int a;
};
struct D{
	float b;
};
struct E{
	double i;
};
struct F{
	long long int j;
};
struct G{
	long double k;
};
int main(){
	int a,b,c,d,e,f,g;
	struct A q;
	struct B r;
	struct C s;
	struct D t;
	struct E u;
	struct F v;
	struct G w;
	a=sizeof(q);//1 byte--char
	b=sizeof(r);//2 byte--short int
	c=sizeof(s);//4 byte--int
	d=sizeof(t);//4 byte--float
	e=sizeof(u);//8 byte--double
	f=sizeof(v);//8 byte--long long int
	g=sizeof(w);//8byte --long double
}
*/
//pack2
/*
#include<stdio.h>
#pragma pack(2)
struct A{
	char c;
};
struct B{
	short int x;
};
struct C{
	int a;
};
struct D{
	float b;
};
struct E{
	double i;
};
struct F{
	long long int j;
};
struct G{
	long double k;
};
int main(){
	int a,b,c,d,e,f,g;
	struct A q;
	struct B r;
	struct C s;
	struct D t;
	struct E u;
	struct F v;
	struct G w;
	a=sizeof(q);//1 byte--char
	b=sizeof(r);//2 byte--short int
	c=sizeof(s);//4 byte--int
	d=sizeof(t);//4 byte--float
	e=sizeof(u);//8 byte--double
	f=sizeof(v);//8 byte--long long int
	g=sizeof(w);//8byte --long double
}
*/


//pragma pack 3
/*
#include<stdio.h>
#pragma pack(3)
struct A{
	char b;
	int a;
};
int main(){
	int s;
	struct A q;
	s=sizeof(q);//8 bytes it gives multiple of 4
	
}
*/

#include<stdio.h>
#pragma pack(8)//pragma pack size must be 1 2 4 8 i.e power of 2
struct e{
	int a;
	char v;
	int r;
	float o;
};
int main(){
	int a;
	struct e E;
	a=sizeof(E);	
}


