#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int x,flag=0;
	cin>>x;
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			
			if (x==a[i][j])
				flag=1;
	}
	}
	if(flag==1)
		cout<<1;
	else
		cout<<0;


	return 0;
}
