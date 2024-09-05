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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vi index(m);
    map<int, int> cnt;
    for (int i = 0; i < m; i++)
    {
        cin >> index[i];
        cnt[index[i] - 1]++;
    }

    string c;
    cin >> c;
    deque<char> xd;
    sort(all(c));
    for (auto i : c)
        xd.pb(i);
    for (auto i : cnt)
    {
        while (i.se > 1)
        {
            xd.pop_back();
            i.se--;
        }
        s[i.fi] = xd.front();
        xd.pop_front();
    }
    cout << s << '\n';
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