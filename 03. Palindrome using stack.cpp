#include <iostream>
#include <stack>
using namespace std;

int main() 
{
	stack <int> s;
	string str;
//	cout<<"Enter a string to check if it's a palindrome ";
	cin>>str;
	cout<<str<<endl;
	int l=str.length();
	
	for(int i=0;i<l/2;i++)
	{
		s.push(str[i]);
	}
	
	int j;
	if(l%2==1)
		j=l/2+1;
	else
		j=l/2;
	while(!s.empty())
	{
		char temp=s.top();
		s.pop();
		if(temp!=str[j++])
		{
			cout<<"Not a Palindrome";
			return 0;
		}
	}	
	
	cout<<"Palindrome";
	return 0;
}
