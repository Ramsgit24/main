#include<stdio.h>
int main()
{
	char c;
	printf("enter the character\n");
	scanf(" %c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("%c the charcter is vowel\n",c);
	}else
	{
		printf("%c the character is cansonant\n");
	}
}
	
