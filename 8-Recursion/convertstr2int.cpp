#include<iostream>
#include<cstring>
using namespace std;

int convertString (char a[] ,int n){
	if(n==0){
		return 0;
	}

	int lastDigit = a[n-1] - '0';
	int ans = convertString(a,n-1);

	return ans*10+lastDigit;



}
int main() {
	char a[10000];
	cin>>a;
	int length = strlen(a);
	cout<<convertString(a,length);

	return 0;
}
