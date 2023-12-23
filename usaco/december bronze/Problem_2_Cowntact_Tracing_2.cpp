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
    int n;
    string s;
    cin >> n >> s;
    vi v;
    int counts = 0;
    int total = 0;
    int segments = 0;
    bool bruh = false;
    bool can = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            total++;
            counts++;
        }
        else
        {
            if (counts % 2 == 1)
            {
                v.pb(counts);
            }
            else
            {
                if (bruh)
                {
                    can = false;
                }
            }
            bruh = true;
        }
    }
    if (n == 1)
    {
        cout << total;
    }
    else
    {
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