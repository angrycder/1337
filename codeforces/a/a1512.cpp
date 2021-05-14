#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int j = 0;j<t;j++){
		int n;
		cin >> n;
		int tmp,c,k;
		cin>>c;
		cin>>tmp;
		if(c == tmp){
			for (int i = 2; i < n; ++i){
				cin>>k;
				if(k != c){
					cout<<i+1<<endl;
					continue;
				}
			}
		}
		else if(c != tmp){
			cin>>k;
			if(k == c){
				cout<<2<<endl;
			}
			else{
				cout<<1<<endl;
			}
			for (int i = 3; i < n; ++i){
				cin>>k;
			}
		}
		//cout<<c<<" "<<tmp<<" "<<k<<" "<<n<<endl;

	}
	return 0;
}
//g++ a1512.cpp -o run//
//https://codeforces.com/problemset/problem/1512/A//