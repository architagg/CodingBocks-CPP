#include<iostream>
# define ll long long
using namespace std;

void prime_sieve(int *p){
	for(int i=3;i<=1000000;i+=2){
		p[i] = 1;
	}
	for(ll i=3;i<=1000000;i+=2){
		if(p[i]==1){
			for(ll j= i*i;j<=100000;j=j+i){
				p[j]=0;
			}
		}
	}

	p[2]=1;
	p[0]=p[1]=0;
}


int main() {
	int p[1000000] = {0};
	prime_sieve(p);
	int csum[1000005] = {0};

	for(int i=0;i<1000000;i++){
		csum[i] = csum[i-1] + p[i];
	}




	int t;
	cin>>t;
	while(t--){

		int a,b;
		cin>>a>>b;
		cout<<(csum[b] - csum[a-1])<<endl;
	}
	return 0;
}
