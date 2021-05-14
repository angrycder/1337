#include <bits/stdc++.h> 
using namespace std;

typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n,m;
    	cin>>n>>m;
    	vector<vector<int>>dp(n+1,vector<int>(m+1));
    	char tmp;
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < m; ++j)
    		{
    			cin>>tmp;
    			if (tmp=='*')
    			{
    				dp[i][j]=1;
    			}
    			else if (tmp=='.')
    			{
    				dp[i][j]=0;
    			}
    		}
    	}
        for (int r = n-1; r >= 0; r--)
    	{
    		for (int c = m-2; c >=1; c--)
    		{
    			if(dp[r][c]==1){
    				dp[r][c] = min(dp[r+1][c-1],min(dp[r+1][c],dp[r+1][c+1]))+1;
    			}
    		}
    	}
    	int ret = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < m; ++j)
    		{
    			ret+=dp[i][j];
    		}
    	}
    	cout<<ret<<endl;
    }
	return 0;
}

//g++ b1461.cpp -o run
//https://codeforces.com/problemset/problem/1461/B