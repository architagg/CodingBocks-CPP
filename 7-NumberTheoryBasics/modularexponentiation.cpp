#include<iostream>
using namespace std;
#define ll long long
int main() {

	ll a,b,c,res=1;
	cin>>a>>b>>c;
	while(b>0){
		if(b&1){
			res = (res *a)%c;
		}
		a = (a*a)%c;
		b = b>>1;
	}

	cout<<res;
	return 0;
}
