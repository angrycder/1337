#include <bits/stdc++.h>

using namespace std;

#define fast           ios_base::sync_with_stdio(false);

#define sz(a) int((a).size())
#define forn(i, n) for (int i = 0; i < int(n); ++i)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c;
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    forn(i, n) if (!b[i])
        c.push_back(a[i]);
    sort(c.rbegin(), c.rend());
    int j = 0;
    forn(i, n) {
        if (b[i]) cout << a[i] << ' ';
        else cout << c[j++] << ' ';
    }
    cout << '\n';
}


int main()
{
    fast;
    int t;
    cin>>t;
    cout<<fixed<<setprecision(0);
    while(t--){
       solve();
    }
    return 0;
}