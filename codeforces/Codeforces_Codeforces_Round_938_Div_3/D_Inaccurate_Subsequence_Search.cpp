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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> M;
    map<int, int> M2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        M[x]++;
    }
    int curr = 0;
    for (int i = 0; i < m; i++)
    {
        M2[a[i]]++;
        if (M2[a[i]] <= M[a[i]])
            curr++;
    }
    int ans = 0;
    if (curr >= k)
        ans++;
    for (int i = m; i < n; i++)
    {
        M2[a[i]]++;
        if (M2[a[i]] <= M[a[i]])
            curr++;
        M2[a[i - m]]--;
        if (M2[a[i - m]] < M[a[i - m]])
            curr--;
        if (curr >= k)
            ans++;
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