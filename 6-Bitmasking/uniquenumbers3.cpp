#include<iostream>
using namespace std;
int main() {
	int n,num,p=1;
	int sum[64]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		//Update Sum arraY
		int j = 0;
		while(num>0){
			int lastBit = (num&1);
			sum[j] += lastBit;
			j++;
			num = num>>1;
		}
	}
	int res =0;
	for(int i=0;i<64;i++){
		sum[i]%= 3;
		res += (sum[i]*p);
		p *= 2;
	}

	cout<<res<<endl;

	return 0;
}
