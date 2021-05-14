#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n,x,tmp,ret=0;
    	cin>>n>>x;
    	int k = max(n+x,100);
    	bool arr[k];
    	for (int i = 0; i < k; ++i)
    	{
    		arr[i]=false;
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>tmp;
    		arr[tmp-1]=true;
    	}
    	int i =0;
    	while(x){
    		if(!arr[i]){
    			x--;
    			arr[i]=true;
    		}
    		i++;
    	}
    	/*for (int i = 0; i < k; ++i)
    	{
    		cout<<arr[i]<<" ";
    	}
    	cout<<endl;*/
    	while(arr[ret]){
    		ret++;
    		if(ret ==k){
    			break;
    		}
    	}
    	cout<<ret<<endl;

    }
	return 0;
}

//g++ a1330.cpp -o run//
//https://codeforces.com/problemset/problem/1330/A//