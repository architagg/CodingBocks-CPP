#include<iostream>
#include<algorithm>
using namespace std;

bool compare(string a ,string b){
	
		int l1=a.length();
		int l2=b.length();
		int flag=-1;
		for(int i=0;i<min(l1,l2);i++){
			if(a[i]!=b[i])
			flag=0;
		}
		if(flag==-1)
			return l1>l2;
		else
			return a<b;
	
}

int main() {
	string str[1000];
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,str[i]);
	}
	sort(str , str+n ,compare);
	for(int i=0;i<n;i++){
		cout<<str[i]<<endl;
	}
	return 0;
}
