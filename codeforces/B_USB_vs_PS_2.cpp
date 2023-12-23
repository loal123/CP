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
// Super is a cute girl
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vi u;
    vi p;
    int n;
    cin >> n;
    ll total = 0, counts = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x >> s;
        if (s == "USB")
            u.pb(x);
        else
            p.pb(x);
    }
    sort(all(u));
    sort(all(p));
    int ucur = 0, pcur = 0;
    while (ucur < a && ucur < SZ(u))
    {
        counts++;
        total += u[ucur];
        ucur++;
    }
    while (pcur < b && pcur < SZ(p))
    {
        counts++;
        total += p[pcur];
        pcur++;
    }
    for (int i = 0; i < c; i++)
    {
        int ucon = INF;
        int pcon = INF;

        if (ucur != SZ(u))
        {
            ucon = u[ucur];
        }
        if (pcur != SZ(p))
        {
            pcon = p[pcur];
        }
        if (ucon == INF && pcon == INF)
            break;
        if (pcon < ucon)
        {
            total += pcon;
            pcur++;
        }
        else
        {
            total += ucon;
            ucur++;
        }

        counts++;
    }
    cout << counts << ' ' << total;
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