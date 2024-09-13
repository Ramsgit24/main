#include<stdio.h>
int main()
{
	char a[]="siva";
	char *str=a;
	printf("%s\n",str);//siva
	printf("%s\n",str+1);//iva
	printf("%c \n",*str);//s
	*str='A';
	printf("%s\n",str);//aiva
	*(str+2)='m'; 
	printf("%s \n",str);//aima
	printf("%\n",*str+2);   

}