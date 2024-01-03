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
vi v;
const int maxn = 1e6 + 5;
int memo[maxn];
int dp(int x,int last)
{
    if (x == 0) return 1;
    if (x < 0) return 0;
    
}
// Super is a cute girl
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    memset(memo,-1,sizeof(memo));
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