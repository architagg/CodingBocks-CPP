#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,curr=0,maxSum=INT_MIN;
			    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        curr = curr + a[i];
	        if(maxSum < curr){
	            maxSum = curr;
	        }
	        if(curr<0){curr = 0;}
	    }
	    cout<<maxSum<<endl;
	}
	return 0;
}
