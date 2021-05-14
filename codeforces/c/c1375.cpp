#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> v(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>v[i];
    	}
    	if(v[0]<v[n-1]){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
	return 0;
}

//g++ c1375.cpp -o run
//https://codeforces.com/problemset/problem/1375/C