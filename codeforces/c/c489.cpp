#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int m,s;
    cin>>m>>s;
    if (s==0)
    {
    	cout << (m == 1 ? "0 0" : "-1 -1") << endl;
    }
    else if (s>9*m&& s>1)
    {
    	cout<<"-1 -1"<<endl;
    }
    else{
    	vector<int> v(m,0);  	
    	int n=s/9,k=s%9;
    	for (int i = 0; i < n; ++i)
    	{
    		v[i]+=9;
    	}
    	v[n]+=k;
    	vector<int> u(v.rbegin(),v.rend());
    	int j=0;
    	while(u[j]==0){
    		j++;
    	}
    	u[0]++;
    	u[j]--;
    	for (int i = 0; i < u.size(); ++i)
    	{
    		cout<<u[i];
    	}
    	cout<<" ";
    	for (int i = 0; i < v.size(); ++i)
    	{
    		cout<<v[i];
    	}

    }
	return 0;
}

//g++ c489.cpp -o run
//https://codeforces.com/problemset/problem/489/C