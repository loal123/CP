#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (p + q >= n)
    {
        cout << 1 << endl;
    }
    for (int w = 1; w <= n; w++)
    {
        bool dp[n + 1][p + 1][q + 1];
        memset(dp, 0, sizeof(dp));
    
    }
}
