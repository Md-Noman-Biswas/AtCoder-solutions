#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
int freq[26];
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2]  == 'C'){
            cnt++;
        }
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