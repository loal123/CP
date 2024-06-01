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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int rn = a[k - 1];
    int yeah = n;
    for (int i = 0; i < n; i++)
    {
        if (i != k - 1)
        {
            if (a[i] > rn)
            {
                yeah = i;
                break;
            }
        }
    }

    if (yeah == n)
    {
        cout << n - 1 << endl;
        return;
    }

    int maxi = 0;
    if (yeah < k - 1)
    {
        maxi = max(maxi, yeah - 1);
        if (yeah == 0)
        {
            swap(a[0], a[k - 1]);
            int counts = 0;
            for (int i = 1; i < n; i++)
            {
                if (rn < a[i])
                    break;
                counts++;
            }
            maxi = max(maxi, counts);
        }
        else
        {
            swap(a[yeah], a[k - 1]);
            int counts = 0;
            for (int i = yeah - 1; i < n; i++)
            {
                if (i != yeah)
                {
                    if (a[i] > rn)
                        break;
                    counts++;
                }
            }
            maxi = max(maxi, counts);
        }
    }
    else
    {
        maxi = max(maxi, yeah - 1);
    }

    cout << maxi << '\n';
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