#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char ch;
	cin>>ch;
	if(isupper(ch)){
		cout<<"UPPERCASE"<<endl;
	}
	else if (islower(ch)){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}
	return 0;
}
