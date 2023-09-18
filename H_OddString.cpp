#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve(){
    string s;
    cin >> s;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(i%2 == 0){
            ans.push_back(s[i]);
        }
    }
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}