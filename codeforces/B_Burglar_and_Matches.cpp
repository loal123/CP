#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 25;
void solve()
{
    ll a[maxn];
    ll b[maxn];
    ll c[maxn];
    ll n, m;
    ll counts = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
        c[i] = b[i];
    }
    sort(b, b + m, greater<int>());

    int ch = 0;
    while (n > 0)
    {
        for (int i = 0; i < m; i++)
        {
            if (b[ch] == c[i])
            {
                if (n - a[i] > 0)
                {
                    counts += a[i] * c[i];
                    n -= a[i];
                }
                else
                {
                    counts += n * c[i];
                    n = 0;
                }
                ch++;
                c[i] = 0;
            }
        }
        if (ch == m)
            break;
    }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}