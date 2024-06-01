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
void solve()
{
    int n, k, PB, ps;
    cin >> n >> k >> PB >> ps;
    vl p(n);
    vl a(n);
    PB--;
    ps--;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vl bob;
    vl sarah;
    vector<bool> vis(n + 1, 0);
    int curr = PB;
    while (!vis[curr])
    {
        vis[curr] = 1;
        bob.pb(curr);
        curr = p[curr];
    }
    vis = vector<bool>(n + 1, 0);
    curr = ps;
    while (!vis[curr])
    {
        vis[curr] = 1;
        sarah.pb(curr);
        curr = p[curr];
    }
    ll bobm = 0;
    ll sarahm = 0;
    ll currb = 0;
    ll currs = 0;
    int bobsz = SZ(bob);
    int sarahsz = SZ(sarah);
    for (int i = 0; i < min(bobsz, k); i++)
    {
        bobm = max(bobm, currb + a[PB] * (k - i));
        currb += a[PB];
        PB = p[PB];
    }
    for (int i = 0; i < min(sarahsz, k); i++)
    {
        sarahm = max(sarahm, currs + a[ps] * (k - i));
        currs += a[ps];
        ps = p[ps];
    }
    if (bobm > sarahm)
    {
        cout << "Bodya" << '\n';
    }
    else if (bobm < sarahm)
        cout << "Sasha" << '\n';
    else
        cout << "Draw\n";
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