#include<iostream>
using namespace std;
int main() {
long long int n;
int digit,count =0;
cin>>n>>digit;
while(n!=0){
	    int rem = n%10;
	    if(rem == digit)
	        count++;
	    n /= 10 ;
	}
	cout<<count;


	return 0;
}