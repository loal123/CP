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
// Super is a cute girl
void solve()
{

    int n, q;

    cin >> n >> q;
    int a[n + 1], b[n + 1], c[n + 1];
    a[0] = 0;
    b[0] = 0;
    c[0] = 0;
    int ac = 0, bc = 0, cc = 0;
    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        if (z == 1)
            ac++;
        else if (z == 2)
            bc++;
        else
            cc++;

        a[i] = ac;
        b[i] = bc;
        c[i] = cc;
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << a[y] - a[x - 1] << " " << b[y] - b[x - 1] << " " << c[y] - c[x - 1] << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}