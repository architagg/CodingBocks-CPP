#include <iostream>
using namespace std;
int main() {
    int n;
      cin>>n;            ////     Input number 
  
    int a[n];            ////      Create array
     int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(a[i] > 2 && a[i] < 0){return 0;}
        cin>>a[i];
    }
    int freq[n]={0};
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            c1++;
        }
        else if(a[i] == 1){
            c2++;
        }
        else if(a[i] == 2){
            c3++;
        }
    }
    for(int i=0;i<n;i++){
        if(i < c1){
            freq[i] = 0;
        }
        else if(i>=c1 && i<c1+c2){
            freq[i] = 1;
        }
        else if(i>=c1+c2 && i<n){
            freq[i] = 2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<freq[i]<<endl;
    }
}
