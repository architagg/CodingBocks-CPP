#include <iostream>
#include <cstring>
using namespace std;

int count = 0;


void subseq(string input,string output)
{
	if(input.length()==0)
    {
		cout<<output<<" ";
		count++;
		return;
	}
    char ch=input[0];
    string ros=input.substr(1);
    subseq(ros,output);
	subseq(ros,output+ch);
	return;
}

int main(){

    string str;
	cin>>str;
    string output;
	subseq(str," ");
	cout<<endl;
	cout<<count<<endl;
	return 0;
}
