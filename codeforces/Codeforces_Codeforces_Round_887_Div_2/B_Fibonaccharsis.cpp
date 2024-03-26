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
ll fib[30];
void solve()
{

    int n, k;
    cin >> n >> k;
    int idx = 0;
    int ans = 0;
    if (k > 29)
    {
        cout << 0 << '\n';
    }

    else
    {
        for (int a = 0; a <= n; a++)
        {

            int left = a;
            int right = n;
            bool have = false;
            while (left < right)
            {
                int mid = (left + right) / 2;
                ll yeah[k];
                yeah[0] = a;
                yeah[1] = mid;
                for (int i = 2; i < k; i++)
                {
                    yeah[i] = yeah[i - 1] + yeah[i - 2];
                }
                if (yeah[k - 1] > n)
                {
                    right = mid - 1;
                }
                else if (yeah[k - 1] < n)
                    left = mid + 1;
                else
                {
                    ans++;
                    have = true;
                    break;
                }
            }
            if (!have)
            {
                ll yeah[k];
                yeah[0] = a;
                yeah[1] = left;
                for (int i = 2; i < k; i++)
                {
                    yeah[i] = yeah[i - 1] + yeah[i - 2];
                }
                if (yeah[k - 1] == n)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= 30; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}