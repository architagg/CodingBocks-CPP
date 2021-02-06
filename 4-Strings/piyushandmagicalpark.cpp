#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,k,s;
cin>>n>>m>>k>>s;
char arr[n][m];
for(int i=0; i<n; i++)
{
for(int j=0; j<m; j++)
{
cin>>arr[i][j];
}
}
int flag=0;
for(int i=0; i<n; i++)
{
for(int j=0; j<m; j++)
{
if(k>s)
{
flag=1;
break;
}
if(arr[i][j]== '.')
{
s=s-2;
}
else if(arr[i][j]=='*')
{
s=s+5;
}
else if(arr[i][j]=='#')
{
break;
}
if(j!=m-1)
{
	s=s-1;
}

    }
    if(flag)
    {
        break;
    }
}
if(s>k)
   {
	cout<<"Yes\n";
	 cout<<s<<"\n";
   }

else{
    cout<<"No\n";
}
}
