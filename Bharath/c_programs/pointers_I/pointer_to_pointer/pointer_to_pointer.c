#include<stdio.h>
int main(){
	int x=12;
	int* a=&x;
	int ** b=&a;
	int ***c=&b;
	int ****d=&c;
	int *****e=&d;
	int ******f=&e;

	printf("single pointer:\n");

	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%d\n",*a);

	printf("double pointer:\n");

	printf("%p\n",b);
	printf("%p\n",&b);
	printf("%p\n",*b);
	printf("%d\n",**b);

	printf("triple pointer:\n");

	printf("%p\n",c);
	printf("%p\n",&c);
	printf("%p\n",*c);
	printf("%p\n",**c);
	printf("%d\n",***c);

	printf("quad pointer:\n");

	printf("%p\n",d);
	printf("%p\n",&d);
	printf("%p\n",*d);
	printf("%p\n",**d);
	printf("%p\n",***d);
	printf("%d\n",****d);

	printf("penta pointer:\n");

	printf("%p\n",e);
	printf("%p\n",&e);
	printf("%p\n",*e);
	printf("%p\n",**e);
	printf("%p\n",***e);
	printf("%p\n",****e);
	printf("%d\n",*****e);


	printf("six-- pointer:\n");

	printf("%p\n",f);
	printf("%p\n",&f);
	printf("%p\n",*f);
	printf("%p\n",**f);
	printf("%p\n",***f);
	printf("%p\n",****f);
	printf("%p\n",*****f);
	printf("%d\n",******f);


	


}