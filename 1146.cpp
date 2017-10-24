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
    int mat[n + 1][n + 1];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat[i + 1][j + 1];
        }
    }
    int f[n + 1][n + 1];
    memset(f, 0, sizeof f);
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            int ans = 0;
            for(int k = 1 ; k <= i; k++){
                for(int l = 1 ; l <= j ; l++){
                    ans += mat[k][l];
                }
            }
            f[i][j] = ans;
        }
    }
    int ans = INT_MIN;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            //cout << f[i][j] << " ";
            for(int p = 1 ; p <= i; p++){
                for(int q = 1 ; q <= j; q++){
                    ans = max(ans, f[i][j] - f[i][q - 1] - f[p - 1][j] + f[p - 1][q - 1]);
                }
            }
        }
        //cout << endl;
    }
    cout << ans << endl;
    return 0;
}
