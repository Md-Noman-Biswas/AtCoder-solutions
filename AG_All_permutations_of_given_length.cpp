#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
const int N = 12;
int arr[N];

void solve(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        arr[i] = i;
    }
    do{
        for(int i=1; i<=n; i++){
            cout << arr[i];
        }
        cout << "\n";
    }while(next_permutation(arr+1, arr+n+1));
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}