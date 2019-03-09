#include<iostream>
using namespace std;
#define n 5

int Queue[n];
int front=-1, rear=-1;

int is_Empty()
{
	if(front==-1)			        //Empty or uderflow
		return 1;
	else					        //Not empty
		return 0;
}

int is_full()
{
	if((rear+1)%n==front)			//Full or overflow
		return 1;
	else					//Not full
		return 0;
}

void display()
{
	if(is_Empty())
	{
	    cout<<"\nQueue empty"<<endl;
		return;
	}
	
	cout<<endl;
	int i;
	for(i=front;i!=rear;i=(i+1)%n)
	{
		cout<<Queue[i]<<" ";
	}
	if (front!=-1) cout<<Queue[rear];
	cout<<endl;
}

void enqueue()
{
	if(is_full())
	{
	    cout<<"\nQueue Full"<<endl;
		return;
	}
	
	cout<<"\nEnter the element to be inserted: ";
	if(front==-1)	front++;		//For first element
	rear=(rear+1)%n;                //Turning around
	cin>>Queue[rear];				//For first/other elements
	
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
	
	cout<<endl<<Queue[front]<<" deleted successfully";
	front=(front+1)%n;
	
	if(front==(rear+1)%n)   front=rear=-1;      //Reset the empty queue
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
