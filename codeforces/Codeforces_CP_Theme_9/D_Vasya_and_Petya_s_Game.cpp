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
vi primes;
vector<bool> has(2000, 0);

void solve()
{
    for (int i = 2; i <= 1500; i++)
    {
        if (has[i])
            continue;
        primes.pb(i);
        has[i] = 1;
        for (int j = i + i; j <= 1500; j += i)
            has[j] = 1;
    }
    int n;
    cin >> n;

    vi ans;
    for (auto i : primes)
    {
        int xd = i;
        while (xd <= n)
        {
            ans.pb(xd);
            xd *= i;
        }
    }
    cout << SZ(ans) << '\n';
    for (auto i : ans)
        cout << i << " ";
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