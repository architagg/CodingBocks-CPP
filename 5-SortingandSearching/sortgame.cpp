#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool mycompare(pair<string,int>p1 , pair<string,int>p2){
	if(p1.second==p2.second){
		return p1.first<p2.first;
	}
	return p1.second > p2.second;
}

int main() {
	int minsal , n;
	cin>>minsal>>n;
	pair<string,int> emp[100000];
	string name;
	int sal;
	for(int i=0;i<n;i++)
	{
		cin>>name>>sal;
		emp[i].first = name;
		emp[i].second = sal;
	}
	sort(emp,emp+n,mycompare);
	for(int i=0;i<n;i++){
		if(emp[i].second >= minsal){
			cout<<emp[i].first<<" "<<emp[i].second<<endl;
		}
	}
	return 0;
}
