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
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    int left = 0;
    map<int, int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]]++;
    }
    if (c[0] > 0)
    {
        for (auto i : c)
        {

            ans += i.se;
        }

        cout << ans - c[0] << endl;
        return;
    }
    int total = -2;
    for (auto i : c)
        total += i.se;
    bool two = false;
    for (auto i : c)
    {
        if (i.se > 1)
            two = 1;
    }
    if (two)
    {
        cout << 2 + total << endl;
    }
    else
        cout << 3 + total << endl;
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