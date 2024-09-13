//#include<stdio.h>         //bit manipulation
//int main()
//{
//	int i;
//	int a[5]={10,20,30,40,50};
//	for(i=0;i<5;i++)
//	{
//		//printf("%d-%d\n",i,a[i]);    //  
//		//printf("%d-%d\n",i,*(a+i));   // value print   a[i]--> *(a+i)
//	    //  printf("a[%d]-%d\n",i,&a[i]); // &a[i]--> a+i
//		printf("%d-%d\n",i,a+i);
//	}
//	printf("%d-%d\n",a,a+1);
//	printf("%d-%d\n",&a,&a+1);
//}
  
//#include<stdio.h>
//int main()
//{
//	char i;
//	char a[5]={'A','B','C','D','E'};
//	for(i=0;i<5;i++)
//	{
//		//printf( "%d-%c\n",i,*(a+i));
//		printf("%d-%p\n",i,&a[i]);
//	
//	}
//	//printf("%d-%p\n",a,a+4);
//	printf("%d-%d\n",&a,&a+1);
//}


#include<stdio.h>
int main()
{
	int i;
	float b[5]={10.00f,20.01f,30.02f,40.03f,50.50f};
	for(i=0;i<5;i++)
	{
		//printf("%d-%f\n",i,*(b+i));
		printf("b[%d]-%p\n",i,&b[i]);
	}

}
	