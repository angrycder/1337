#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include<iomanip>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
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
#define cy             cout<<"YES"<<endl
#define cn             cout<<"NO"<<endl
#define nl             cout<<endl
#define minus          cout<<"-1"<<endl;
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

bool win(int pos,vector<ll> x){
    ll power = x[pos];
    for (int i = 0; i < x.size(); i++)
    {
        if (i==pos)
        {
            continue;
        }
        else if (power<x[i])
        {
            return false;
        }
        power+=x[i];
    }
    return true;
}
void solve(){
       int n;
       ci(n);
       vector<ll> m(n);
       ll tmp;
       for (int i = 0; i < n; i++)
       {
           ci(m[i]);
       }
       vector<ll> v= m;
       sort(m.begin(),m.end());
       int l = -1,r = n-1;
       while(r-l>1){
           int mid = (l+r)/2;
           if (win(mid,m))
           {
               r=mid;
           }
           else{
               l=mid;
           }
       }
       vector<int> re;
       for (int i = 0; i < n; i++)
       {
           if (v[i]>=m[r])
           {
               re.push_back(i+1);
           }
       }
       co(re.size());nl;
       output(re,re.size());nl;
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