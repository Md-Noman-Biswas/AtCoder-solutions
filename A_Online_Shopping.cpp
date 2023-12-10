#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mod 1000000007
const int N = 1e5 + 7;

void solve(){
    ll n, s, k;
    cin >> n >> s >> k;
    ll amount = 0;
    while(n--){
        ll p,q;
        cin >> p >> q;
        amount += p*q;
    }
    if(amount >= s){
        cout << amount << nl;
    }else{
        amount += k;
        cout << amount << nl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}