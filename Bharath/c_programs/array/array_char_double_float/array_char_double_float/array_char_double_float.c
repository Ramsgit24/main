//#include<stdio.h>
//int main(){
//	int i;
//	char ch[5]={'a','w',' ','0','L'};
//	for( i=0;i<5;i++){
//		printf("%c ",ch[i]);
//	}
//}



//#include<stdio.h>
//int main(){
//	int i;
//	char ch[5]={'a','w'};
//	for( i=0;i<5;i++){
//		printf("%d ",ch[i]);//reamining unintializes become zero for ascii symbol of char is printed when we want to print character
//	}
//	printf("\n");
//	for( i=0;i<5;i++){
//		printf("%c ",ch[i]);//ascii zero code printed on console
//	}
//}



//#include<stdio.h>
//int main(){
//	char ch[5];
//	ch[1]='4';
//	ch[0]='g';
//	ch[2]=97;
//	ch[3]='v';
//	ch[4]='/';
//	//printf("%c %c %c %c %c\n",ch[0],ch[1],ch[2],ch[3],ch[4]);
//	printf("%c ",ch[0]);
//	printf("%c ",ch[1]);
//	printf("%c ",ch[2]);
//	printf("%c ",ch[3]);
//	printf("%c ",ch[4]);
//
//}

//#include<stdio.h>
//int main(){
//	char ch[5];
//	ch[1]='4';
//	ch[0]='g';
//	ch[2]=97;
//	//printf("%c %c %c %c %c\n",ch[0],ch[1],ch[2],ch[3],ch[4]);
//	printf("%c ",ch[0]);
//	printf("%c ",ch[1]);
//	printf("%c ",ch[2]);
//	printf("%c ",ch[3]);
//	printf("%c ",ch[4]);
//
//}

//#include<stdio.h>
//int main(){
//	int i;
//	char ch[5];
//	ch[1]='4';
//	ch[0]='g';
//	ch[2]=97;
//	ch[3]='v';
//	ch[4]='/';
//	//printf("%c %c %c %c %c\n",ch[0],ch[1],ch[2],ch[3],ch[4]);
//	printf("%c ",ch[0]);
//	printf("%c ",ch[1]);
//	printf("%c ",ch[2]);
//	printf("%c ",ch[3]);
//	printf("%c \n",ch[4]);
//	for(i=0;i<5;i++){
//		printf("ch[%d]=%d,address is %p\n",i,ch[i],&ch[i]);
//	}
//}

//#include<stdio.h>
//int main(){
//	int i;
//	char ch[5];
//	for(i=0;i<5;i++){
//		scanf(" %c",&ch[i]);
//	}
//	for(i=0;i<5;i++){
//		printf("ch[%d]=%c,address is %p\n",i,i[ch],&ch[i]);
//	}
//}


//pointer  &a[i]--> a+i  a[i]--> *(a+i)


//#include<stdio.h>
//int main(){
//	int i;
//	char ch[5];
//	//address is in decimal format
//	ch[0]='5';
//	ch[1]='\t';
//	ch[2]='+';
//	ch[3]='|';
//	ch[4]='\r';
//	for(i=0;i<5;i++){
//		printf("ch[%d]- %d - %d\n",i,*(ch+i),(ch+i));
//	}
//	printf("%d-%d\n",ch,ch+1);
//	printf("%d-%d\n",&ch,&ch+1);
//	printf("%d-%d\n",&ch[0],&ch[0]+1);
//	//address in the hexadecimal format
//	printf("%p-%p\n",ch,ch+1);
//	printf("%p-%p\n",&ch,&ch+1);
//	printf("%p-%p\n",&ch[0],&ch[0]+1);
//	/*for(i=0;i<5;i++){
//	scanf(" %c",&ch[i]);
//	}
//	for(i=0;i<5;i++){
//	printf("ch[%d]=%d,address is %p\n",i,ch[i],&ch[i]);
//	}*/
//}

#include<stdio.h>
int main(){
	int i,j;
	float flo[5];
	//float fl[5]={12.4f,43.5f,53.54f,65.32f};
	for(i=0;i<5;i++){
		scanf(" %f",&flo[i]);
	}
	for(j=0;j<5;j++){
		printf("flo[%d]-%f\n",j,flo[j]);	
	}
	/*for(i=0;i<5;i++){
		printf("fl[%d]-%f\n",i,fl[i]);	
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("fl[%d]-%f\n",i,*(fl+i));
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("fl[%d]-%d\n",i,fl+i);

	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("fl[%d]-%p\n",i,fl+i);
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("fl[%d]-%d\n",i,&fl[i]);
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("fl[%d]-%p\n",i,&fl[i]);
	}
	printf("\n\n");
	printf("%d-%d\n",fl,fl+1);
	printf("%d-%d\n",fl,&fl+1);
	printf("%d-%d\n",&fl[0],&fl[0]+1);*/
}



