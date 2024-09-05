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
    string s;
    cin >> s;

    string ans1 = "";
    string ans2 = "";
    int n = SZ(s);
    for (int i = 0; i < n * 2; i++)
    {
        if (i < n)
            ans2 += '(';

        else
            ans2 += ')';

        if (i & 1)
            ans1 += ')';

        else
            ans1 += '(';
    }
    if (ans1.find(s) == -1)
    {
        cout << "YES" << endl;
        cout << ans1 << endl;
        return;
    }
    if (ans2.find(s) == -1)
    {
        cout << "YES" << endl;
        cout << ans2 << endl;
        return;
    }
    cout << "NO" << endl;
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