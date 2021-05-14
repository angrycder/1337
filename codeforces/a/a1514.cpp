#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool isPerfectSquare(int x)
{ 
    long long left = 1, right = x;
   
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        
        // Check if mid is perfect square
        if (mid * mid == x)
        {
            return true;
        }
         
        // Mid is small -> go right to increase mid
        if (mid * mid < x)
        {
            left = mid + 1;
        }
       
        // Mid is large -> to left to decrease mid
        else
        {
            right = mid - 1;
        }
    }
    return false;
}


int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i){
		int n;
		bool ret = true;
		cin>>n;
		int arr[n]={};
		for (int j = 0; j < n; ++j)
		{
			cin>>arr[i];
			ret &= isPerfectSquare(arr[i]);
		}
		if(ret){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
		
	}
	return 0;
}

//g++ a1508.cpp -o run//
//https://codeforces.com/problemset/problem/1514/A//
