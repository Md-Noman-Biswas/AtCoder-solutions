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
    ll q, g, m;
    cin >> q >> g >> m;
    ll glass = 0;
    ll mug = 0;
   // q = 2;
    while(q--){
        if(glass == g){
            glass = 0;
        }
        else if(mug == 0){
            mug += m;
        }else{
            if(glass == 0 && mug >= g){
                glass += g;
                mug -= g;
            }else{
                ll temp = g - glass;
                if(temp < mug){
                    mug -= temp;
                    glass = g;
                }
                else if(temp >= mug){
                    glass += mug;
                    mug = 0;
                }
            }
        }
    }
    cout << glass << " " << mug << nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}