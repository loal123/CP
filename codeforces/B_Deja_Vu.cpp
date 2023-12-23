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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    int x[q + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= q; i++)
    {
        cin >> x[i];
    }
    vi v;
    bool have[100005] = {false};
    for (int i = 1; i <= q; i++)
    {
        if (!have[x[i]])
        {
            v.pb(x[i]);
            have[x[i]] = true;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ll idk = pow(2, v[i]);
            if (a[j] % idk == 0)
            {
                a[j] += idk / 2;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
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