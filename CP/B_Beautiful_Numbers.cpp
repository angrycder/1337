#include <bits/stdc++.h>

using namespace std;

const int M = 2e5 + 239;

int n, p[M], x;

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        p[x - 1] = i;
    }
    int l = n;
    int r = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        l = min(l, p[i]);
        r = max(r, p[i]);
        if (r - l == i)
            ans += '1';
        else
            ans += '0';
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}