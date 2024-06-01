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
int check(string a, string b)
{
    int n = SZ(a);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            ans++;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    n = s.size();
    vi div;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.pb(i);
            if (n / i != i)
                div.pb(n / i);
        }
    }
    int mini = 0;
    sort(all(div));

    for (auto i : div)
    {
        string pref = s.substr(0, i);
        string suff = s.substr(n - i, i);
        string xdd = "";
        string xd = "";

        for (int j = 0; j < n / i; j++)
        {
            xd += pref;
        }
        if (check(s, xd) <= 1)
        {
            cout << i << '\n';
            return;
        }
        for (int j = 0; j < n / i; j++)
        {
            xdd += suff;
        }
        if (check(s, xdd) <= 1)
        {
            cout << i << '\n';
            return;
        }
    }
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