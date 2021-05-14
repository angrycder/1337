#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;
    	vector<int> v;
    	for (int i = n; i >k ; --i)
    	{
    		v.push_back(i);
    	}
    	for (int i = (k+1)/2; i < k; ++i)
    	{
    		v.push_back(i);
    	}
    	cout<<v.size()<<endl;
    	for (int i = 0; i < v.size(); ++i)
    	{
    		cout<<v[i]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}
//g++ a1493.cpp -o run//
//https://codeforces.com/problemset/problem/1493/A//