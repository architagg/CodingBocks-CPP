
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    string s1,s2,s3="";
    while(t--){
        cin>>s1>>s2;
        int len = s1.length();
        for(int i=0;i<len;i++){
            if(s1[i]==s2[i]){
                s3.append("0");
            }
            else{
                s3.append("1");
            }
        }
        cout<<s3<<endl;
        s3.erase();
    }
    

    return 0;
}
