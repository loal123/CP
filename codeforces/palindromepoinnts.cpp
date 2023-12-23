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
const ll mod = 1e9 + 7;
// Super is a cute girl
vector<pair<int, string>> v;
void solve()
{
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        int t;
        string s;
        cin >> t >> s;
        v.pb(mp(t, s));
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}