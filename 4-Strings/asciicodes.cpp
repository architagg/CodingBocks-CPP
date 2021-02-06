#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    if(len<2)
    {
        exit(0);
    }
    else{
        for(int i=0;i<len-1;i++){
            cout<< s[i]<<(s[i+1]-s[i]);
            
        }
        cout<<s[len-1];
        
    }

    return 0;
}
