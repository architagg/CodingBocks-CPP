
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   
    string str ;
    int count[256]={0};
    cin>>str;
    int len = str.length();
    int max = 0;
    char res;
    for(int i=0;i<len;i++){
        count[str[i]]++;
        if (max < count[str[i]]) { 
                max = count[str[i]]; 
                res = str[i]; 
        } 
    }
    cout<<res<<endl;

    return 0;
}
