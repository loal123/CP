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
    int n, f, k;
    cin >> n >> f >> k;

    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int fx = v[f - 1];

    sort(all(v));
    reverse(all(v));

    vi xd;

    bool eaten = false;

    bool left = false;

    for (int i = 0; i < k; i++)
    {
        if (v[i] == fx)
            eaten = true;
    }
    for (int i = k; i < n; i++)
    {
        if (v[i] == fx)
            left = true;
    }

    if (eaten && !left)
    {
        cout << "YES";
    }
    else if (eaten && left)
    {
        cout << "MAYBE";
    }
    else
    {
        cout << "NO";
    }
    cout << '\n';
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