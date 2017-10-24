/*template created by */
#include <bits/stdc++.h>
#define SI set<int>
#define VI vector<int>
#define ull unsigned long long
#define inint(a) scanf("%d",&a)
#define input(a) cin>>a
#define ll long long
#define f first
#define s second
#define len(s) s.length()
#define FOR(i, a, b) for(i = a ; i < b ; i++)
using namespace std;
const int maxn = 505;
const int inf = 1e9 + 7;
vector<int> cost(maxn);
vector<vector<ll> > dp(maxn, vector<ll> (maxn, -1));
int d(int l, int r){
    ll a[2] = {0};
    for(int i = l ; i <= r; i++){
        a[cost[i]]++;
    }
    return a[0] * a[1];
}
int f(int n, int last, int k){

    if(n == 0)return inf;
    //cout << n << " " << k << " " << last << " " << dp[n][k] << endl;
    if(dp[n][k] != -1)return dp[n][k];
    if(k == 1){
        return d(1, n);
    }

    ll ans = dp[n][k];
    ans = min(f(n - 1, last, k), f(n - 1, n - 1, k - 1) + d(n, last));
    //cout << n << " " << k << " " << last << " " << "ans : " << ans << endl;
    return (dp[n][k] = ans);
}
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        cin >> cost[i + 1];
    }
    //cout << d(1, n) << endl;

    cout << f(n, n, k) << endl;
    return 0;
}
