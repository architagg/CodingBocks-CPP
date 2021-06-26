#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int sum = 0;
		for(int i = a; i<=b;i++){
			int setBits = __builtin_popcount(i);
			sum += setBits ;
		}
		cout<<sum<<endl;
	}
	return 0;
}
