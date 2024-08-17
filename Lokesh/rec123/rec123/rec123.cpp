// rec123.cpp : main project file.

#include "stdafx.h"

#include<stdio.h>
using namespace System;

void recursive(int);
int main()
{
	recursive(3);                     
}
void recursive(int x)
{
	if(x>0)
	{
		printf("Hello ::%d\n",x);
		x--;
		recursive(x);
		printf("Hello123 ::%d\n",x);
	}

}

