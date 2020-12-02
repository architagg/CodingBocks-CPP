#include <iostream>
using namespace std;

int kadane(int arr[],int n){
    int max_sum = 0 , curr_sum=0;
    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        if(curr_sum<0){
            curr_sum = 0;
        }
        max_sum = max(curr_sum,max_sum);
    }
    return max_sum;
}

void maxCircularSum(int arr[],int n){
    int max_kadane = kadane(arr,n);
    int max_wrap = 0;
    for(int i=0;i<n;i++){
        max_wrap += arr[i];
        arr[i] = -arr[i];
    }
    max_wrap = max_wrap + kadane(arr,n);
    int y = (max_wrap>max_kadane)?max_wrap:max_kadane;
    cout<<y<<endl;
    
}

int main()
{   int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];  
        }
        maxCircularSum(a,n);
        
    }
    return 0;
}
