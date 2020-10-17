#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int k=(n+1)/2;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(i==k||j==k||(i==1 && j>k)||(i==n && j<k)||(j==1 && i<k)||(j==n && i>k))
	        cout<<"*";
	        else cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}