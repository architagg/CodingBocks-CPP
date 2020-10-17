#include<iostream>
using namespace std;
int main() {
char ch;
while(1) {
    long long int a,b;
    cin>>ch;
    switch(ch){
        case '*': 
        cin>>a>>b;
        cout<<(a*b)<<endl;
        break;
        case '+': 
        cin>>a>>b;
        cout<<(a+b)<<endl;
        break;
        case '/': 
        cin>>a>>b;
        cout<<(a/b)<<endl;
        break;
        case '-': 
        cin>>a>>b;
        cout<<(a-b)<<endl;
        break;
        case '%': 
        cin>>a>>b;
        cout<<(a%b)<<endl;
        break;
        case 'X': exit(0);
        case 'x': exit(0);
        
        default: cout<<"Invalid operation. Try again."<<endl;
                continue;
    }
}
return 0 ;
}
