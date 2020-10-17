#include<iostream>
using namespace std;
int main() {
	int minf , maxf , step;
	cin>>minf>>maxf>>step;
for(int i = minf; i<=maxf ; i+=step){
	int c = (5*(i-32))/9;
	cout<<i<<"	"<<c<<endl;
}
	return 0;
}