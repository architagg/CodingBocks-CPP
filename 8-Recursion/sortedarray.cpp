#include<iostream>
using namespace std;

bool isSorted(int a[], int n)
{
	if(n==1 || n==0){
		return true;
	}

	if(a[0]<=a[1] && isSorted(a+1,n-1)){
		return true;
	}
	return false;

}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	if(isSorted(arr,n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

	return 0;
}
