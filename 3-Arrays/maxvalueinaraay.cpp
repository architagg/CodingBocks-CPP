#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,res=INT_MIN;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>res){
			res=arr[i];
		}
	}
	cout<<res;
	return 0;
}
