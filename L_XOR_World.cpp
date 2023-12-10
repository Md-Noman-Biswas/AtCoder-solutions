#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define nl "\n"


ll xor_of_x(ll x){
    ll ans = 0;
   while(x%4 != 3){
        ans ^= x;
        x--;
   }
   return ans;
}

void solve(){
    ll l, r;
    cin >> l >> r;
    cout << (xor_of_x(r) ^ xor_of_x(l-1)) << nl;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}