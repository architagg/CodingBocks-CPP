#include<iostream>
#include <math.h>
using namespace std;
int main() {
long long int binary ;
long int decimal = 0  ,rem;
int i=0;
cin>>binary;
while(binary!=0){
    rem = binary%10;
    decimal += rem*pow(2,i);
    binary /=10;
    ++i;
}
cout<<decimal;


}