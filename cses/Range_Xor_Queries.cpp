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
    int n, q;
    cin >> n >> q;
    int a[n + 2];
    int pref[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    pref[0] = 0;
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] ^ a[i];
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << (pref[x - 1] ^ pref[y]) << '\n';
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