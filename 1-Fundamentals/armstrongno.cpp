#include<iostream>
#include <math.h>
using namespace std;
int main() {
long long int n, temp ,sum =0;
int count=0;
cin>>n;
temp = n;
while(temp!=0){
    count++;
    temp /=10;
}
temp = n;
while(temp!=0)
{
    int rem = temp%10;
    rem = pow(rem,count);
    sum+=rem;
    temp/=10;
}
if(sum == n){
    cout<<"true";
}
else{
    cout<<"false";
}


return 0 ;
}