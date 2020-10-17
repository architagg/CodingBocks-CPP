#include<iostream>
using namespace std;

int main() {
	int n , c=0;
	cin>>n;
for(int i=0;i<n;i++){
	for(int sp =1 ;sp<=n-i;sp++){
		cout<<" ";
	}
	for(int j=0;j<=i;j++){
		if(j==0||i==0)
			c=1;
		else
			c=c*(i-j+1)/j;
		cout<<c<< " ";
}
cout<<endl;
}
	return 0;
}