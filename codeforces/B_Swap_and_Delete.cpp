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
// Super is the cutest amazing girl
void solve()
{
    string s;
    cin >> s;
    int curr = 0;
    int one = 0;
    int ze = 0;
    for (auto i : s)
    {
        if (i == '1')
            one++;
        else
            ze++;
    }
    string yeah = "";
    int n = SZ(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (ze > 0)
            {
                yeah += '0';
                ze--;
            }
            else
                yeah += '1';
        }
        else
        {
            if (one > 0)
            {
                yeah += '1';
                one--;
            }
            else
                yeah += '0';
        }
    }
    int ans = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == yeah[i])
        {
            yeah.erase(i, 1);
            n--;
            ans++;
        }
        else
            i++;
    }
    cout << ans << endl;
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