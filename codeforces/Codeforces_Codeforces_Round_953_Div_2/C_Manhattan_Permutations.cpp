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
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans += abs((n - i + 1) - i);
    }

    if (k <= ans && k % 2 == 0)
    {
        cout << "Yes\n";
        // 0 2 4 8 12 18 24 32 40 50
        vi a(n);

        if (n & 1)
        {
            a[n / 2] = n / 2 + 1;

            ll curr = n * 2 - 2;
            for (int i = 0; i < n / 2; i++)
            {
                if (k - curr >= 0)
                {
                    k -= curr;
                    a[i] = n - i;
                    a[n - i - 1] = i + 1;
                }
                else
                {
                    a[i] = i + 1;
                    a[n - i - 1] = n - i;
                }

                curr -= 4;
            }
            if (k > 0)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    bool has = false;
                    if (a[i] == i + 1)
                    {
                        for (int j = i + 1; j < n; j++)
                        {
                            if (a[j] == i + 2)
                            {
                                swap(a[i], a[j]);
                                has = 1;
                                break;
                            }
                        }
                    }
                    if (has)
                        break;
                }
            }
        }
        // 1 4 3 2

        else
        {
            ll curr = n * 2 - 2;
            for (int i = 0; i < n / 2; i++)
            {
                if (k - curr >= 0)
                {
                    k -= curr;
                    a[i] = n - i;
                    a[n - i - 1] = i + 1;
                }
                else
                {
                    a[i] = i + 1;
                    a[n - i - 1] = n - i;
                }

                curr -= 4;
            }
            if (k > 0)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    bool has = false;
                    if (a[i] == i + 1)
                    {
                        for (int j = i + 1; j < n; j++)
                        {
                            if (a[j] == i + 2)
                            {
                                swap(a[i], a[j]);
                                has = 1;
                                break;
                            }
                        }
                    }
                    if (has)
                        break;
                }
            }
        }
        for (auto i : a)
            cout << i << " ";
    }
    else
        cout << "No";

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