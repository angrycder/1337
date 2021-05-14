#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	long long int n,x,l=0,h=0,tmp;
    	cin>>n>>x;
    	for (long long int i = 0; i < n; ++i)
    	{
    		cin>>tmp;
    		l+= tmp;
    		h+= (tmp+x-1)/x;
    	}
    	cout<<(l+x-1)/x<<" "<<h<<endl;
    }
	return 0;
}

//g++ a1471.cpp -o run//
//https://codeforces.com/problemset/problem/1471/A//