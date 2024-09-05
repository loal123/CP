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
    int n;
    cin >> n;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vl pos;
    int q;
    cin >> q;
    ll curr = 1;
    vl val;

    for (int i = 0; i < n; i++)
    {
        pos.pb(curr);
        ll cnt = 1;

        while (v[i] % 2 == 0)
        {
            cnt *= 2;
            v[i] /= 2;
        }
        val.pb(v[i]);
        curr += cnt;
    }
    while (q--)
    {

        ll x;
        cin >> x;
        int valpos = upper_bound(all(pos), x) - pos.begin();
        valpos--;
        cout << val[valpos] << '\n';
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