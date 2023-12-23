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
    vi v;

    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    ll maxsum1 = -1e18;
    ll cursum = 0;
    for (int i = 1; i < n; i++)
    {
        cursum += v[i];

        maxsum1 = max(cursum, maxsum1);
        if (cursum < 0)
            cursum = 0;
    }
    ll maxsum2 = -1e18;
    cursum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cursum += v[i];

        maxsum2 = max(cursum, maxsum2);
        if (cursum < 0)
            cursum = 0;
    }
    ll total = 0;
    for (auto i : v)
        total += i;

    cout << (total > max(maxsum1, maxsum2) ? "YES" : "NO") << '\n';
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