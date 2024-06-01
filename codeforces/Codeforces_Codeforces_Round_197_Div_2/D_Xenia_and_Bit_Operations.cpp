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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
const int maxn = 1 << 17;
int t[4 * maxn];
int depth;
int n, q;
void build(int a[], int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = a[tl];
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        if (__lg(v) % 2 != n % 2)
        {
            t[v] = t[v * 2] | t[v * 2 + 1];
        }
        else
            t[v] = t[v * 2] ^ t[v * 2 + 1];
    }
}
void update(int v, int tl, int tr, int pos, int val)
{
    if (tl == tr)
    {
        t[v] = val;
    }
    else
    {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v * 2, tl, tm, pos, val);
        else
            update(v * 2 + 1, tm + 1, tr, pos, val);

        if (__lg(v) % 2 != n % 2)
        {
            t[v] = t[v * 2] | t[v * 2 + 1];
        }
        else
            t[v] = t[v * 2] ^ t[v * 2 + 1];
    }
}

void solve()
{

    cin >> n >> q;

    int actualn = (1 << n);
    int a[actualn];
    for (int i = 0; i < actualn; i++)
    {
        cin >> a[i];
    }
    build(a, 1, 0, actualn - 1);
    while (q--)
    {
        int p, b;
        cin >> p >> b;
        p--;
        update(1, 0, actualn - 1, p, b);
        cout << t[1] << endl;
    }
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