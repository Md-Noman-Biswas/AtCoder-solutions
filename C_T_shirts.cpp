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
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    ll curr_plain = m;
    ll curr_logo = 0;
    ll used_plain = 0;
    ll used_logo = 0;
    ll bought = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            if(curr_plain == 0 && curr_logo == 0){
                curr_logo = 1;
                bought++;
                curr_logo--;
                used_logo++;
            }
            else if(curr_plain == 0 && curr_logo > 0){
                curr_logo--;
                used_logo++;
                
            }
            else{
                curr_plain--;
                used_plain++;
            }
            
        }
        else if(s[i] == '2'){
            if(curr_logo == 0){
                curr_logo = 1;
                bought++;
            }
            curr_logo--;
            used_logo++;
            
        }else{
            curr_plain += used_plain;
            curr_logo += used_logo;
            used_plain = 0;
            used_logo = 0;
        }
    }
    cout << bought << nl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}