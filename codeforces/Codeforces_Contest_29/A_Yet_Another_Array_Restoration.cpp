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
    int n, x, y;
    cin >> n >> x >> y;

    int mini = INF;
    pii ans;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= 50; j++)
        {
            set<int> has;
            int right = i + j * (n - 1);

            if (right >= y && (x - i) % j == 0 && (y - i) % j == 0)

            {
                if (right < mini)
                {
                    ans.fi = i;
                    ans.se = j;
                    mini = right;
                }
            }
        }
    }
    int curr = ans.fi;
    for (int i = 0; i < n; i++)
    {
        cout << curr << " ";
        curr += ans.se;
    }
    cout << endl;
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