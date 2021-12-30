#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        ll a, b, n;
        cin >> n >> a >> b;

        ll s = 1;
        int flag = 0;

        if(a==1)
        {
            if((n-1)%b == 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
            continue;
        }
        while (s <= n)
        {
            if ((n - s) % b == 0)
            {
                flag = 1;
                break;
            }
            s = s * a;
        }
        if (flag)
        {
            cout << "Yes\n" ;
        }
        else
        {
            cout << "No\n";
        }
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}