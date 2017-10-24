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
#define range(a,b,n) for(int i=a;i<b;i+=n)
ull mulmod(ull a,ull b,ull c){
    ull x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
ull pow(ull a, ull b, ull c){
    ull x = 1, y = a;

    while(b>0){
        if(b&1) x = mulmod(x,y,c);
        y = mulmod(y,y,c);
        b >>= 1;
    }

    return x;
}
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<ll> fib(n + 1);
  fib[0] = 2, fib[1] = 2;
  for(int i = 2 ; i <= n; i++){
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  cout << fib[n - 1] << "\n";
  return 0;
}
