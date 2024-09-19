////#include<stdio.h>
////void push(int);
////int pop();
////void disp();
////int top=-1;
////#define size 5
////int S[size];
////void push(int item)
////{
////	if(top!=size-1)
////	{
////		top++;
////		S[top]=item;
////	}
////	else
////	{
////		printf("stack is full\n");
////	}
////}
////int pop()
////{
////	int del=0;
////	if(top!=-1)
////	{
////		del=S[top];
////		top--;
////	}
////	else
////	{
////		printf("stack is empty\n");
////	}
////	return del;
////}
////void display()
////{
////	if(top!=-1)
////	{
////		int n;
////		printf("stack items are:\n");
////		for(n=top;n>=0;n--)
////		{
////			printf("%d\n",S[n]);
////
////		}
////	}
////	else
////	{
////		printf("stack is empty");
////	}
////}
////int main()
////{
////	int r;
////	push(10);
////	push(20);
////	push(30);
////	push(40);
////	push(50);
////	r=pop();
////	r=pop();
////	display();
////}
//#include<stdio.h>
//void push(int);
//int pop();
//void display();
//int top=-1;
//#define size 7
//int s[size];
//int main()
//{
//	int f;
//
//	push(10);
//	push(20);
//	push(30);
//	f=pop();
//	push(40);
//	push(50);
//	push(60);
//	push(70);
//	f=pop();
//	display();
//}
//void push(int item)
//{
//	if(top!=size-1)
//	{
//		top++;
//		s[top]=item;
//	}
//	else
//	{
//		printf("stack is full\n");
//	}
//}
//void display()
//{
//	if(top!=-1)
//	{
//		int i;
//		printf("stack elements are:\n");
//		for(i=top;i>=0;i--)
//		{
//			printf("%d\n",s[i]);
//		}
//		
//	}
//	else
//	{
//		printf("stack is empty\n");
//	}
//}
//int pop()
//{
//	int del;
//	if(top!=-1)
//	{
//		del=s[top];
//		top--;
//	}
//	return del;
//
//}
//
//#include<stdio.h>
//void insert(int);
//int del();
//void disp();
//#define size 5
//int r=-1;
//int f=0;
//int q[size];
//int main()
//{
//	int choise;
//	while(1)
//	{
//		printf("1.insert,2.del,3.disp,4.exit\n");
//		scanf("%d",&choise);
//		switch(choise)
//		{
//		case insert:
//			{
//				int item;
//				printf("enter the item\n");
//				scanf("%d",&item);
//				insert(item);
//			}
//			break;
//		case del:
//			{
//				int del=del();
//				printf("Deleted value:%d\n");
//			}
//			break;
//		case display:
//			{
//				disp();
//			}
//			break;
//		case exit:
//			{
//				exit(0);
//			}
//			break;
//		default:
//			{
//				printf("invalid choise\n");
//			}
//			break;
//		    }    
//	}
//	return 0;
//
//}
//
//void insert(int item)
//{
//	if(r!=size-1)
//	{
//		r++;
//		s[r]=item;
//	}
//	else
//	{
//		printf("que is full\n");
//	}
//}
//void disp()
//{
//	int i;
//	if(r!=-1)
//	{
//		printf("que items are:\n");
//		for(i=f;i<=r;i++)
//		{
//			printf("%d\n",q[i]);
//		}
//
//	}
//	else
//	{
//		printf("que is empty:");
//	}
//}
//
//
//
//
//	}
//}
//
//#include<stdio.h>
//void push(int);
//int pop();
//void disp();
//int top=-1;
//#define size 5
//int S[size];
//void push(int item)
//{
//	if(top!=size-1)
//	{
//		top++;
//		S[top]=item;
//	}
//	else
//	{
//		printf("stack is full\n");
//	}
//}
//int pop()
//{
//	int del=0;
//	if(top!=-1)
//	{
//		del=S[top];
//		top--;
//	}
//	else
//	{
//		printf("stack is empty\n");
//	}
//	return del;
//}
//void display()
//{
//	if(top!=-1)
//	{
//		int n;
//		printf("stack items are:\n");
//		for(n=top;n>=0;n--)
//		{
//			printf("%d\n",S[n]);
//
//		}
//	}
//	else
//	{
//		printf("stack is empty");
//	}
//}
//int main()
//{
//	int r;
//	push(10);
//	push(20);
//	r=pop();
//	push(30);
//	push(40);
//	push(50);
//
//	display();
//}

//#include<stdio.h>
//void push(int);
//int dell();
//void display();
//int r=-1;
//int f=0;
//#define size 5
//int q[size];
//int main()
//{
//	int p;
//	push(10);
//	push(20);
//	push(30);
//	push(40);
//	push(50);
//	p=dell();
//	
//
//	display();
//
//}
//void push(int item)
//{
//	if(r!=size-1)
//	{
//		r++;
//		q[r]=item;
//	}
//	else
//	{
//		printf("que is fill\n");
//	}
//
//}
//void display()
//{
//	int i;
//	if(r!=-1)
//	{
//		for(i=f;i<=r;i++)
//		{
//			printf("%d\n",q[i]);
//		}
//	}
//	else
//	{
//		printf("stack is emplty\n");
//	}
//}
//int dell()
//{
//	int del=0;
//	if(r!=-1)
//	{
//		del=q[f];
//		f++;
//
//	}
//	else
//	{
//		printf("que is empty:");
//	}
//	/*if(f>r)
//	{
//		f=0;
//		r=-1;
//	}*/
//	return del;
//}
//

//#include<stdio.h>
//#include<stdlib.h>
//enum QUE{INSERT=1,DEL,DISP,EXIT,INSERT_F};
//void Insert(int);
//void Insert_F(int);
//int Del();
//void disp();
//#define SIZE 5
//int r =-1;
//int f = 0;
//int Q[SIZE];
//int main()
//{
//	int choise;
//	while(1)
//	{
//		printf("1-Insert,2-Del,3-Disp,4-Exit,5-Insert_F\n");
//		scanf("%d",&choise);
//		switch(choise)
//		{
//		case INSERT:
//			{
//				int Item;
//				printf("Ener the Item\n");
//				scanf("%d",&Item);
//				Insert(Item);
//			}
//			break;
//			case INSERT_F:
//			{
//				int Item;
//				printf("Ener the Item\n");
//				scanf("%d",&Item);
//				Insert_F(Item);
//			}
//			break;
//		case DEL:
//			{
//				int del = Del();
//				printf("Deleted Value :%d\n",del);
//			}
//			break;
//		case DISP:
//			{
//				disp();
//			}
//			break;
//		case EXIT:
//			{
//				exit(0);
//			}
//			break;
//		default:
//			{
//				printf("Invalid Choise\n");
//			}
//			break;
//		}
//
//	}
//
//	return 0;
//}
//void Insert(int item)
//{
//	if(r != SIZE-1)
//	{
//		r++;
//		Q[r] = item;
//	}
//	else
//	{
//		printf("Que is full\n");
//	}
//}
//void Insert_F(int item)
//{
//	if(f != 0)
//	{
//		f--;
//		Q[f] = item;
//	}
//	else
//	{
//		printf("space is not avaliable at front end\n");
//	}
//}
//int Del()
//{
//	int del = 0;
//	if(r != -1)
//	{
//		del = Q[f];
//		f++;
//	}
//	else
//	{
//		printf("Que is Empty\n");
//	}
//	if(f>r)
//	{
//		r=-1;
//		f=0;
//	}
//	return del;
//}
//void disp()
//{
//	int i;
//	if(r != -1)
//	{
//		printf("Que Items are ::\n");
//		for(i=f;i<=r;i++)
//		{
//			printf("%d\n",Q[i]);
//		}
//	}
//	else
//	{
//		printf("Que is Empty\n");
//	}
//}

#include<stdio.h>
#include<stdlib.h>
enum que{INSERT=1,DELET,DISP,EXIT,INSERT_F};
void insert(int);
int delet();
void disp();
void insert_f(int);
int r=-1;
int f=0;
#define size 5
int q[size];
int main()
{
	int choise;
	while(1)
	{
		printf("1.insert,2.delet,3.display,4.exit,5.insert_f\n");
		scanf_s("%d",&choise);
		switch(choise)
		{
		case INSERT:
			{
				int item;
				printf("enter an item:\n");
				scanf_s("%d",&item);
				insert(item);
			}
			break;
		case INSERT_F:
			{
				int item;
				printf("enter an item:\n");
				scanf_s("%d",&item);
				insert_f(item);
			}
			break;

		case DELET:
			{
				int del=delet();
				printf("deleted values are %d\n",del);
			}
			break;
		case DISP:
			{
				disp();
			}
			break;
		case EXIT:
			{
				exit(0);
			}
			break;
		default:
			{
				printf("invalid out put:\n");
			}
			break;

		}


	}
	return 0;

}
void insert(int item)
{
	if(r!=size-1)
	{
		r++;
		q[r]=item;

	}
	else
	{
		printf("que is full\n");
	}
}
void insert_f(int item)
{
	if(f!=0)
	{
		f--;
		q[f]=item;

	}
	else
	{
		printf("que is emplt\n");
	}
}
int delet()
{
	int del=0;
	if(r!=-1)
	{
		del=q[f];
		f++;

	}
	else
	{
		printf("que is empty\n");
	}
	if(f>r)
	{
		f=0;
		r=-1;
	}
	return del;
}
void disp()
{
	int i;
	if(r!=-1)
	{

		for(i=f;i<=r;i++)
		{
			printf("%d\n",q[i]);
		}
	}
	else
	{
		printf("que is empty\n");
	}

}




