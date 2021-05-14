#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main()
{
        fast;
    	ll n,m;
    	cin>>n>>m;
        string p, q;
        cin >> p >> q;
 
        int maxi = 0;
        vector<int> p1(m), p2(m);
 
        int ff = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == q[ff])
            {
                p1[ff] = i;
                ff++;
            }
            if (ff == m)
            {
                break;
            }
        }
 
        ff = m - 1;
 
        for (int i = n - 1; i >= 0; i--)
        {
            if (p[i] == q[ff])
            {
                p2[ff] = i;
                ff--;
            }
            if (ff == -1)
            {
                break;
            }
        }
        for(int i=0;i<m-1;i++)
        {
            maxi = max(p2[i + 1] - p1[i], maxi);
        }
 
        cout << maxi;
 
        cout << "\n";
        return 0;
}

//g++ c1492.cpp -o run
//https://codeforces.com/problemset/problem/1492/C