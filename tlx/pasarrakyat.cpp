#include <bits/stdc++.h>
using namespace std;

long long fpb(long long a, long long b)
{
    if (b == 0)
        return a;
    else
    {
        return fpb(b, a % b);
    }
}
long long kpk(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return a / fpb(a, b) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[25];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = kpk(ans, arr[i]);
    }
    cout << ans;
}
