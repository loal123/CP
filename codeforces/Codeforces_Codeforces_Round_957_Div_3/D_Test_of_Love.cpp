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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    vi c;
    vi l;
    l.pb(-1);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'C')
            c.pb(i);
        if (s[i] == 'L')
            l.pb(i);
    }
    int lastc;
    if (SZ(c))
        lastc = c[SZ(c) - 1];
    else
        lastc = -2;
    int curr = -1;
    int sz = SZ(l);
    for (int i = 1; i < sz; i++)
    {
        if (l[i] - l[i - 1] > m)
            break;
        curr = l[i];
    }
    bool nomore = 0;
    bool nomorel = 0;
    while (curr < n)
    {
        if (curr + m >= n)
        {
            cout << "YES\n";
            return;
        }

        int nextc = lower_bound(all(c), curr + m) - c.begin();
        int nextposc = nextc;
        int nextl = upper_bound(all(l), curr) - l.begin();
        int nextposl = nextl;
        if (nextc == SZ(c))
        {
            nextc = INF;
            nomore = 1;
        }
        if (nextl == (SZ(l)))
        {
            nomorel = 1;
        }
        if (!nomore)
            nextc = c[nextposc];
        if (!nomorel)
            nextl = l[nextposl];

        if (nomorel)
        {
            if (curr + m > lastc && curr + m + k >= n)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
            return;
        }
        if (!nomorel)
        {

            if (nextl < nextc)
            {
                if (nextl <= curr + m + k)
                {
                    if (nextl <= curr + m)
                        curr = nextl;
                    else
                    {
                        if (k < nextl - (curr + m))
                        {
                            cout << "NO\n";
                            return;
                        }
                        k -= nextl - (curr + m);
                        curr = nextl;
                    }
                }
                else
                {
                    cout << "NO\n";
                    return;
                }
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
}
// int nextv;
// int nextc = lower_bound(all(c), curr + m) - c.begin();
// if (nextc == SZ(c))
//     nextv = -2;
// else
//     nextv = c[nextc];

// if (nextv == -2)
// {

// }
// curr += m;
// if (curr + k >= n)
// {
//     cout << "YES\n";
// }
// else
//     cout << "NO\n";
// binary search the nearest crocodile
// most optimal to go to the nearest right land

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