#include<iostream>
#include<cstring>
using namespace std;

char table[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void generateCodes(char* input, char* output,int i,int j){

	if(input[i]=='\0'){
		output[j] =='\0';
		cout<<output<<endl;
		return;
	}

	int digit = input[i] - '0';
	for (int k=0;table[digit][k]!='\0';k++){
		output[j] = table[digit][k];
		generateCodes(input,output,i+1,j+1);
	}


}

int main() {

	char input[11];
	char output[11] = {0};
	cin>>input;
	generateCodes(input,output,0,0);
	return 0;
}
