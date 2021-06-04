#include<iostream>
using namespace std;
int main() {
	int  n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int start =0;
	int end = n-1;

	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]>arr[mid+1] && mid<end){
			cout<<mid;
			break;
		}
		if(arr[mid]<arr[mid-1] && mid>start){
			cout<<mid-1;
			break;
			}
		if(arr[start]>=arr[mid]){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return 0;
}
