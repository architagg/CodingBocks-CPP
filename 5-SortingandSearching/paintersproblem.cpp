#include<iostream>
#include<algorithm>
#define long long int long long int;
using namespace std;


long long int maximum(long long int a[100000000] , long long int n)
{
    long long int max = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

long long int Valid(long long int a[],long long int n,long long int mid){
    long long int sum =0,point=1;
    for(long long int i=0;i<n;i++){
        sum+=a[i];
        if(sum>mid){
            point++;
            sum = a[i];
        }
    }
    return point;
}

long long int PainterProblem(long long int length[],long long int n, long long int k, long long int totalong long intength , long long int t){
    long long int s = maximum(length,n);
    long long int e = totalong long intength;
    long long int res;
    while(s<=e){
        long long int mid = (s+e)/2;
        long long int painters = Valid(length,n,mid);
        if(painters<=k){
            res =mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return (res*t)%10000003
}





int main() {
    long long int n,k,t;
    cin>>n>>k>>t;
    long long int length[n],totalong long intength=0;
    for(long long int i =0;i<n;i++){
        cin>>length[i];
        totalong long intength+=length[i];
    }
    cout<<PainterProblem(length,n,k,totalong long intength,t);

    return 0;
}

