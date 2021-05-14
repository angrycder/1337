#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	long long int x,y;
    	cin>>x>>y;
    	if(x-y > 1){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
	return 0;
}

//g++ a1238.cpp -o run//
//https://codeforces.com/problemset/problem/1238/A//