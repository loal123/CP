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

    int n;
    cin >> n;
    int a[n];
    int counts1 = 0;
    int counts2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int move = 0;
    int last1 = 0, last2 = 0;
    int x = 0, y = n - 1;
    {
        bool has = false;
        while (x <= y)
        {
            last1 = 0;
            move++;
            while (last1 <= last2 && x <= y)
            {
                counts1 += a[x];
                last1 += a[x];
                x++;

                has = true;
            }

            if (!has)
            {
                for (int i = x; i <= y; i++)
                {
                    counts1 += a[x];
                }
                break;
            }
            move++;
            has = false;
            last2 = 0;
            while (last2 <= last1 && x <= y)
            {
                counts2 += a[y];
                last2 += a[y];
                y--;
                has = true;
            }
            if (!has)
            {
                move--;
                break;
            }
        }
    }
    cout << move << " " << counts1 << " " << counts2 << '\n';
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