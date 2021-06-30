#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans = 0 ;
		while(n>0){
			ans++;
			n = n&(n-1);
		}
		cout<<ans<<endl;

	}
	return 0;
}
