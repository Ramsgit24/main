#include<stdio.h>
int main()
{
//	int i,j;
//	int a[2][2]={{10,20},
//				{30,40}};
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("%d \n",a[i][j]);
//			printf("%d \n",&a[i][j]);
//			printf("%d \n",*(*(a+i)+j));
//		}
//		//printf("%d \n",(*(a+i)+j));
//		//printf(sizeof(a));
//	}
//}

	int i,j;
	char a[2][2]={{'A','B'},
	{'C','D'}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c \n",a[i][j]);
			printf("%d\n",&a[i][j]);
			//printf("%d\n",*(*(a+i)+j));
		}
	}
}



