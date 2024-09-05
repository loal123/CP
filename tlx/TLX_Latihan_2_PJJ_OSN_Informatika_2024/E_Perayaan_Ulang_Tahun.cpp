#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
struct Point
{
    int x, y;
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    friend istream &operator>>(istream &in, Point &p)
    {
        int x, y;
        in >> p.x >> p.y;
        return in;
    }
};
// EndCodeSnip

void solve()
{
    priority_queue<ll> pq;

    int n, k;
    cin >> n >> k;
    vector<Point> points(n);
    for (auto &p : points)
    {
        cin >> p;
    }
    if (n >= 10000)
    {
        for (int cnt = 3; cnt < min(n, 7); cnt++)
        {
            for (int i = 0; i < n; i++)
            {
                ll area = 0;
                for (int j = i; j < i + cnt - 1; j++)
                    area += (1LL * points[j % n].x * points[(j + 1) % n].y - 1LL * points[j % n].y * points[(j + 1) % n].x);

                area += (1LL * points[(i + cnt - 1) % n].x * points[i % n].y - 1LL * points[(i + cnt - 1) % n].y * points[i % n].x);
                pq.push(area);
            }
        }
    }
    else
    {
        for (int cnt = 3; cnt < n; cnt++)
        {
            for (int i = 0; i < n; i++)
            {
                ll area = 0;
                for (int j = i; j < i + cnt - 1; j++)
                    area += (1LL * points[j % n].x * points[(j + 1) % n].y - 1LL * points[j % n].y * points[(j + 1) % n].x);

                area += (1LL * points[(i + cnt - 1) % n].x * points[i % n].y - 1LL * points[(i + cnt - 1) % n].y * points[i % n].x);
                pq.push(area);
            }
        }
    }
    k--;
    while (k--)
    {
        pq.pop();
    }
    cout << abs(pq.top());
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}
