#include<iostream>
#include<math.h>
using namespace std ;
#define ll long long int
void root(ll n , ll k)
{
    ll s=1 , e=1000000 , mid , ans,i;
    while(s<e)
    {
        mid = (s+e+1)/2 ;
        ans = 1 ;
        int flag=1;

        for(i=0 ; i<k ; i++ )
        {
            ans = mid*ans ;
            if(ans>n){
                flag=0;
                break;
            }
        }
        if(flag)
        {
            s = mid ;
        }
        else 
        {
            e = mid-1 ;
        }
    }
    cout << e << endl;
}
int main()
{
    ll t  ;
    cin >> t ;
    while(t--)
    {
        ll n,k ;
        cin >> n >> k ;
		if(k==1){
			cout<<n<<endl;
		}
		else{
			root(n,k) ;
		}
        
    }
    return 0 ;

}


