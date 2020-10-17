#include<iostream>
using namespace std;
int main() {
long long int n,res=0;
int rem,i=1;
cin>>n;
while(n!=0){
    rem = n%8;
    n/=8;
    res = res+ (rem*i);
    i*=10;
}
cout<<res<<endl;
return 0 ;
}