#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100010];
int counts[1000];
void solve()
{
    int n;
    int maxs = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        counts[a[i]]++;
    }
    for (int i = 0; i < 100005; i++)
    {
        if (counts[a[i]] > maxs)
        {
            maxs = counts[a[i]];
        }
    }
    if (maxs > n - maxs + 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}