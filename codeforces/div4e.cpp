#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
    ll c;
    ll w = 1e9;
    ll m;
    ll n, total;
    cin >> n >> c;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += pow(((a[i]) + w), 2);
    }

    while (total != c)
        if (total > c)
        {
            m = w / 2;
            w -= m;
            total = 0;
            for (int i = 0; i < n; i++)
            {

                total += pow((a[i] + w), 2);
            }
        }
        else if (total < c)
        {
            m = w / 2;
            w += m;
            total = 0;
            for (int i = 0; i < n; i++)
            {

                total += pow((a[i] + w), 2);
            }
        }
    /*
    for (int m = w / 2; b  )*/
    cout << w / 2 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
