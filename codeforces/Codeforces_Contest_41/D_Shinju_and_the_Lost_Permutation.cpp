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
    int starting = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            starting = i;
    }
    if (starting == -1)
    {
        cout << "NO\n";
        return;
    }
    vi yeah;
    for (int i = 0; i < n; i++)
    {
        yeah.pb(v[(starting + i) % n]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (yeah[i + 1] == 1)
        {
            cout << "NO\n";
            return;
        }
        if (yeah[i] <= yeah[i + 1])
        {
            if (yeah[i + 1] - yeah[i] > 1)
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            if (yeah[i + 1] == 1)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";

    // for (int i = 0; i < n; i++)
    // {
    //     v[i] = i + 1;
    // }
    // do
    // {

    //     for (int i = 0; i < n; i++)
    //     {
    //         set<int> curr;
    //         vi yeah(n);
    //         for (int j = 0; j < n; j++)
    //         {
    //             yeah[(j + i) % n] = v[j];
    //         }
    //         int maxi = yeah[0];
    //         for (auto j : yeah)
    //         {
    //             maxi = max(maxi, j);
    //             curr.insert(maxi);
    //         }
    //         cout << SZ(curr) << " ";
    //     }
    //     cout << '\n';

    // } while (next_permutation(all(v)));
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