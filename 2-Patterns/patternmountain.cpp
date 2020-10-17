#include <iostream>
using namespace std;
int main ()
{
    int i, j, k = 1;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            {
                cout << k << "  ";
                k++;
            }
        for (j = 1; j <= 2*n - 1 - 2*i; j++)
            cout << "   ";
        for (j = 1; j <= i; j++)
            {
                k--;
                if (k == n)
                    continue;
                cout << k << "  ";
            }
        cout << endl;
    }
    return 0;
}