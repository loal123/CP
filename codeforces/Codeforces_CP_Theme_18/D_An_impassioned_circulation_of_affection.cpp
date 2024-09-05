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

    set<char> has;
    for (int i = 0; i < n; i++)
    {

        has.insert(s[i]);
    }

    int ans[26][1502];
    memset(ans, 0, sizeof(ans));

    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < i; j++)
            {
                cnt += (s[j] == c);
            }
            ans[c - 'a'][i - cnt] = max(ans[c - 'a'][i - cnt], i);
            for (int j = i; j < n; j++)
            {
                cnt += (s[j] == c);
                cnt -= (s[j - i] == c);
                ans[c - 'a'][i - cnt] = max(ans[c - 'a'][i - cnt], i);
            }
        }
    }
    vi ansl[26];
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (ans[i][j])
            {
                ansl[i].pb(j);
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int m;
        char c;
        cin >> m >> c;

        int idx = upper_bound(all(ansl[c - 'a']), m) - ansl[c - 'a'].begin();
        idx--;
        cout << ans[c - 'a'][ansl[c - 'a'][idx]] << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}