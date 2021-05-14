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
    	ll n;
    	ci(n);
    	vector<ll> v(n);
    	ll k=0;
    	for (int i = 0; i < n; ++i)
    	{
    		ci(v[i]);
    		k+=v[i];
    	}
    	ll m;
    	ci(m);
    	vector<ll> u(m);
    	for (int i = 0; i < m; ++i)
    	{
    		ci(u[i]);
    		k-=u[i];
    	}
    	if (k==0)
    	{
    		ll i=0,j=0;
    		ll g = v[i],h=u[j];
    		vector<ll> r;
    		while(i<n && j<m){
    			if (g==h)
    			{
    				r.push_back(g);
    				i++;
    				j++;
    				g=v[i];
    				h=u[j];
    			}
    			else if (g>h)
    			{
    				j++;
    				h+=u[j];
    			}
    			else if (g<h)
    			{
    				i++;
    				g+=v[i];
    			}
    		}
    		co(r.size());nl;
    	}
    	else{
    		minus;nl;
    	}
    return 0;
}

//g++ d1036.cpp -o run
//https://codeforces.com/problemset/problem/1036/D