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
    // 2 1 0 0

    int n;
    cin >> n;
    vi v(n);
    set<int> xd;
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (auto i : v)
    {
        cnt[i]++;
        xd.insert(i);
    }

    if (cnt[0] > (n + 1) / 2)
    {
        if (cnt[1] >= 1 && xd.size() == 2)
        {
            cout << 2;
        }
        else
            cout << 1;
    }

    else
        cout
            << 0;
    cout << endl;
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