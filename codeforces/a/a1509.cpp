#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		int k;
		vector<int> odd;
	    vector<int> even;
		for (int j = 0; j < n; ++j)
		{
			cin>>k;
			if(k%2 == 0){
				even.push_back(k);
			}
			if(k%2 != 0){
				odd.push_back(k);
			}
		}
		odd.insert(odd.end(),even.begin(),even.end());
		for(int i = 0; i < odd.size(); i++){
			cout << odd[i] << ' ';
		}
		cout<<endl;
	}
	return 0;
}

//g++ a1509.cpp -o run//
//https://codeforces.com/problemset/problem/1514/A//