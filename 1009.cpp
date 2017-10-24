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
    int n, k;
    cin >> n >> k;
    vector<vector<int> > ans(n + 1, vector<int> (k, 0));
    for(int i = 0 ; i < k ; i++){
        ans[1][i] = 1;
    }
    for(int i = 2; i <= n ; i++){
        for(int j = 0 ; j < k ; j++){
            ans[i][j] = 0;
            for(int l = 0 ; l < k ; l++){
                if(j == l && l == 0);
                else
                    ans[i][j] += ans[i - 1][l];
            }
        }
    }
    int res = 0;
    for(int i = 1 ; i < k ; i++){
        res += ans[n][i];
    }
    cout << res << endl;
    return 0;
}
