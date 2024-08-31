#include<stdio.h>
int main(){
	//char name1[]="Bharath Kumar";
	char name[20];
	char name1[20];
	char name2[20];
	gets(name);
	
	printf("%s\n",name);
	gets(name1);
	printf("%s\n",name1);
	scanf("%[^\n]s",name2);
	puts(name2);

	/*name[2]='r';	
	/*scanf("%s",&name);
	printf("%s\n",name);*/
	
	/*printf("%d ",&name[0]);
	printf("%d ",&name);
	printf("%s",name);*/


	return 0;
}