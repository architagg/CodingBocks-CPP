#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    cin>>M;
    int B[M];
    for(int i=0;i<M;i++)
        cin>>B[i];
    int carry=0;
    vector<int> ans;
    int i,j;
    for(i=N-1,j=M-1;i>=0 && j>=0;i--,j--)   ///Start a loop from units place digits
    {
        int sum=A[i]+B[j]+carry;
        ans.push_back(sum%10);
        carry=sum/10;
    }
    while(i>=0)
    {
        int sum=carry+A[i];
        ans.push_back(sum%10);
        carry=sum/10;
        i--;
    }
    while(j>=0)
    {
        int sum=carry+B[j];
        ans.push_back(sum%10);
        carry=sum/10;
        j--;
    }
    if(carry)
        ans.push_back(carry);
    
    for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<", ";
    cout<<"END";
	return 0;
}
