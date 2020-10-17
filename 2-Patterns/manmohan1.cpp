#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;     
 for(int i=1;i<=n;i++){
     if(i%2==1){
         for(int cnt=1;cnt<=i;cnt++)
         {
                cout<<"1";  
             }
        }
        else{
            cout<<"1";
            for(int cnt=1;cnt<i-1;cnt++){
                cout<<"0";
            }
            cout<<"1";
        }
        cout<<endl;
     }
 
return 0;
}
