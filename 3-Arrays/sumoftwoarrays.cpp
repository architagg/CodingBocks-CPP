#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
	int n,m , res[1000];
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int n1 = 0 , n2 = 0;
	// Calculating 1st Digit
	for(int i =0; i <n ; i++){
			n1 = n1 +((pow(10,n-i) * a[i])) ;
		}
	n1 = 	n1/10;
	//cout<<n1<<endl;
	
	//Calculating 2nd digit
	for(int i =0; i <m ; i++){
			n2 = n2 +((pow(10,m-i) * b[i])) ;
		}
	n2 = n2/10;
	//cout<<n2<<endl;
	
	int sum = n1+n2;
	//cout<<sum<<endl; ;
	
	//Counting Digits in Sum
	int count = 0 ;
	int temp =sum;
	while(temp!=0){
	    temp = temp/10;
	    count++;
	}
	//cout<<count<<endl;
	

	     while (sum != 0) {
	   for(int i = 0 ; i < count ; i++){
	         int r = sum % 10;
	         res[i] = r;
	         sum = sum / 10;
    }
	}

	     
	if(count <= n && count <= m ){
	    int zero = 0;
	    cout<< zero << ", ";
	    for(int i = count-1 ;i>=0;i--){
	        cout<<res[i]<<", ";
	        
	    }
	}
	else{
	     for(int i = count-1 ;i>=0;i--){
	    cout<<res[i]<<", ";
	}
	}
	

	cout <<"END";
	
	return 0;
}
