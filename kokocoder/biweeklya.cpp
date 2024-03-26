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
    int n = SZ(s);
    deque<char> q;
    for (int i = 0; i < n; i++)
    {
        q.pb(s[i]);
    }
    string mx = s;
    string mn = s;
    for (int i = 0; i < n; i++)
    {
        string yeah = "";
        q.push_back(q.front());
        q.pop_front();
        for (auto i : q)
            yeah += i;

        mx = max(mx, yeah);
        mn = min(mn, yeah);
    }
    cout << mn << '\n'
         << mx;
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