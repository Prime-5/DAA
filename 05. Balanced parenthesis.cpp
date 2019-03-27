#include <iostream>
#include <stack>
using namespace std;

stack <int> s;

int open(char c)
{
	if(c=='(')
		return 1;
	return 0;
}

int close(char c)
{
	if(c==')')
		return 1;
	return 0;
}

int main() 
{
	string str;
//	cout<<"Enter a bracket sequence"<<endl;
	cin>>str;
	cout<<str<<endl;
	int l=str.length();
	int count=0;
	if(!open(str[0]) || !close(str[l-1]) || l%2==1)
	{
		cout<<"Unbalanced.";
		return 0;
	}
	
	//Copying to stack
	for(int i=0;i<l;i++)
	{
		s.push(str[i]);
	}
	
	//Checking if it is balanced
	while(!s.empty())
	{
		char temp=s.top();
		s.pop();
		count+=open(temp)-close(temp);
	}
	
	if(count==0)
	{
		cout<<"Balanced";
	}
	else
	{
		cout<<"Unbalanced";
	}
	
	return 0;
}
