#include<bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
    #define dbg(...)
#else
    #include "Debug.h"
#endif
#define ll                long long
#define endl              '\n'
#define all(x)            x.begin(), x.end()
#define sz(x)             (int)(x).size()
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define FAST              (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    
}
signed main()
{
    FAST;
    int TC = 1;
    //cin >> TC;
    while (TC--) solve();
}