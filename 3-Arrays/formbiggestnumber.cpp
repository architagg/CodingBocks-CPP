#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]+a[i]>a[i]+a[j]){
					string b = a[j];
					a[j] = a[i];
					a[i] = b;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
cout<<endl;


	}
	return 0;
}
