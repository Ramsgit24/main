#include<stdio.h>
#include<string.h>
void ur_strrev(char*);
void main()
{
	char a[]="jyo";
	ur_strrev(a);
	printf("%s\n",a);
}
void ur_strrev(char*A)
{
	int i=0,len=0,j,k;
	char*ptr=A;
	while(*ptr!='\0')
	{
		ptr++;
		len++;
		

	}
	i=0,j=len-1;
	while(i<j)
	{
		k=*(A+i);
		*(A+i)=*(A+j);
		*(A+j)=k;
		i++;
		j--;
	}
	/*while(i<j)
	{
		k=A[i];
		A[i]=A[j];
		A[j]=k;
		i++;
		j--;
	}*/
}
//void ur_strrev(char*r)
//{
//	int i,j,k;
//	j=strlen(r)-1;
//	for(i=0;i<j;i++,j--)
//	{
//		k=*(r+i);
//		*(r+i)=*(r+j);
//		*(r+j)=k;
//	}
//}
