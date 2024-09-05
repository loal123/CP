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
    vi a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    int m;
    cin >> m;
    vi d(m);
    for (auto &i : d)
        cin >> i;

    set<int> s;
    for (auto i : b)
        s.insert(i);

    // check if theres no operations needed but no numbers mathcing b

    bool possible = false;

    bool matching = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            matching = false;
    }
    if (!s.count(d[m - 1]))
    {
        cout << "NO\n";
        return;
    }
    if (matching)
    {
        for (auto i : d)
        {
            if (s.count(i))
                possible = true;
        }
        if (!possible)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
    else
    {

        map<int, int> z;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                z[b[i]]++;
        }

        for (auto i : d)
        {
            if (z[i] > 0)
            {
                z[i]--;
            }
        }
        for (auto i : z)
        {
            if (i.se != 0)
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
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