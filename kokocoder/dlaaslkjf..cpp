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
    int n, k;
    cin >> n >> k;
    vl v(n);
    vl b(k);
    ll counts = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        counts += v[i];
    }
    map<ll, ll> m;
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
        b[i]--;
        m[b[i]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i] == 0 && m[((i + 1) % n)] == 0)
        {
            ans += (ll)v[i] * v[(i + 1) % n];
        }
    }
    vl x;
    ll curr = 0;
    for (auto i : b)
    {
        curr += v[i];
        ans += ((counts - curr) * v[i]);
    }
    cout << ans << '\n';
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