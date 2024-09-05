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
void solve()
{
    int n;
    cin >> n;
    int t[n], c[n];
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> c[i];
    }
    int curr = c[0];
    maxi = curr;

    for (int i = 1; i < n; i++)
    {
        curr -= t[i] - t[i - 1];
        curr = max(curr, 0);
        curr += c[i];
        maxi = max(maxi, curr);
    }
    cout << t[n - 1] + curr << " " << maxi << '\n';
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