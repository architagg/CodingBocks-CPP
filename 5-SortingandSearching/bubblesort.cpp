#include<iostream>

void buubleSort(int *array , int size){
	for(int i = 0;i<size;i++){
		int swaps =0;
		for(int j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				int temp ;
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				swaps = 1;
			}
		}
		if(!swaps)
			break;
	}
}




using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	buubleSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}

	return 0;
}
