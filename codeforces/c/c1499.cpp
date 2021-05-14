#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, ans = LLONG_MAX, pre = 0;
        cin >> n;
        vector<ll> c(n);
        priority_queue<ll, vector<ll>, greater<ll>> epq, opq;
        for (ll i = 0; i < n; ++i)
        {
            cin >> c[i];
            i % 2 ? opq.push(c[i]) : epq.push(c[i]);
            pre += c[i];
            if (i)
                ans = min(ans, pre + (n - (ll)epq.size()) * epq.top() + (n - (ll)opq.size()) * opq.top());
        }
        cout << ans << '\n';
    }
    return 0;
}
//g++ c1499.cpp -o run
//https://codeforces.com/problemset/problem/1499/C