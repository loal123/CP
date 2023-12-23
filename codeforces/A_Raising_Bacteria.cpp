#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[32];
int i;
int counts = 0;
void solve()
{
    int n;
    cin >> n;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n /= 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            counts++;
        }
    }
    cout << counts;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}