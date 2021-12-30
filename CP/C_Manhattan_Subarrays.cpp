#include <bits/stdc++.h>
using namespace std;
int a[200010];
bool check(int x,int y,int z)
{
	return !((a[x]<=a[y] && a[y]<=a[z]) || (a[x]>=a[y] && a[y]>=a[z]));
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		for (int i=1;i<=n;++i) scanf("%d",&a[i]);
		int ans=n+(n-1);
		for (int i=1;i<=n-2;++i)
			if (check(i,i+1,i+2)) ++ans;
		for (int i=1;i<=n-3;++i)
			if (check(i,i+1,i+2) && check(i+1,i+2,i+3) && check(i,i+2,i+3) && check(i,i+1,i+3)) ++ans;
		printf("%d\n",ans);
	}
	return 0;
}
