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
const ll mod = 1e9 + 7;
int main()
{
    int n;
    vector<int> a(2);
    cin >> n >> a[0] >> a[1];
    ll dp[n + 1][2];
    dp[0][0] = dp[0][1] = 1;
    for(int i = 1; i <= n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            dp[i][j] = 0;
            for(int k = i - 1 ; k >= max(0, i - a[j]); k--){
                dp[i][j] = dp[i][j] % mod + dp[k][1 - j] % mod;
                dp[i][j] %= mod;
            }
        }
    }
    cout << (dp[n][0] + dp[n][1] + mod) % mod << endl;
    return 0;
}
