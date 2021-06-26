#include<iostream>
using namespace std;
int main () {
	int x,y;
	cin>>x>>y;
	int initialXOR = x^y;
	int significantBit = 0;
	while(initialXOR){
		significantBit++;
		initialXOR >>= 1;
	}
	int res = 0;
	int r =1;
	while(significantBit--){
		res +=r;
		r = r<<1;
	}
	cout<<res<<endl;
	return 0;
}
