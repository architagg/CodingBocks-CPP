#include<iostream>
using namespace std;


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}



void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}


int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	 selectionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}

	return 0;
}
