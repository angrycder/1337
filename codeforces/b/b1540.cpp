#include <bits/stdc++.h> 
using namespace std;

typedef long long int  lli;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int a,b,c;
    	cin>>a>>b>>c;
    	cout<<string(1,'1')+ string(a-1,'0')<<" "<<string(b - c + 1,'1') +  string(c - 1,'0')<<endl;
    }
	return 0;
}

//g++ b1540.cpp -o run
//https://codeforces.com/problemset/problem/1540/B