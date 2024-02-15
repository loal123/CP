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
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int q;
    cin >> q;
    int z = 0;
    int o = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '1')
            o ^= a[i];
        else
            z ^= a[i];
    }
    bool have = false;
    int diff[n + 1];
    memset(diff, 0, sizeof(diff));
    int left;
    int right;
    int prefix[n + 1];
    prefix[1] = a[1];
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] ^ a[i];
    }

    while (q--)
    {
        int d;
        cin >> d;
        if (d == 1)
        {
            int x, y;
            cin >> x >> y;
            z ^= prefix[x - 1] ^ prefix[y];
            o ^= prefix[x - 1] ^ prefix[y];
        }
        else
        {
            int h;
            cin >> h;

            if (h == 0)
                cout << z;
            else
                cout << o;

            cout << " ";
        }
    }
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