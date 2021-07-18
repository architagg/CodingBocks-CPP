#include<iostream>
#include<stack>
using namespace std;
class Queue
{
	stack<int> s1,s2;
	public:
	void push(int x)
	{
		s1.push(x);
	}

	void pop()
	{
		if(s1.empty())
		return;

		while(s1.size()>1)
		{
			int ele=s1.top();
			s2.push(ele);
			s1.pop();
		}
		s1.pop();
		while(!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
	}
	int front()
	{
		while(s1.size()>1)
		{
			int ele=s1.top();
			s2.push(ele);
			s1.pop();
		}
		int ele=s1.top();
		//s1.pop();in front u dont have to pop
		while(!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
		return ele;
	}
	bool empty()
	{
		if(s1.empty())
		return true;
		else
		return false;
	}
};
int main() {
	int n;
	cin>>n;
	Queue q;
	for(int i=0;i<n;i++)
	{    
		q.push(i);
	}

	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}
