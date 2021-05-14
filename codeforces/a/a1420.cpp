#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    bool ret = false;
    long long int prev,now;
    cin>>prev;
    for (int i = 1; i < n; ++i)
    {
    	cin>>now;
    	if(prev > now){
    		prev=now;
    		continue;
    	}
    	else{
    	    ret=true;	
    	}

    }
    if(ret){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
    }
	return 0;
}

//g++ a1420.cpp -o run//
//https://codeforces.com/problemset/problem/1420/A//