#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int main()
{
	int t;
	cin >> t;
	
	while (t --)
	{
		int q , d;
		cin >> q >> d;
		
		for (int i = 1; i <= q; i ++ ) cin >> a[i];
		
		for (int i = 1; i <= q; i ++ )
		{
			if (a[i] >= 10 * d) 
			{
				cout << "YES" << endl;
				continue;
			}
			
			else
			{
				int fl = 0;
		 	 	for (int j = 1; j <= 9; j ++ )
		 	 	{
		 	 		int m = d * j;
		 	 		if (a[i] - m >= 0 && (a[i] - m) % 10 == 0) // Notice a [i] - m must be> = 0 otherwise it is wrong
		 	 		{
		 	 			cout << "YES" << endl;
		 	 			fl = 1;
		 	 			break;
		  		    }
			    }
			    
			    if (!fl) cout << "NO" << endl;
			}
		}
		
	}
	return 0;
}