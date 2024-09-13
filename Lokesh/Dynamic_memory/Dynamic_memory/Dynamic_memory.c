//#include<stdio.h>
//int main()
//{
//	int* ptr=(int*)malloc(sizeof(int));
//	char* dptr=(char*)malloc(sizeof(char));
//	*ptr=30;
//	printf("%d\n",*ptr);
//	free(ptr);
//	*dptr='s';
//	printf("%c\n",*dptr);
//	free(dptr);
//}



#include<iostream>
using namespace std;
int main()
{
	int* prt=(int*)malloc(sizeof(int));
	int* prt1=(int*)calloc(sizeof(int));
	int* prt2=(int*)realloc(prt,20);
	//int* prt2 = (int*)realloc(prt, 20 * sizeof(int));

	*prt=33;
	*prt1=44;
	*prt2=55;
	cout<<*prt<<" "<<*prt1<<" "<<*prt2<<endl;
	//free(prt);
    free(prt1);
	free(prt2);
}
