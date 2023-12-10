#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    ll n, l;
    cin >> n >> l;
    vector<ll> arr(n);
    int cnt = 0;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++){
        if(arr[i] >= l){
            cnt++;
        }
    }
    cout << cnt << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}