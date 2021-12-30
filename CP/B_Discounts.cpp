#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main()
{
    // seive();

    ll tc, num, t = 1, pownum;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    ll arr[num];

    ll sum = 0;
    for(ll i = 0; i < num; i++)
        sc1(arr[i]), sum += arr[i];

    sort(arr, arr + num, greater<ll>() );

    sc1(tc);

    while (tc--){

        ll pos;
        sc1(pos);

        pf1(sum - arr[pos - 1]);
    }

    return 0;
}