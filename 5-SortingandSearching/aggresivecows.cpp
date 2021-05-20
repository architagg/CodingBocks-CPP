#include <iostream>
using namespace std;
#include <bits/stdc++.h>



bool canPlaceCows (int stalls[] , int n , int c , int min_sep){
    int last_cow = stalls[0] , cnt =1;
    for(int i=0;i<n;i++){
        if(stalls[i]-last_cow>=min_sep){
            last_cow = stalls[i];
            cnt++;
            if(cnt==c){
                return true;
            }
        }
    }
    return false;
}



int main() {
	int t ;
	cin>>t;
	while(t--){
		int n,cows;
		cin>>n>>cows;
		int stalls[n];
		for(int i=0;i<n;i++){
			cin>>stalls[i];
		}
		int q = sizeof(stalls) / sizeof(stalls[0]);
		sort(stalls, stalls + q);
		int s=0;
		int e = stalls[n-1]-stalls[0];
		
		int ans = 0 ;
		while(s<=e){
		    int mid = (s+e)/2 ;
		    bool cowscan = canPlaceCows(stalls , n , cows , mid);
		    if(cowscan){
		        ans = mid;
		        s=mid+1;
		    }
		    else{
		        e = mid-1;
		    }
		    
		}
		cout<<ans<<endl;
	}

	return 0;
}
