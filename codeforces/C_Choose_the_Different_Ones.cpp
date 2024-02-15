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
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    vi b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    int countsa[k + 1];
    int countsb[k + 1];
    memset(countsa, 0, sizeof(countsa));
    memset(countsb, 0, sizeof(countsb));
    for (auto i : a)
    {
        if (i <= k)
            countsa[i]++;
    }
    for (auto i : b)
    {
        if (i <= k)
            countsb[i]++;
    }
    int ahas = 0;
    int bhas = 0;
    int both = 0;
    for (int i = 1; i <= k; i++)
    {
        if (countsa[i] && countsb[i])
            both++;
        else
        {
            if (countsa[i])
                ahas++;
            if (countsb[i])
                bhas++;
        }
    }
    bool can = true;
    if (ahas < k / 2)
    {
        if (both >= k / 2 - ahas)
        {
            both -= (k / 2 - ahas);
        }
        else
            can = false;
    }
    if (bhas < k / 2)
    {
        if (both >= k / 2 - bhas)
        {
            both -= (k / 2 - bhas);
        }
        else
            can = false;
    }
    cout << (can ? "YES" : "NO") << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}