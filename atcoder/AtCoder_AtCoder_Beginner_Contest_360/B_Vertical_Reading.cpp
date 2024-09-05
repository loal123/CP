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
    string s, t;
    cin >> s >> t;
    int n = SZ(s);

    bool can = false;
    for (int k = 1; k < n; k++)
    {

        for (int start = 0; start < k; start++)
        {
            string curr = "";
            for (int i = start; i < n; i += k)
            {
                curr += s[i];
            }
            if (curr == t)
                can = 1;
        }
    }
    cout << (can ? "Yes" : "No");
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