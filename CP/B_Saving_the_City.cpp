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
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
 
        int first=-1;
        int last=-1;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')
            {
                first =i;
                break;
            }
        }
        for (int i = s.size()-1; i >=0; i--)
        {
            if (s[i] == '1')
            {
                last = i;
                break;
            }
        }
 
        if(first==last && first == -1)
        {
            cout<<0<<"\n";
            continue;
        }
        int ans=a;
        int cha=INT_MAX;
        for (int i = first; i <= last; i++)
        {
            int c=0;
            while(s[i]=='0')
            {
                c++;
                i++;
            }
            ans += min(a,b*c);
        }
        cout<<ans<<"\n";
    }
    return 0;
}