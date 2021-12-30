#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        long long int sum = 0;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
            sum = sum + x;
        }
        long long c1 = ceil((sum *1.0) / (n - 1));
 
        long long s = c1 * (n - 1);
 
        sort(v.begin(), v.end());
 
        if (v[n - 1] > c1)
            s = v[n - 1] * (n - 1);
            
        cout << s-sum << endl;
    }
}