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
    string s;
    cin >> s;

    int maxi = 0;
    int n = SZ(s);

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
            maxi++;
    }
    for (int i = 0; i < n; i++)
    {
        string curr = s;
        int xd = 0;
        curr[i] = (curr[i] == 'V' ? 'K' : 'V');

        for (int j = 0; j < n - 1; j++)
        {
            if (curr[j] == 'V' && curr[j + 1] == 'K')
                xd++;
        }

        maxi = max(maxi, xd);
    }
    cout << maxi << endl;
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