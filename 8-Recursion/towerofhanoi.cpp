#include<iostream>
using namespace std;
void moveSteps(int n , char src , char helper , char dest){
	if(n==0){
		return;
	}
	moveSteps(n-1,src,dest,helper);
	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;
	moveSteps(n-1,helper,src,dest);




}
int main() {
	int n;
	cin>>n;

	moveSteps(n,'A','C','B');
	return 0;
}
