#include <bits/stdc++.h>
#define ll long long
#define fr first
#define sc second
#define int ll

using namespace std;
const int MN = 2e5+7;

vector<int> v[MN];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 0; i <= n; i++)v[i].clear();
        ll a[n], w[k];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < k; i++){
            cin >> w[i];
        }
        sort(w, w+k);
        sort(a, a+n);
        for(int i = 0; i < k/2; i++)swap(w[i], w[k-i-1]);
        int po = 0;
        for(int i = 0; i < n-k; i++){
            while(w[po] == v[po].size()+1)po++;
            v[po].push_back(a[i]);
        }
        ll ans = 0;
        int qf = 1;
        for(int i = 0; i < k; i++){
            ans += a[n-i-1];
            if(v[i].size())ans += v[i][0];
            else ans += a[n-qf], qf++;
        }
        
        cout << ans << '\n';
    }
}