#include<iostream>
using namespace std;
void input(int arr[], int n){
    if(n==1){
        cin>>arr[0];
        
    }
    else{
        input(arr,n-1);
        cin>>arr[n-1];
    }
}
bool check(int arr[],int n,int size){
    if(n==size/2) 
        return true;
    if(arr[n-1]!=arr[size-n]) 
        return false;
    check(arr,n+1,size);
}
int main() {
	int n,arr[100];
	cin>>n;
	input(arr,n);
	int x=check(arr,1,n);
	if(x) 
	    cout<<"true";
	else 
	    cout<<"false";
}
