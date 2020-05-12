#include <iostream>
using namespace std;

struct queue
{
	int front,rare,size;
	int *Q;
	
};

void create(queue *q,int size)
{
  q->size=size;
   q->front=q->rare=-1;
   q->Q=new int[q->size] ;
}
 
void display(queue *q)
{
	for(int i=q->front+1;i<=q->rare;i++)
	{
		cout<<q->Q[i]<<"  ";
                cout<<"next222";
	}
 } 

void enqueue( queue *q,int x)
{
	if(q->rare==q->size-1)
		cout<<"full"<<endl;
		else
		{
			q->rare++;
			q->Q[q->rare]=x;
			
		}
}

int dequeue( queue *q)
{
	int x;
	if(q->front==q->rare)
	cout<<"empty"<<endl;
	else
	{
		q->front++;
		x=q->Q[q->front];
	}
	return x;
		
}

int main()
{
   queue q;
  
  create(&q,5);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  enqueue(&q,50);
  
   display(&q); cout<<endl;
   
   dequeue(&q);
   dequeue(&q);
   dequeue(&q);
   
    display(&q);cout<<endl;
    
    dequeue(&q);
    dequeue(&q);
    
    display(&q);cout<<endl;
    
    dequeue(&q);
     display(&q);cout<<endl;
    
    
    
   
   return 0;

} 
# code relted to queue

