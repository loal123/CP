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
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    vl v1;
    vl v2;
    ll counts1 = 0;
    ll counts2 = 0;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (i % 2 == 0)
        {
            counts1 += z;
            v1.pb(counts1);
        }
        else
        {
            counts2 += z;
            v2.pb(counts2);
        }
    }
    bool can = false;
    for (int i = 0; i < SZ(v1); i++)
    {
        if (i > 0)
        {
            if (v1[i] == v2[i - 1])
                can = true;
            if (v2[i] == v1[i - 1])
                can = true;
        }
        if (v1[i] == v2[i])
            can = true;
    }
    if (n % 2 == 0)

        for (int i = 0; i < n / 2; i++)
        {
            if ((v1[n - 1] - v1[i]) == (v2[n - 1] - v2[i]))
                can = true;
        }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            if ((v1[n - 1] - v1[i]) == (v2[n - 1] - v2[i]))
                can = true;
        }
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