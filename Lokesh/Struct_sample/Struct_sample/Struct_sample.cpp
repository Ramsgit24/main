// Struct_sample.cpp : main project file.

#include "stdafx.h"
#include<stdio.h>
using namespace System;
struct emp
{
	int ID;
	char SEC;
	float SAL;
};
int main()
{
	struct emp X={112,'A',2000.33};
	X.ID=11;
	X.SAL=2222222.00;
	X.SEC='D';

    return 0;
}
