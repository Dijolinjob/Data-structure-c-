#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*newnode,*temp;

void input()
{
	 newnode = new node;
	 cout<<"\n ENTER THE DATA TO BE ENTERED IN THE LINKED LIST : ";
	 cin>>newnode->data;
	 newnode->prev = 0;
	 newnode->next = 0;
}

void create()
{
	head = 0;
	int choice = 1;
	
	while(choice)
	{
	 input();
	
	 if(head == 0)
		{
			head = temp = newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
	 cout<<"\n DO YOU WANT TO CONTINUE [1/0] : ";
	 cin>>choice;
    }
    
}
void traversal()
{
	int count = 0;
	temp = head;
	while(temp!=0)
	{
		cout<<temp->data;
		cout<<" ";
		temp= temp->next;
		count++;
	}
}
void display()
{
	
	cout<<"\nTHE ENTERED LINKED LIST ARE : ";
	traversal();
}

void insertatbeg()
{
	input();
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
	display();
}

void insertatend()
{
	
}

void insert()
{
	int pos;
	int count;
	int i = 1;
	cout<<"\n\nENTER THE POSITION TO BE INSERTED : ";
	cin>>pos;
	if (pos < 1 || pos > count)
	{
		cout<<"INVALID POSITION";
	}
	else if(pos==1)
	{
		insertatbeg();
	}
	else
	{
		temp = head;
	newnode = new node;
	cout<<"\nENTER THE DATA TO BE INSERTED : ";
	cin>>newnode->data;
	while(i < pos-1)
	{
		temp = temp->next;
		i++;
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->next->prev=newnode;
	display();
	}
	
}



int main()
{
	create();
	display();
	insert();
}
