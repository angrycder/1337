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
void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main()
{
    fast;
    int t;
    cin>>t;
    cout<<fixed<<setprecision(0);
    while(t--){
        co("##############");nl;
       int n;
       cin>>n;
       vector<int> a(n),b(n);
       input(a,n);
       input(b,n);
       deque<int>q1;
       deque<int>q2;
       sort(a.rbegin(),a.rend());
       sort(b.rbegin(),b.rend());
       int ans=0;
       int m=0,k=0;
       for(int i=0;i<(int)(n-floor(n/4));i++){
           m+=a[i];
           q1.push_back(a[i]);
           k+=b[i];
           q2.push_back(b[i]);
       }
       cout<<k<<" "<<m<<endl;
       if (m>=k)
       {
           co(0)nl;
       }
       else{
           int cnt = n-(int)floor(n/4);
           int r=0;
           while (k>m)
           {
               showdq(q1);nl;
               showdq(q2);nl;
               if (q1.size()>cnt){
                   int rem1 = q1[q1.size()-1];
                   q1.pop_back();
                   int rem2 = q2[q2.size()-1];
                   q2.pop_back();
                   k-=rem2;
                   m-=rem1;
                   m+=100;
                   q1.push_front(100);
                   q2.push_front(0);
               }
               else {
                   m+=100;
                   q1.push_front(100);
                   q2.push_front(0);
               }
               r++;
               n+=1;
               cnt = n-(int)floor(n/4);
           }
           co(r)nl;
           cout<<k<<" "<<m<<endl;
        }
       
    }
    return 0;
}