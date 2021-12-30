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
int main()
{
    fast;
    int t;
    cin>>t;
    cout<<fixed<<setprecision(0);
    while(t--){
       int n;
       ci(n);
       vector<int> a(n),b(n);
       input(a,n);
       input(b,n);
       int s1 = accumulate(a.begin(),a.end(),0);
       int s2 = accumulate(b.begin(),b.end(),0);
       vector<int> p,m;
       if(s1!=s2){
           minus;
           continue;
       }
       for (int i = 0; i < n; i++)
       {
           if (a[i]<b[i])
           {
               for (int j = 0; j < b[i]-a[i]; j++)
               {
                   m.push_back(i+1);
               }
           }
           if (b[i]<a[i]){
               for (int j = 0; j < a[i]-b[i]; j++)
               {
                   p.push_back(i+1);
               }
           }           
       }
       int si = m.size();
       co(si);nl;
       for (int i = 0; i < si ;i++)
       {
           cout<<p[i]<< " " << m[i]<<endl;
       }
       
    }
    return 0;
}