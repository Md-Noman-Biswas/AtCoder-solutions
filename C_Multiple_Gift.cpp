#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
void solve(){
    ll x, y;
    cin >> x >> y;
    ll a = x;
    int cnt = 1;
    while(a*2 <= y){
        a *= 2;
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