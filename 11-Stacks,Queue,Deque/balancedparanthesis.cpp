#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(char* st){
	stack<char> s;
	for(int i=0;st[i]!='\0';i++){
		char ch = st[i];
		if(ch=='('){
			s.push(ch);
		}
		else if(ch=='{'){
			s.push(ch);
		}
		else if(ch=='['){
			s.push(ch);
		}
		else if (ch==')'){
			if(s.empty() or s.top()!='('){
				return false;
			}
			s.pop();
		}
		else if (ch=='}'){
			if(s.empty() or s.top()!='{'){
				return false;
			}
			s.pop();
		}
		else  if (ch==']') {
			if(s.empty() or s.top()!='['){
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
}

int main() {
	char s[1000];
	cin>>s;
	if(isBalanced(s)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
