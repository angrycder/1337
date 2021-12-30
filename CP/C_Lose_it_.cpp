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
    int t=1;
    //cin>>t;
    cout<<fixed<<setprecision(0);
    while(t--){
            vector<int> p({4, 8, 15, 16, 23, 42});

            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
                a[i] = lower_bound(p.begin(), p.end(), a[i]) - p.begin();
            }
            
            vector<int> seq(6);
            for (int i = 0; i < n; ++i) {
                if (a[i] == 0) {
                    ++seq[0];
                } else {
                    if (seq[a[i] - 1] > 0) {
                        --seq[a[i] - 1];
                        ++seq[a[i]];
                    }
                }
            }
            
            cout << n - seq[5] * 6 << endl;
    }
    return 0;
}