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
    int n, k;
    cin >> n >> k;
    int counts = n;
    int yeah = 0;
    bool can = false;
    while (yeah <= counts)
    {
        if (counts * (counts - 1) / 2 + (yeah * (yeah - 1) / 2) == k)
        {
            can = true;
            break;
        }
        yeah++;
        counts--;
    }
    if (can)
    {
        cout << "YES" << endl;
        for (int i = 0; i < counts; i++)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < yeah; i++)
        {
            cout << -1 << " ";
        }
    }
    else
        cout << "NO";

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