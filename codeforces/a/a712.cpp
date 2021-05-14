#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long int t;
    cin>>t;
    long long int prev,now;
    cin>>prev;
    for (long long int i = 1; i < t; ++i)
    {
    	cin>>now;
    	cout<<prev+now<<" ";
    	prev = now;
    }
    cout<<prev;
	return 0;
}
//g++ a712.cpp -o run//
//https://codeforces.com/problemset/problem/712/A//