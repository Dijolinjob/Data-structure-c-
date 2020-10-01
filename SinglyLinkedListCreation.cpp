#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	
}*head,*newnode,*temp;



int main()
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
   cout<<"\nDO YOU WANT TO CONTINUE (1/0)?";
   cin>>choice;
   
  }
  
    temp = head;
    cout<<"\nTHE ENTERED LINKED LIST IS : ";
    while(temp != 0)
    {
    	cout<<temp->data;
    	cout<<" ";
    	temp = temp->next;
	}
  
  
}
