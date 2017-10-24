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
    vector<int> dp(n + 1);
    dp[1] = 1, dp[2] = 1, dp[3] = 2;
    for(int i = 4 ; i <= n ; i++){
        dp[i] = dp[i - 1] + dp[i - 3] + 1;
    }
    cout << dp[n] << endl;
    return 0;
}
