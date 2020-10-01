#include<iostream>
using namespace std;
int count = 0;
struct node
{
	int data;
	node *next;
	
}*head,*newnode,*temp;

void insert()
{
	int pos,i=1;
	newnode = new node;
	cout<<"\n\nENTER THE POSITION TO BE INSERTED : ";
	cin>>pos;
	if(pos > count)
	{
		cout<<"\nINVALID POSITION";
	}
	else
	{
		temp = head;
		while(i<pos)
		{
			temp = temp->next;
			i++;
		}
		cout<<"\nENTER THE DATA TO  BE INSERTED : ";
		cin>>newnode->data;
		newnode->next = temp->next;
		temp->next = newnode;
	}
	temp = head;
	cout<<"\nTHE LINKED LIST AFTER INSERTION AT POSITION "<<pos<<" IS :";
	while(temp != 0)
	{
		cout<<" "<<temp->data;
		temp=temp->next;
	}
	
}

void create()
{
  head = 0;
  
  int choice = 1;
  while(choice)
  {
  
   newnode = new node;
   cout<<"\nENTER THE DATA : ";
   cin>>newnode->data;
   newnode->next = 0;
   if(head == 0)
   {
    head = temp = newnode;
   }
   else
   {
  	temp->next = newnode;
  	temp = newnode;
   }
   cout<<"\nDO YOU WANT TO CONTINUE (1/0)? ";
   cin>>choice;
   
  }
  
    temp = head;
    cout<<"\nTHE CREATED LINKED LIST :";            
    while(temp != 0)
    {
    	cout<<" "<<temp->data;
    	temp = temp->next;
    	count++;
	}
	
  
  
}
int main()
{
	create();
	insert();
}
