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
    for (auto &i : v)
        cin >> i;

    ll curr = mod;

    if (n % 2 == 1)
        curr++;

    cout << n - 1 << endl;

    for (int i = 0; i < n - 1; i++)
    {
        int mini = min(v[i], v[i + 1]);

        cout << i + 1 << " " << i + 2 << " " << curr << " " << mini << '\n';

        v[i + 1] = mini;
        if (i % 2 == 0)
            curr--;

        else
            curr++;
    }
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