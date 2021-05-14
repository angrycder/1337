#include <bits/stdc++.h> 
using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int i = 0;i<t;i++){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		if(2*k+1>n){
			cout<<"NO"<<endl;
			continue;
		}
		else{
			string a = "",b = "";
			for (int j = 0; j < k; j++)
			{
				a+=s[j];
			}
			for (int j = n-1; j >= n-k; j--)
			{
				b+=s[j];
			}
			if(a==b){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
//g++ a1496.cpp -o run//
//https://codeforces.com/problemset/problem/1496/A//