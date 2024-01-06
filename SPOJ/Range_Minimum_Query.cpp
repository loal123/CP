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
const int maxn = 1e5 + 5;
const int K = 25;
int st[K + 1][maxn];
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int lg[maxn + 1];
    lg[1] = 0;
    for (int i = 2; i <= maxn; i++)
        lg[i] = lg[i / 2] + 1;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    copy(all(v), st[0]);
    for (int i = 1; i <= K; i++)
    {
        for (int j = 0; j + (1 << i) <= n; j++)
        {
            st[i][j] = min(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int L, R;
        cin >> L >> R;
        int i = lg[R - L + 1];
        int minimum = min(st[i][L], st[i][R - (1 << i) + 1]);
        cout << minimum << '\n';
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