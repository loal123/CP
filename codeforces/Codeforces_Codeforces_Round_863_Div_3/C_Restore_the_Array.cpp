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
    int n;
    cin >> n;
    int b[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    bool has = false;
    for (i = 0; i < n - 2; i++)
    {
        cout << b[i] << " ";
        if (max(b[i], b[i + 1]) != b[i])
        {
            cout << 0 << ' ';
            has = true;
                }
    }
    for (i; i < n - 1; i++)
    {
        cout << b[i] << ' ';
    }
    if (!has)
        cout << 0;

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