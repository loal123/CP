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
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                for (int l = 1; l <= n; l++)
                {
                    for (int m = 1; m <= n; m++)
                    {
                        for (int o = 1; o <= n; o++)
                        {
                            for (int p = 1; p <= n; p++)
                            {
                                for (int q = 1; q <= n; q++)
                                {
                                    cout << 8 << '\n';
                                    cout << i << " " << j << " " << k << " " << l << " " << m << " " << o << " " << p << " " << q << '\n';
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    freopen("stress.txt", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}