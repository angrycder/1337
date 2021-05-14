#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string n;
    cin>>n;
    vector<ll> v;
    int s=0;
    for(char x :n){
    	v.push_back(x-48);
    	s=max(s,x-48);
    }
    vector<int> h(s,0);
    cout<<s<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
    	for (int j = 0; j < v[i]; ++j)
    	{
    		h[j]+=pow(10,n.length()-i-1);
    	}
    }
    for (int i = 0; i < s; ++i)
    {
    	cout<<h[i]<<" ";
    }
	return 0;
}

//g++ b538.cpp -o run
//https://codeforces.com/problemset/problem/538/B