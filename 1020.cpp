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
#define PI 3.141519
class vec{
public:
    double x, y, z;
    double mag(){
        return sqrt(x * x + y * y + z * z);
    }
    double cross(vec a){
        return x * a.x + y * a.y + z * a.z;
    }
    double angle(vec a){
        return acos(cross(a) / (a.mag() * mag()));
    }
    vec(double p, double q, double r = 0){
        x = p, y = q, z = r;
    }
};
double dist(pair<double, double> a, pair<double, double> b){
    return (a.f - b.f) * (a.f - b.f) + (a.s - b.s) * (a.s - b.s);
}
double get(pair<double, double> a, pair<double, double> b, pair<double, double> c){
    vec l(b.f - a.f, b.s - a.s), r(c.f - b.f, c.s - b.s);
    return l.angle(r);
}
int main()
{
  int n;
  double r;
  cin >> n >> r;
  vector<pair<double, double> > points(n);
  for(int i = 0 ; i < n ; i++){
      cin >> points[i].f >> points[i].s;
  }
  double ans = 0.0;
  for(int i = 0 ; i < n ; i++){
      ans += sqrt(dist(points[i], points[(i + 1 + n) % n]));
      double angle = get(points[i], points[(i - 1 + n) % n], points[(i + 1 + n) % n]);
  }
  /*
  if(n == 1 || n == 2){
    ans += 2 * PI * r;
  }
  else
    ans += (n - 2) * PI * r;*/
  cout << ans << endl;
  return 0;
}
