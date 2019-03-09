#include<iostream>
using namespace std;
#define n 5

struct node
{
    int data;
    int prio;
}Queue[n];

int front=-1, rear=-1;

int is_Empty()
{
	if(front==-1)			//Empty
		return 1;
	else if(front>rear)		//Underflow
		return 2;
	else					//Not empty
		return 0;
}

int is_full()
{
	if(rear==n-1)			//Full or overflow
		return 1;
	else					//Not full
		return 0;
}

void display()
{
	int c=is_Empty();
	if(c)
	{
	    if(c==1)	cout<<"\nQueue empty"<<endl;
		else if(c==2)	cout<<"\nQueue underflow"<<endl;
		else cout<<"This line should never get printed"<<endl;
		return;
	}
	cout<<endl;
	int i;
	for(i=front;i<=rear;i++)
	{
		cout<<Queue[i].data<<" "<<Queue[i].prio<<"   ";
	}
	cout<<endl;
}

void enqueue()
{
	int a,b,i;
	if(is_full())
	{
		cout<<"Queue overflow"<<endl;
		return;
	}
	
	cout<<"\nEnter the element and its priority: ";
	cin>>a>>b;
	
	if(front==-1)	front++;		//For first element
	rear++;
	i=rear-1;
	while(i>=front && Queue[i].prio>b)
	{
	    Queue[i+1]=Queue[i];
	    i--;
	}
	Queue[i+1].data=a;
	Queue[i+1].prio=b;
	
	
	cout<<"Insertion successful"<<endl;
	display();
}

void deque()
{
	int c;
	if(c=is_Empty())
	{
		if(c==1)	cout<<"\nQueue empty"<<endl;
		else if(c==2)	cout<<"\nQueue underflow"<<endl;
		else cout<<"This line should never get printed"<<endl;
		return;
	}
	
	cout<<endl<<Queue[front++].data<<" deleted successfully";
	display();
}

int main()
{
	int c;
	while(1)
	{	cout<<"1. Enqueue"<<endl;
		cout<<"2. Deque"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"\nEnter your choice : ";
		cin>>c;
	
		switch(c)
		{
			case 1: enqueue(); break;
			case 2: deque(); break;
			case 3: display(); break;
			case 4: exit(1); break;
			default: cout<<"\nEnter a valid chaoice"<<endl;
		}
	}
	return 0;
}
