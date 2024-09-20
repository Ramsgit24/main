//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node* link;
//};
//int insert(int);
//void dell();
//void display();
//struct node* head=NULL;
//int main()
//{
//	int i;
//	i=insert(10);
//	printf("%d\n",i);
//	
//
//
//}
//int insert(int item)
//{
//	struct node* temp=(struct node*)malloc(sizeof(struct node));
//	if(temp!=NULL)
//	{
//		temp->data=item;
//		temp->link=head;
//		head=temp;
//		return temp->data;
//
//	}
//	else
//	{
//		printf("invalid:\n");
//	}
//}
//
//
//
//	
//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node* link;
//
//};
//int insert(int);
//void dell();
//void display();
//struct node* head=NULL;
//int main()
//{
//	int i;
//	i=insert(20);
//	printf("%d",i);
//
//
//}
//int insert(int item)
//{
//	struct node* temp=(struct node*)malloc(sizeof(struct node));
//	if(temp!=NULL)
//	{
//	temp->data=item;
//	temp->link=head;
//	head=temp;
//	return temp->data;
//	}
//
//}
#include<stdio.h>
#include<stdlib.h>
void insert(int);
void delet();
void disp();
struct node 
{
	int data;
	struct node* link;

};
struct node* head=NULL;
int main()
{
	/*insert(10);
	insert(20);
	insert(30);
	disp();*/
	while(1)
	{
		int choise;
		printf("1.insert,2.delete,3.display,4.exit\n");
		scanf("%d",&choise);
		switch(choise)
		{
		case 1:
			{
				int item;
				printf("enter an item:\n");
				scanf("%d",&item);
				insert(item);
			}
			break;
		case 2:
			{
				delet();
			}
			break;
		case 3:
			{
				disp();

			}
			break;
		case 4:
			{
				exit(0);
			}
		default:
			{
				printf("invalid value:!\n");
			}
		}

	}

}
void insert(int item)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(temp!=NULL)
	{
		temp->data=item;
		temp->link=head;
		head=temp;
	}

}
void delet()
{
	struct node*ptr=head;
	if(ptr!=NULL)
	{
		head=ptr->link;
		free(ptr);
		ptr=NULL;

	}
}
void disp()
{
	struct node* ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}