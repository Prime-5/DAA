#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n, temp;
	stack <int> s;
	
	cin>>n;
	
	for(int i=0;i<n;i++)				//To input the elements
	{
		cin>>temp;
		s.push(temp);
	}
	
	int max=-1, second_max=-1;

//	cout<<s.size()<<" Elements are : ";
	
	while(!s.empty())					//Pops elements and stores the largest and second largest
	{
		if(s.top()>=max)
		{	second_max=max;
			max=s.top();
		}
		
		else if(s.top()>=second_max)
		{
			second_max=s.top();
		}
		
//		cout<<s.top()<<"  ";
		s.pop();
	}
	
	cout<<"The second largest element is : "<<second_max<<endl;
	
	return 0;
}
	
