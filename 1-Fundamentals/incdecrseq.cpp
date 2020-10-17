#include<iostream>
using namespace std;
int main() {
int n;
bool isDecreasing = true;
cin>>n;
long long int prev,curr;
cin>>prev;
for(int i=0 ;i<n-1 ; i++){
    cin>>curr;
    if(curr == prev){
        cout<<"false";
        exit(0);
    } 
    
    else if (curr > prev){
        isDecreasing =false;
    }
    else if(!isDecreasing && curr<prev){
        cout<<"false";
        exit(0);
    }
    prev = curr;
}
cout<<"true";

return 0;
}