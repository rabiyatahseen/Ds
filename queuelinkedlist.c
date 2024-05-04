/*implementation of queue using linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void insert_rear(int);
void delete_front();
void display();
struct node*head=NULL;
int main()
{
	int item,choice;
	while(1)
	{
		printf("\nMENU\n");
		printf("1.insert rear\n");
		printf("2.delete front\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the element:");
			       scanf("%d",&item);
			       insert_rear(item);
			       break;
			case 2:delete_front();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			default:("\ninvalid choice \n");
		}
	}
}
void insert_rear(int item)
{
	struct node*temp,*cur=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	if(head==NULL)
		head=temp;
	else
	{
		while(cur->next!=NULL)
		{
			cur=cur->next;
		}
		cur->next=temp;
	}
	temp->next=NULL;
}
void delete_front()
{
	struct node*temp;
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		temp=head;
		head=head->next;
		printf("element deleted:%d\n",temp->data);
		free(temp);
	}
}
void display()
{
	struct node*temp=head;
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		printf("list content:\n");
		while(temp!=NULL)
		{
			printf("%4d",temp->data);
			temp=temp->next;
		}
	}
}
		
		
