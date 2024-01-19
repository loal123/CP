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
    string s, f;
    cin >> s >> f;
    int ans = 0;
    int counts1 = 0;
    int counts2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            counts1++;
        else if (f[i] == '1')
            counts2++;
    }
    int rn = 0;
    int yeah = 0;
    int yeahh = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != f[i])
        {
            if (s[i] == '0')
                yeah++;
            else
                yeahh++;
        }
    }
    ans += min(yeah, yeahh);

    ans += abs(yeah - yeahh);

    cout << (ans) << endl;
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