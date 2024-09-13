//ARRAYS WITH POINTERS.

//#include<stdio.h>
//int main()
//{
//	int i;
//	int a[5]={10,20,30,40,50};
//	int *ptr=a;
//	/*for(i=0;i<5;i++)
//	{
//		printf("%d\n",*ptr);
//		ptr++;
//
//	}*/
//  for(i=0;i<5;i++)
//  {
//	  printf("%d \n",*(ptr+i));
//  }
//}
//2. pointer with character 
//#include<stdio.h>
//int main()
//{
//	int i;
//	char a[12]="VADDE SIVA";
//	char *cptr=a;
//	for(i=0;i<12;i++)
//	{
//		printf("%c \n",*(cptr+i));
//	}
//}
//ARRAY OF POINTERS.
#include<stdio.h>
int main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int*ptr[5]={a,a+1,a+2,a+3,a+4};
	int **ptr[5]={a,a+1,a+2,a+3,a+4};
	for(i=0;i<5;i++)
	{
		/*printf("%d\n",ptr[i]);
		printf("%d \n",*ptr[i]);
		printf("%d\n",&ptr[i]);*/

		printf("%d\n",**(ptr+i);
		printf("%d\n",*(ptr+i));
	}
}



