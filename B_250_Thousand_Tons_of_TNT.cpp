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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vi v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            v.pb(i);
    }
    int rn = v.size();
    for (int i = 0; i < rn; i++)
    {
        v.pb(n / v[i]);
    }

    vl total;
    ll maximum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        ll mini = 1e18;
        ll maxi = -1e18;
        for (int j = 0; j < n; j += v[i])
        {
            ll counts = 0;
            for (int k = 0; k < v[i]; k++)
            {
                counts += a[j + k];
            }
            maxi = max(maxi, counts);
            mini = min(mini, counts);
            counts = 0;
        }
        maximum = max(maximum, maxi - mini);

        total.clear();
    }
    cout << maximum << '\n';
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