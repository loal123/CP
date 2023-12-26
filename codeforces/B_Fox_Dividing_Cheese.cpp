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
// Super is a cute girl
void solve()
{
    int x, y;
    cin >> x >> y;
    int prime[3] = {2, 3, 5};
    int a[6] = {0};
    int b[6] = {0};

    if (x == y)
        cout << 0;
    else
    {
        bool can = true;
        int i = 0;
        while (1)
        {
            if (x % prime[i] == 0)
            {
                a[prime[i]]++;
                x /= prime[i];
            }
            else
                i++;

            if (i == 3)
            {
                break;
            }
        }
        i = 0;
        while (1)
        {
            if (y % prime[i] == 0)
            {
                b[prime[i]]++;
                y /= prime[i];
            }
            else
                i++;

            if (i == 3)
            {

                break;
            }
        }
        if (x == y)
        {
            ll total = 0;
            for (int i = 2; i <= 5; i++)
            {
                total += abs(a[i] - b[i]);
            }
            cout << total;
        }
        else
            cout << -1;
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