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
    int n, k;
    cin >> n >> k;
    int a = 1;
    int b = n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && v[i] == 0)
        {
            for (int j = i; j < n; j += k)
            {
                v[j] = b;
                b--;
            }
        }
        else if (i & 1 && v[i] == 0)
        {
            for (int j = i; j < n; j += k)
            {
                v[j] = a;
                a++;
            }
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
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