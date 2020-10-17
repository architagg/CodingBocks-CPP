#include<iostream>
#include<math.h>
using namespace std;
int main() {
long long int n,rev=0,temp;
int rem , no = 0;
cin>>n;
temp = n;
while(temp!=0){
    no++;
    temp /=10;
}
while(n!=0){
    rem = n%10;
    rev += rem * pow(10,no-1);
    no--;
    n /=10;
    
}
cout<<rev;

return 0;
}