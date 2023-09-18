#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve(){
    ll a;
    cin >> a;
    ll ans = 0;
    ll x;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            x = gcd(i,j);
            for(int k = 1; k<=a; k++){
                ans += gcd(x, k);
            }
        }
    }
    cout << ans << nl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}