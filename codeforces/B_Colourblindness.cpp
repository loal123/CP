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
    bool can = true;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            if ((s1[i] == 'B' && s2[i] == 'G') || (s1[i] == 'G' && s2[i] == 'B'))
            {
            }
            else
                can = false;
        }
    }
    cout << (can ? "YES" : "NO") << endl;
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