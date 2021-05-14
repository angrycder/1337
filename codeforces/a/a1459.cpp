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
    	string a,b;
    	cin>>a>>b;
    	if(a == b){
    		cout<<"EQUAL"<<endl;
    	}
    	else{
    		int x=0,y=0;
    		for (int i = 0; i < n; ++i)
    		{
    			if(a[i]>b[i]){
    				x++;
    			}
    			else if(b[i]>a[i]){
    				y++;
    			}
    			else{
    				continue;
    			}
    		}
    		if(x>y){
    			cout<<"RED"<<endl;
    		}
    		else if(y>x){
    			cout<<"BLUE"<<endl;
    		}
    		else{
    			cout<<"EQUAL"<<endl;
    		}
    	}
    }
	return 0;
}
//g++ a1459.cpp -o run//
//https://codeforces.com/problemset/problem/1459/A//