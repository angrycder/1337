#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
    int t;
    cin>>t;
    while(t--){  
    	int n,x;
    	cin>>n>>x;
    	vector<int> w(n);
    	int k =x;
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>w[i];
    		k-=w[i];
    	}
    	if (k==0)
    	{
    		cn;nl;
    	}
    	else{
    		int tmp=0;
    		//sort(w.rbegin(),w.rend());
    		for (int i = 0; i < n-1; ++i)
    		{
    			if (tmp+w[i]==x)
    			{
    				swap(w[i],w[i+1]);
    				tmp+=w[i];
    			}
    			tmp+=w[i];
    		}
    		cy;
    		output(w,n);nl;
    	}

    }
    return 0;
}

//g++ a1515.cpp -o run
//https://codeforces.com/problemset/problem/1515/A