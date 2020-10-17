#include<iostream>
using namespace std;
int main()
{
int N,row,col,n2=1,n1=0,sum=1;
cin>>N;
for(row=1;row<=N;row++)
{
for(col=1;col<=row;col++)
{
    if(row==1 && col==1)
    {
        cout<<0;
        continue;
    }
    cout<<sum<<"  ";
    sum=n1+n2;
    n1=n2;
    n2=sum;

}
cout<<endl;
}
}