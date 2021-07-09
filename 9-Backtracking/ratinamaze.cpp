#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],visited[1001][1001];
bool f(char maze[1001][1001],int i,int j,int n,int m)
{
	if(i==n && j==m)
	{
        a[i][j]=1;
		for(int p=0;p<=n;p++)
		{
			for(int q=0;q<=m;q++)
			{
				cout<<a[p][q]<<" ";			
			}
			cout<<endl;
		}
		return true;
	}
    if(visited[i][j])
    {
        return false;
    }

    a[i][j]=1;
    visited[i][j]=1;
    if(j+1<=m && !visited[i][j+1])
	{
        bool rightSuccess=f(maze,i,j+1,n,m);
        if(rightSuccess==true)
		return true;
	}
	if(i+1<=n && !visited[i+1][j])
    {
        bool downSuccess=f(maze,i+1,j,n,m);
        if(downSuccess==true)
		return true;
	}
	a[i][j]=0;
	return false;
}
int main() {
	int n,m;
	cin>>n>>m;

    char maze[1001][1001];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>maze[i][j];
            if(maze[i][j]=='X')
            visited[i][j]=1;
		}
	}
	if(!f(maze,0,0,n-1,m-1))
	cout<<-1;
	return 0;
}
