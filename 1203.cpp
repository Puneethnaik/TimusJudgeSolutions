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
struct Job{
    int s, e;
    Job(){
        s = 0, e = 0;
    }
    Job(int a, int b){
        s = a, e = b;
    }
};
bool func(Job a, Job b){
    if(a.e == b.e){
        return a.s < b.s;
    }
    return a.e < b.e;
}
int main()
{
    int n;
    cin >> n;
    vector<Job> arr;
    set<pair<int, int> > job;
    for(int i = 0 ; i < n ; i++){
        int a, b;
        cin >> a >> b;
        Job l = Job(a, b);
        arr.push_back(l);
    }
    int cnt = 0;
    sort(arr.begin(), arr.end(), func);
    for(int i = 1 ; i < arr.size() ; i++){
        if(arr[0].e < arr[i].s){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
