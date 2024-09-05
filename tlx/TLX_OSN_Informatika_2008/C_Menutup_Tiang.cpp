#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>

#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;

#define Point pii
#define x first
#define y second
vector<Point> v;
// Point operator-(const Point &l, const Point &r)
// {
//     return Point({l.x - r.x, l.y - r.y});
// }
ll norm(Point p)
{
    return p.x * p.x + p.y * p.y;
}
ll cross(Point a, Point b)
{
    return 1LL * a.x * b.y - a.y * b.x;
}

using vp = vector<Point>;
int loctest(Point p0, Point p1, Point p2)
{
    ll ans = 1LL * (p0.y - p1.y) * (p2.x - p1.x) - 1LL * (p0.x - p1.x) * (p2.y - p1.y);
    if (ans == 0)
        return 0;
    else if (ans > 0)
        return 1;
    else
        return -1;
}
int s, f, n;
double d;
bool comp(int a, int b) { return v[a].x <= v[b].x; }
vi ch(vp v)
{

    int ind = 0;
    vi cand, hull{ind};
    for (int i = 0; i < SZ(v); i++)
    {
        if (v[i].x != v[ind].x || v[i].y != v[ind].y)
            cand.pb(i);
    }
    // sort(all(cand), [&](int a, int b)
    //      {
    //     Point l = {v[a].x - v[ind].x , v[a].y - v[ind].y}, r = {v[b].x - v[ind].x, v[b].y - v[ind].y};
    //     ll prod = cross(l, r);
    //     return (prod != 0 ? prod > 0 : norm(l) < norm(r)); });
    sort(all(cand), comp);

    for (auto c : cand)
    {
        while (SZ(hull) > 1 && loctest(v[c], v[end(hull)[-2]], v[hull.back()]) >= 0)
            hull.pop_back();
        hull.pb(c);
    }
    return hull;
}
// Super is the cutest girl

void solve()
{
    cin >> s >> f >> n >> d;

    v.pb({s, 0});
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        Point xp, yp;
        xp.y = yp.y = r;
        xp.x = l - (double)d / 2;
        yp.x = l + (double)d / 2;
        v.pb(xp);
        v.pb(yp);
    }
    v.pb({f, 0});
    vi hull = ch(v);
    // cout << SZ(hull) << '\n';

    int xd = SZ(hull);
    ld ans = 0;
    for (int i = 0; i < xd - 1; i++)
    {
        ans += 1LL * hypot(v[hull[i]].x - v[hull[i + 1]].x, 1LL * v[hull[i]].y - v[hull[i + 1]].y);
    }
    cout << fixed << setprecision(3) << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
}