#include<stdio.h>
void ur_strrev(char[]);
void main()
{
	char s[]="kamalakshi";
	ur_strrev(s);

}
void ur_strrev(char s[])
{
	int i,j,k;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		k=s[i];
		s[i]=s[j];
		s[j]=k;
	}
	printf("%s\n",s);
}