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
    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (SZ(s) != n)
        {
            cout << "NO\n";
            continue;
        }
        map<char, bool> has;
        map<char, int> idx;
        map<int, bool> has2;
        map<int, char> xd;
        bool can = true;
        for (int i = 0; i < SZ(s); i++)
        {
            if (has[s[i]])
            {
                if (v[i] != idx[s[i]])
                {
                    can = 0;
                    break;
                }
            }
            if (has2[v[i]])
            {
                if (s[i] != xd[v[i]])
                {
                    can = 0;
                    break;
                }
            }

            if (!has[s[i]])
            {
                idx[s[i]] = v[i];
                has[s[i]] = 1;
            }
            if (!has2[v[i]])
            {
                xd[v[i]] = s[i];
                has2[v[i]] = 1;
            }
        }
        cout << (can ? "YES" : "NO") << '\n';
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