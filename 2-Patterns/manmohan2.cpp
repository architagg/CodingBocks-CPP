#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
cout<<"1"<<endl;
 if(n>1){
    for(int i=1;i<n;i++){
            cout<<i;
            for(int cnt=1;cnt<i;cnt++){
                cout<<"0";
            }
            cout<<i;
        
        cout<<endl;
     }
 }
 
 
return 0;
}