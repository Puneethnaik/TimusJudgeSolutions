/*template created by */
#include <bits/stdc++.h>
#define SI set<int> 
#define VI vector<int> 
#define ull unsigned long long 
#define inint(a) scanf("%d",&a)
#define input(a) cin>>a
#define ll long long 
#define print(a) cout<<a
#define printn(a) cout<<a<<"\n"
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
bool Miller(ull p,int iteration){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    ull s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        ull a=rand()%(p-1)+1,temp=s;
        ull mod=pow(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}
using namespace std;
int main()
{
	ull num;
	vector<double> ans;
	while(scanf("%llu", &num) != EOF){
		ans.push_back(sqrt(num));
	}	
	reverse(ans.begin(), ans.end());
	cout << fixed << setprecision(4);
	for(int i = 0 ; i < ans.size(); i++)
		cout << ans[i] << "\n";
	return 0;
}o