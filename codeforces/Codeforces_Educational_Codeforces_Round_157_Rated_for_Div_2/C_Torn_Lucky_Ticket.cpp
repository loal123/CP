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
    vector<pii> v;
    ll ans = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int total = 0;
        int sz = SZ(s);
        int counts[sz + 1];
        counts[1] = s[0] - '0';
        for (int i = 1; i < sz; i++)
        {
            counts[i + 1] = s[i] - '0' + counts[i - 1];
        }

        if (sz & 1)
        {
            
        }
    }

    // 1,3 1,5
    // 2,4
    // 3,1,3,3,3,5
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