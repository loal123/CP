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
    string s;
    cin >> n >> s;
    map<char, int> m;
    bool can = false;
    int cnt = 0;
    for (auto i : s)
        m[i]++;

    int N = m['N'];
    int E = m['E'];
    int W = m['W'];
    int S = m['S'];

    map<char, int> r;
    map<char, int> h;

    if (abs(N - S) % 2 == 0)
    {
        if (N > 1 || S > 1)
            can = true;
        else if (N == 1 && S == 1)
            cnt++;
        r['N'] = N / 2;
        r['S'] = S / 2;
        h['N'] = (N + 1) / 2;
        h['S'] = (S + 1) / 2;
    }

    else
    {
        cout << "NO\n";
        return;
    }

    if (abs(W - E) % 2 == 0)
    {

        if (W > 1 || E > 1)
            can = true;
        else if (W == 1 && E == 1)
            cnt++;
        h['W'] = W / 2;
        h['E'] = E / 2;
        r['W'] = (W + 1) / 2;
        r['E'] = (E + 1) / 2;
    }
    else
    {
        cout << "NO\n";
        return;
    }
    if (!can && cnt < 2)
    {
        cout << "NO\n";
        return;
    }
    for (auto i : s)
    {
        if (r[i])
        {
            cout << 'R';
            r[i]--;
        }
        else
            cout << 'H';
    }

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