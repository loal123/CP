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
bool checkp(string s)
{
    int n = SZ(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    map<string, bool> has;
    vector<string> palindromes;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if (checkp(s[i]))
            palindromes.pb(s[i]);
        else
            has[s[i]] = 1;
    }
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        string xd = s[i];
        reverse(all(xd));
        if (has[xd])
        {
            has[s[i]] = 0;
            has[xd] = 0;
            ans.pb(s[i]);
        }
    }
    string realans = "";
    for (int i = 0; i < SZ(ans); i++)
    {
        realans += ans[i];
    }

    if (SZ(palindromes))
    {
        string palindromeans;
        int cnt = 0;
        for (auto i : palindromes)
        {
            if (SZ(i) > cnt)
            {
                palindromeans = i;
                cnt = SZ(i);
            }
        }
        realans += palindromeans;
    }
    reverse(all(ans));
    for (auto i : ans)
    {
        reverse(all(i));
        realans += i;
    }
    cout << SZ(realans) << '\n';
    cout << realans;
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