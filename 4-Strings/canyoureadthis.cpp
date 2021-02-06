#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
    cin>>s;
	for(int i=0;i<=s.length();i++){
	if(i==0&&s[i]>='A'&&s[i]<='Z'){
	cout<<s[i];
	}
	else if(s[i]>='a'&&s[i]<='z'){
     cout<<s[i];
	}
	else if(s[i]>='A'&&s[i]<='Z'){
		cout<<endl;
		cout<<s[i];
	}
}
}
