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

bool isPerfectSquare(ll x)
{ 
    ll left = 1, right = x;
   
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        
        // Check if mid is perfect square
        if (mid * mid == x)
        {
            return true;
        }
         
        // Mid is small -> go right to increase mid
        if (mid * mid < x)
        {
            left = mid + 1;
        }
       
        // Mid is large -> to left to decrease mid
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
    ll n;
    ci(n);
    if (n%2==1)
    {
    	cn;
    }
    else 
    {
    	bool o=false,f=false;
    	if (n%4==0)
    	{
    		f = isPerfectSquare(n/4);
    	}
    	if (n%2==0)
    	{
    		o = isPerfectSquare(n/2);
    	}
    	if (o||f)
    	{
    		cy;
    	}
    	else{
    		cn;
    	}
    	
    }
}
    return 0;
}

//g++ b1515.cpp -o run
//https://codeforces.com/problemset/problem/1515/B