#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--){
		int num , val=0 , base = 1;
		cin>>num;
		int temp =num;
		while(temp){
			int last = temp%10;
			temp /=10;
			val += last*base;
			base *=2; 
		}
		cout<<val<<endl;
	}
	return 0;
}