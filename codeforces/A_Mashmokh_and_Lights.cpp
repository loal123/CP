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
    int n, m;
    cin >> n >> m;
    int a[m];
    int iwtctff[n] = {0};
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        for (int j = a[i] - 1; j < n; j++)
        {
            if (iwtctff[j] == 0)
            {
                iwtctff[j] = a[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << iwtctff[i] << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}