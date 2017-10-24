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
    if(n == 1 || n == 0){
        if(n == 0)cout << "10\n";
        else
            cout << n << "\n";
        return 0;
    }
    string ans;
    for(int i = 9 ; i >= 2; i--){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
                ans += i + '0';
            }
        }
        //cout << n << endl;
    }
    if(n != 1){
        cout << "-1\n";
        return 0;
    }
    reverse(ans.begin(), ans.end());
    if(len(ans) == 0){
        cout << "-1\n";
    }
    else
        cout << ans << endl;
    return 0;
}
