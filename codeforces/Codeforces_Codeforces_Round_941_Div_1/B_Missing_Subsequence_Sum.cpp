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
    int n, k;
    cin >> n >> k;
    int sum = 0;
    vi v;
    for (int i = 0; (1 << i) < n; i++)
    {
        if (sum + (1 << i) >= k)
        {
            break;
        }
        v.pb((1 << i));
        sum += (1 << i);
    }

    // 1 2 4
    if (sum != k - 1)
    {
        v.pb(k - sum - 1);
    }
    sum = k - 1;

    while (sum < n)
    {
        if (sum + 1 == k)
        {
            v.pb(sum + 2);
            v.pb(sum + 2);
            sum += sum + 2;
        }
        else
        {
            v.pb(sum + 1);
            sum += sum + 1;
        }
    }

    cout << SZ(v) << '\n';
    for (auto i : v)
        cout << i << " ";

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