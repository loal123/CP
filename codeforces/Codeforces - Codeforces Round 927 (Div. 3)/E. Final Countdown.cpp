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
    int a[n + 4];
    memset(a, 0, sizeof(a));
    deque<char> dq;
    string s;
    cin >> s;
    bool extra = false;
    int extras;
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i] - '0';
    }
    for (int i = 0; i < n - 1; i++)
    {
        a[i + 1] += a[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        a[i - 1] += a[i] / 10;
        a[i] %= 10;
    }
    if (a[0] >= 10)
    {
        extra = true;
        extras = a[0] / 10;
        a[0] %= 10;
    }
    bool have = false;

    if (extra)
    {
        cout << extras;
        have = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            have = true;

        if (have)
            cout << a[i];
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