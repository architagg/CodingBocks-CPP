#include<iostream>
#include<stack>
using namespace std;
void printspan(int a[],int n)
{
  stack<int> s;
  int ans[n+1]={0};

  for(int day=1;day<=n;day++)
  {
    int current= a[day];
    while(s.empty()==false && a[s.top()]<=current)
     {
      s.pop();
     }

   if(!s.empty())
       {
     int index=day-s.top();
     ans[day]=index;
     s.push(day);
     }
     else
     {
       int index=day;
       ans[day]=index;
       s.push(day);
     }
     }
  for(int j=1;j<=n;j++)
  {
    cout<<ans[j]<<" ";
  }
  cout<<"END";
}
int main()
{
  int n;
  cin>>n;
  int a[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  printspan(a,n);
}
