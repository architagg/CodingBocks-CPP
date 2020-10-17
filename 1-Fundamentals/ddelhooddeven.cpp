#include<iostream>
using namespace std;
int main() {
long long int t,n;
cin>>t;
while(t--){
	int sum1 = 0,sum2=0;
	cin>>n;
	while(n!=0){
	    int rem = n%10;
	    if(rem%2==0){
	        sum1+=rem;
	    }
	    else{
	        sum2+=rem;
	    }
	    n /= 10 ;
	}
	if(sum1%4==0 || sum2%3==0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	
}

	return 0;
}
