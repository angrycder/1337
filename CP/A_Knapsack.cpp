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

void solve(){
           ll n,w,tmp;
       cin>>n>>w;
       vector<pair<ll,ll>> v;
       bool under = false;
       int under_i;
       for (size_t i = 0; i < n; i++)
       {
           ci(tmp);
           if (tmp>w)
           {
               continue;
           }
           else if (tmp<=w && 2*tmp >= w)
           {
               under=true;
               under_i= i;
           }
           else 
           {
               v.push_back(make_pair(tmp,i+1));
           }
       }
       if (under)
       {
           co(1);nl;
           co(under_i+1);nl;
           return;
       }
       else{
            ll k =0;
            vector<int> re;
            for (int i = 0; i < v.size(); i++)
            {
                if (2*k<w)
                {
                    k+=v[i].first;
                    re.push_back(v[i].second);
                }
                if(2*k>=w)
                {
                    int j =re.size();
                    co(j);nl;
                    output(re,j);nl;
                    return;
                }
            }
            minus;
            return;
       }
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