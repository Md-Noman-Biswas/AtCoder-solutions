#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
int freq[26];
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i=0; i<n; i++){
        freq[int(s[i]) - 'a']++;
    }
    char ans = '*';
    for(int i=0; i<26; i++){
        if(freq[i] == 0){
            ans = char('a' + i);
            break;
        }
    }
    if(ans != '*') cout << ans << "\n";
    else{
        cout << "None" << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}