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
int main()
{
    int n;
    cin >> n;
    ll dp[505][505] = {0};
    dp[3][2] = 1;
    for(int i = 4 ; i <= 500; i++){
        for(int j = 2 ; j <= 500; j++){
            if(i - j >= 2)
                dp[i][j] += dp[i - j][j - 1] + dp[i - j][j];
        }
    }
    ll ans = 0;
    for(int i = 2 ; i <= 500; i++){
        ans += dp[n][i];
    }
    cout << ans << endl;
    return 0;
}
