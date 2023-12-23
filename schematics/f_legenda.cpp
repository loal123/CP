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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    vector<string> ss;
    int n, m;
    int ii[105][1005];
    int maxs = 0;
    int maxpos = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s >> m;
        ss.pb(s);
        for (int j = 0; j < m; j++)
        {
            cin >> ii[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int z = 0; z < m; z++)
        {
            for (int k = 0; k < m; k++)
            {
                int total = 0;

                for (int j = z; j <= k; j++)
                {
                    total += ii[i][j];
                }
                if (total > maxs)
                {
                    maxs = total;
                    maxpos = i;
                }
            }
        }
    }
    cout << ss[maxpos];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}