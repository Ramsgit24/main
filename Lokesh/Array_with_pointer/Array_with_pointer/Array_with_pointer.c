#include<stdio.h>
int main()
{
	int l;
	int a[5]={10,20,30,40,50};
	int*ptr=a;
	for(l=0;l<5;l++)
	{
		printf("%d\n",*ptr);
        ptr++;	
		printf("%d data \n",*ptr+1);
	}

}