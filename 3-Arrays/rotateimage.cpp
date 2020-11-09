#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int startCol=0,endCol=n-1;
        while(startCol<endCol){
            swap(a[i][startCol],a[i][endCol]);
            startCol++;
            endCol--;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    

    return 0;
}
