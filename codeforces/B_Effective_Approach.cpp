#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
ll b[100005];
void solve()
{
    int n, q;
    cin >> n;
    ll count1 = 0, count2 = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x] = i;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        count1 += a[x];
        count2 += n - a[x] + 1;
    }

    cout << count1 << " " << count2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}