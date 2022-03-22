#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//Queue
struct node
{
	int data;
	node *nxt_node;
	
};
node *front=NULL,*rear=NULL;

void disq()
{
	
	if(front==NULL)
		cout<<"\nQ is empty dude\n";
	
	else
	{
		
		int sno=1;
		node *p=front;
		do
		{
					
			cout<<endl<<sno<<" : "<<p->data;
			
			p = p->nxt_node;
			sno++;
		}while(p!=front);
		
	}
	
	
}
void enq(int data)
{
	
	if(front==NULL)
		{
			//first insert
			node *temp;
			
			temp = (node*)calloc(1,sizeof(node));
			
			temp->data = data;
			
			front = temp;
		
			rear = temp;	
			
			temp->nxt_node = front;
			
			cout<<"\nInsert SUCCESS - "<<front<<endl;
			

				
			disq();				
			
		}
	else
	{
		if(rear->nxt_node == front)
			{
			node *temp;
			temp = (node*)calloc(1,sizeof(node));
			

			temp->data =  data;
			temp->nxt_node = front;
			
			rear->nxt_node = temp;
			rear = temp;
			
				
			
			cout<<"\nInsert SUCCESS-V2\n";
			disq();
				
			}
			
			else
				cout<<"\nCircular Queue Error\n";

		
	}
		
	
} 



void dq()
{
	if(front==NULL)
		cout<<"\n empty bullshit\n";
	else if(front == rear)
		front=NULL;
	else
	{
		front = front->nxt_node;
		rear->nxt_node = front;
		cout<<"\nAfter Deletion\n";
		disq();
	}
	
	
}


int sizeq()
{
	
	if(front==NULL)
		return(0);
	else if(front==rear)
		return(1);
	else
	{
		node *p=front;
		int c=1;
		
		do{
			p=p->nxt_node;
			c++;
			
		}while(p->nxt_node!=front);
		
		return(c);
		
		
	}
	
}


void dq_nth(int n)
{

node *p=front;
int sno=1;
if(n<=sizeq())
{

do
{
if(n==1)
{
	if(front==rear)
	{
	
		front=NULL;
		rear=NULL;
	}
	else
		{
			
			front=front->nxt_node;
			rear->nxt_node = front;
		}
		
	
}

else if(sno==n-1)
{
	if(n==sizeq()) 
			rear = p;
		
	p->nxt_node = p->nxt_node->nxt_node;	
	
}
	
	
	p = p->nxt_node;
	sno++;
}while(p!=front);		


cout<<"\n Display Q after nth Deletion\n";
disq();

}

else
	cout<<"\nEnter Valid nth elemnt<size\n";
	
}
	
	



int main()
{
	



//front->node1->node2->node3->node4 <-rear



disq();
enq(1);
enq(2);

enq(3);

enq(4);
enq(5);

dq();
dq_nth(4);

	
	return(1);
}