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
    string s;
    cin >> s;
    int n;
    cin >> n;
    string s1;
    string s2;
    cin >> s1 >> s2;
    vi v[10];
    int sz = SZ(s);
    int rn = 0;
    set<char> yeah;
    for (int i = 0; i < sz; i++)
    {
        if (rn == n)
        {
            cout << "NO\n";
            return;
        }
        if (s[i] >= s1[rn] && s[i] <= s2[rn])
        {
            yeah.insert(s[i]);
        }
        if (SZ(yeah) == s2[rn] - s1[rn] + 1)
        {
            rn++;
            yeah.clear();
        }
    }
    if (rn == n)
        cout << "NO\n";
    else
        cout << "YES\n";
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