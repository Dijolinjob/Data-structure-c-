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
	temp = head;
	while(temp!=0)
	{
		cout<<temp->data;
		cout<<" ";
		temp= temp->next;
	}
}
void display()
{
	
	cout<<"\nTHE ENTERED LINKED LIST ARE : ";
	traversal();
}

int main()
{
	create();
	display();
}
