#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

char kp[][10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
 
 
void printKeypadString(char *in, char *out, int i, int j)
{
    if(in[i] == '\0')
    {
        out[j] = '\0';
        int i;
        string s = "";
        for (i = 0; out[i] != '\0'; i++)
              s = s + out[i];
        for( i = 10; i >= 0; i--)
        {
              size_t found = searchIn[i].find(s);
               if (found != string::npos) {
                   cout << searchIn[i]<<endl;
               }
               
        }
        return;
    }
 
    int digit = in[i] - '0';
    for(int k = 0; kp[digit][k] != '\0'; k++){
        out[j] = kp[digit][k];
        printKeypadString(in, out, i+1, j+1);
    }
    return;  
}
 
int main() {
    char a[10], b[10];
    cin>>a;
    printKeypadString(a, b, 0, 0);
    return 0;
}
