//			Su Saheb?

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
	
    while(t--)
    {
    ll n;
    cin >> n;

    while(n--)
    {
	ll a;
	cin >> a;
	if(n % 2)
	    cout << abs(a) << " ";
	else
	    cout << -abs(a) << " ";
    }
    cout << endl;
    }

    return 0;
}

