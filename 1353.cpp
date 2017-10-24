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
    int s;
    cin >> s;
    vector<int> dp(82);
    for(int d = 0 ; d <= 9; d++){
        dp[d] = 1;
    }
    for(int i = 2 ; i <= 9; i++){
        for(int sum = 81; sum > 0; sum--){
            for(int d = 1 ; d <= 9 ; d++){
                if(sum >= d){
                    dp[sum] += dp[sum - d];
                }
            }
        }
    }
    cout << dp[s] + (s == 1) << endl;
    return 0;
}
