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
const int maxn = 1e5 + 5;
vi v(maxn);
vector<bool> has(maxn);
int n, t;
void traverse(int idx)
{

    has[idx] = 1;
    if (idx == n)
        return;
    if (idx + v[idx] > n)
        return;

    traverse(idx + v[idx]);
}
void solve()
{

    cin >> n >> t;

    for (int i = 1; i <= n - 1; i++)
        cin >> v[i];

    traverse(1);
    if (has[t])
        cout << "YES\n";
    else
        cout << "NO\n";
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