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
    int n;
    cin >> n;
    int c[102] = {0};
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]]++;
        b[i] = 1;
    }
    int counts = 0;
    vi v;
    for (int i = 1; i <= 100; i++)
    {
        if (c[i] >= 2)
        {
            counts++;
            v.pb(i);
        }
    }
    if (counts >= 2)
    {
        int yeah1 = v[0];
        int yeah2 = v[1];
        bool yeah = false;
        bool yeahh = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == yeah1 && !yeah)
            {
                b[i] = 2;
                yeah = true;
            }
            if (a[i] == yeah2 && !yeahh)
            {
                b[i] = 3;
                yeahh = true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << ' ';
        }
    }

    else
        cout << -1;

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