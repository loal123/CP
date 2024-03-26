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
    int n, m, x;
    cin >> n >> m >> x;
    vector<set<int>> s(m + 1);
    s[0].insert((x - 1 + n) % n);
    for (int i = 1; i <= m; i++)
    {

        int a;
        char c;
        cin >> a >> c;

        if (c == '0')
        {
            for (auto j : s[i - 1])
            {
                s[i].insert((j + a) % n);
            }
        }
        else if (c == '1')
        {
            for (auto j : s[i - 1])
            {
                s[i].insert((((j - a) % n) + n) % n);
            }
        }
        else
        {
            for (auto j : s[i - 1])
            {
                s[i].insert((j + a) % n);
                s[i].insert((((j - a) % n) + n) % n);
            }
        }
    }

    cout << s[m].size() << '\n';
    vi v;
    for (auto i : s[m])
        v.pb(i);

    sort(all(v));

    for (auto i : v)
        cout << i + 1 << " ";

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