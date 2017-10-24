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
    vector<int> ans(1000000);
    ans[0] = 0, ans[1] = 1;
    for(int i = 0 ; i < 1000000 ; i++){
        if(i % 2){
            ans[i] = ans[i / 2] + ans[i / 2 + 1];
        }
        else {
            ans[i] = ans[i / 2];
        }
    }
    for(int i = 1 ; i < 1000000; i++){
        ans[i] = max(ans[i - 1], ans[i]);
    }
    int n;
    cin >> n;
    while(n){
        cout << ans[n] << endl;
        cin >> n;
    }
    return 0;
}
