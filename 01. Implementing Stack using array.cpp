#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int stack[100], top=-1, n;

int is_full()
{
    if(top==n-1)
        return 1;
    else
        return 0;
}

int is_empty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
 
void print()
{
    if(is_empty())
    {   cout<<"Stack underflow"<<endl;
        return;
    }
    
    for(int i=top;i>=0;i--)
    {   cout<<stack[i]<<" ";
    }
	
    cout<<endl;
}

void peek()
{
     if(is_empty())
     {    cout<<"\nNo element is present"<<endl;
	  return;
     }

     cout<<"\nThe element at the top position is: "<<stack[top]<<endl;
}

void push()
{
    if(is_full())
    {   cout<<"Stack overflow"<<endl;
        return;
    }
    
    int e;
    cout<<"\nEnter the element to be entered"<<endl;
    cin>>e;
    
    top++;
    stack[top]=e;
    
    cout<<"\nElement entered successfully\nThe updated stack is: ";
    print();
}

void pop()
{
    if(is_empty())
    {   cout<<"Stack underflow"<<endl;
        return;
    }
    
    cout<<"\nElement to be deleted : "<<stack[top--];
    cout<<"\nRemaining stack : ";
    print();
}

int main()
{
    cout<<"\nEnter the size of stack"<<endl;
    cin>>n;
   
    int choice;
    
    while(1)
    {   
	cout<<"\nEnter your choice"<<endl;
    	cout<<"1. Push an element"<<endl;
    	cout<<"2. Pop an element"<<endl;
    	cout<<"3. Peek"<<endl;
	cout<<"4. Display all"<<endl;
    	cout<<"5. Exit"<<endl;
    	cin>>choice;    
        
	switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
	    case 3: peek(); break;
            case 4: print(); break;
            case 5: exit(0); break;
            default: cout<<"\nWrong input"<<endl; break;
        }
    }
    return 0;
}
