#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char ch;
	cin>>ch;
	if(isupper(ch)){
		cout<<"U"<<endl;
	}
	else if (islower(ch)){
		cout<<"L"<<endl;
	}
	else{
		cout<<"I"<<endl;
	}
	return 0;
}
