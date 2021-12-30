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
#include <stack>
#include <map>
#include <set>
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
	int n;
	cin >> n;
	int sum = 0;
	vector<int> even, odd;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		sum += x;
		if (x & 1) odd.push_back(x);
		else even.push_back(x);
	}
	
	sort(odd.rbegin(), odd.rend());
	sort(even.rbegin(), even.rend());
	int k = min(odd.size(), even.size());
	int rem = sum;
	rem -= accumulate(odd.begin(), odd.begin() + k, 0);
	rem -= accumulate(even.begin(), even.begin() + k, 0);
	if (int(odd.size()) > k) {
		rem -= odd[k];
	}
	if (int(even.size()) > k) {
		rem -= even[k];
	}
	
	cout << rem << endl;
	
	return 0;
}