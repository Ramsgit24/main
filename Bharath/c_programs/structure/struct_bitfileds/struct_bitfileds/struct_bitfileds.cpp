// struct_bitfileds.cpp : main project file.

#include "stdafx.h"
#include<stdio.h>
using namespace System;

struct emp
{
	int id; /*1-127*/
	int no; /*1-15*/
};
struct emp_bit
{
	int id:8; /*1-127*/ /* - 32 - 8 - 24*/
	int no1:5; /*1-15*/ /*- 24 - 5 - 19 */
	int no2:10; /*1-15*/ /*-19 -10 -9*/
	int no3:12; /*1-15*/  /*32 -12 -20*/
};
struct emp fun(struct emp);
int main()
{
	struct emp X1;
	struct emp X = {54,6};
	struct emp_bit E = {255,20};


	printf("%d\n",sizeof(X));
	printf("%d\n",sizeof(E));
	X1 = fun(X);
   
    return 0;
}
struct emp fun(struct emp B)
{
	struct emp X2 = {100,126};
	printf("%d %d \n",B.id,B.no);

	return X2;
}