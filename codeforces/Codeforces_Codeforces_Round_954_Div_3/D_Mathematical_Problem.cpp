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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int idx;
    vl stuff;

    int ans = INF;
    for (int i = 0; i < n - 1; i++)
    {
        string bruh = s.substr(i, 2);
        int xd = stoi(bruh);
        for (int j = 0; j < n; j++)
        {
            if (j != i && j != i + 1)
            {
                int num = s[j] - '0';
                xd = min(xd + num, xd * num);
            }
        }
        ans = min(ans, xd);
    }
    cout << ans << '\n';
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