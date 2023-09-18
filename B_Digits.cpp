#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n;
    cin >> n;
    ll b;
    cin >> b;
    ll t = 1;
    ll cnt = 0;
    while(t < n){
        t *= b;
        cnt++;
    }
    cout << cnt << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}