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
int n;
#define Point pii
#define x first
#define y second

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

vi ch(vp v)
{

    int ind = int(min_element(all(v)) - v.begin());
    vi cand, hull{ind};
    for (int i = 0; i < SZ(v); i++)
    {
        if (v[i].x != v[ind].x || v[i].y != v[ind].y)
            cand.pb(i);
    }
    sort(all(cand), [&](int a, int b)
         {
        Point l = {v[a].x - v[ind].x , v[a].y - v[ind].y}, r = {v[b].x - v[ind].x, v[b].y - v[ind].y};
        ll prod = cross(l, r);
        return (prod != 0 ? prod > 0 : norm(l) < norm(r)); });

    for (auto c : cand)
    {
        while (SZ(hull) > 1 && loctest(v[c], v[end(hull)[-2]], v[hull.back()]) <= 0)
            hull.pop_back();
        hull.pb(c);
    }
    return hull;
}
// Super is the cutest girl
void solve()
{

    vector<Point> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].x >> v[i].y;
    }
    vi hull = ch(v);
    cout << SZ(hull) << '\n';

    for (auto i : hull)
        cout << v[i].x << " " << v[i].y << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    while (1)
    {
        cin >> n;
        if (n != 0)
            solve();
        else
            break;
    }
}