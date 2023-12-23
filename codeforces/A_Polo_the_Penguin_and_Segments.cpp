#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll l[100005];
ll r[100005];
void solve()
{
    ll total = 0;
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        total += r[i] - l[i] + 1;
    }
    if (total % k == 0)
    {
        cout << 0;
    }
    else
        cout << k - total % k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}