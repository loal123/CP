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
    int n, z;
    cin >> n >> z;

    if (z == 1)
    {
        int ans;
        for (int i = 1; i <= n; i += 10)
        {
            if (n - i + 1 >= 10)
            {

                for (int j = i; j <= i + 9; j++)
                {
                    cout << "? " << n - 1 << endl;
                    for (int k = 1; k <= n; k++)
                    {
                        if (k == j)
                            continue;
                        cout << k << " ";
                    }
                    cout << endl;
                }
                for (int j = i; j <= i + 9; j++)
                {
                    string s;
                    cin >> s;
                    if (s == "TIDAK")
                        ans = j;
                }
            }
            else
            {
            }
        }
        if (n % 10 != 0)
            cout.flush();
        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            if (s == "TIDAK")
                ans = i;
        }
        cout << "! " << ans << endl;
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