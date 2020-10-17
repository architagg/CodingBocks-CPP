#include<iostream>
#include <math.h>
using namespace std;
int main() {
int a ,b,c;
cin>>a>>b>>c;
int d = ((b*b)-(4*a*c));
int p,q;
if(d>0){
    p = (-b+sqrt(d))/(2*a);
    q = (-b-sqrt(d))/(2*a);
    cout<<"Real and Distinct"<<endl<<q<<" "<<p;
}
else if (d==0){
    p = (-b+sqrt(d))/(2*a);
    q = (-b-sqrt(d))/(2*a);
    cout<<"Real and Equal"<<endl<<p<<" "<<q;
}
else{
    cout<<"Imaginary"<<endl;
}
return 0 ;
}