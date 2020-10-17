#include<iostream>
using namespace std;
int main() {
	long long int N,m,n;
	cin>>N;
	if(N == 1 || N == 2 || N <=0){
		cout<<-1;
	}
	else if(N%2 ==0){
		m=(N/2);
		n = 1;
		cout<<((m*m)-(n*n))<<" "<<((m*m)+(n*n));
	}
	else if (N%2!=0){
		m = (N+1)/2;
		n = (N-1)/2;
		cout<<(2*m*n)<<" "<<((m*m)+(n*n));

	}

	return 0;
}