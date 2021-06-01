#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int lower_bound(int a[],int n ,int key){
	int s=0;
	int e=n-1;
	int res =-1;
	
	while(s<=e){
		int mid =(s+e)/2;

		if(a[mid]==key)
		{
			res = mid;
			e=mid-1
		}
		else if(a[mid]>key){
			e=mid-1;
		}
		else{
			s = mid+1;
		}
	}

	return res;
}


int upper_bound(int a[],int n ,int key){
	int s=0;
	int e=n-1;
	int res =-1;
	
	while(s<=e){
		int mid =(s+e)/2;

		if(a[mid]==key)
		{
			res = mid;
			s=mid+1
		}
		else if(a[mid]>key){
			e=mid-1;
		}
		else{
			s = mid+1;
		}
	}

	return res;
}




int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		int q;
		cin>>q;
		cout<<lower_bound(arr,n,q)<<" "<<upper_bound(arr,n,q)<<endl;
	}
	
	return 0;
}
