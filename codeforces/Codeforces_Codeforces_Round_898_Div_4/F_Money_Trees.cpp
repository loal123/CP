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
    ll n, x;
    cin >> n >> x;
    ll a[n], h[n];
    bool yeah[n];
    memset(yeah, 0, sizeof(yeah));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int maxi = 0;
    bool curr = false;
    ll rn = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (h[i] % h[i + 1] == 0)
        {
            yeah[i] = true;
        }
    }
    ll counts = 0;
    int i = 0, j = 0;
    while (j < n)
    {
        if (yeah[j])
        {
            counts += a[j];
            j++;
        }
        else
        {
            j++;
            i = j;
            counts = 0;
        }
        while (counts > x)
        {
            counts -= a[i];
            i++;
        }

        maxi = max(j - i, maxi);
    }

    cout << maxi + 1 << '\n';
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