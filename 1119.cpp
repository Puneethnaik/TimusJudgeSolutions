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
  int n, m;
  cin >> n >> m;
  double dp[1005][1005];
  dp[0][0] = 0;
  int k;
  cin >> k;
  int x, y;
  set<pair<int, int> > M;
  for(int i = 0 ; i < k ; i++){
      cin >> x >> y;
      M.insert(make_pair(x, y));
  }
  for(int i = 0 ; i <= m ; i++){
      dp[0][i] = 100 * i;
  }
  for(int i = 0 ; i <= n ; i++){
      dp[i][0] = 100 * i;
  }
  for(int i = 1 ; i <= n; i++){
      for(int j = 1 ; j <= m ; j++){
          dp[i][j] = min(dp[i - 1][j] + 100, dp[i][j - 1] + 100);
          if(M.find(make_pair(i, j)) != M.end()){
              dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (double)100 * sqrt(2));
          }
      }
  }
  cout << round(dp[n][m]) << endl;
  return 0;
}
