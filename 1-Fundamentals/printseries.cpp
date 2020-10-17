#include<iostream>
using namespace std;
int main() {
	int n,m,count=0;
	cin>>n>>m;
	int i =1;
	while(count < n){
		int num = 3*i+2;
		i+=1;
		if(num%m!=0){
			cout<<num<<endl;
			count++;
		}
		
	}
	return 0;
}