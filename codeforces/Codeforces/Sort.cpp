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
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    int pref1[n + 1][26];
    int pref2[n + 1][26];
    memset(pref1, 0, sizeof(pref1));
    memset(pref2, 0, sizeof(pref2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            pref1[i + 1][j] = pref1[i][j];
            pref2[i + 1][j] = pref2[i][j];
        }
        int xd = a[i] - 'a';
        int d = b[i] - 'a';
        pref1[i + 1][xd] = pref1[i][xd] + 1;
        pref2[i + 1][d] = pref2[i][d] + 1;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int curr = 0;
        for (int i = 0; i < 26; i++)
        {
            curr += abs((pref1[r][i] - pref1[l - 1][i]) - (pref2[r][i] - pref2[l - 1][i]));
        }
        cout << curr / 2 << '\n';
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