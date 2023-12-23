#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 100005;
void solve()
{
    int n;
    int h[maxn];
    cin >> n;
    int counts = 0;
    int up = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        counts += h[i] - h[i + 1];
        if (counts < 0)
        {
            up -= counts;
            counts = 0;
        }
    }

    cout << h[0] + up;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}