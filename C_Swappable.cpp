#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> arr(n+2);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll ans = 0;
    for(int i=0; i<n; i++){
        mp[arr[i]]--;
        ans += n-i-1 - mp[arr[i]];
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