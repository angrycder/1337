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

ll fact(ll x){
	for (int i = 2; i <= sqrt(x); ++i)
	{
		if (x%i==0)
		{
			return x/i;
		}
	}
	return 1;
}

int main()
{
    fast;
    cout << fixed<<setprecision(0);;
    int t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	ll h=n;
    	vector<int> u;
    	bool k=true;
    	for (ll i = 0; n>0; ++i)
    	{
    		u.push_back(n%2);
    		k&=n%2;
    		n=n/2;
    	}
    	if (k)
    	{
    		co(fact(h));nl;
    	}
    	else{
    		co(pow(2,u.size())-1);nl;
    	}   
    }
    return 0;
}

//g++ c1100.cpp -o run
//https://codeforces.com/problemset/problem/1100/C