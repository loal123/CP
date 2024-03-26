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
    int a[n];

    ll counts = 0;
    int yeah[3];
    memset(yeah, 0, sizeof(yeah));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= 3;
        counts += a[i];
        yeah[a[i]]++;
    }
    if (n == 1)
    {
        if (a[0] % 3 == 0)
            cout << 0;
        else
            cout << 1;

        cout << endl;
        return;
    }
    counts %= 3;
    if (counts == 0)
        cout << 0;
    else if (counts == 1)
    {
        if (yeah[1] > 0)
            cout << 1;
        else
            cout << 2;
    }
    else
    {
        cout << 1;
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