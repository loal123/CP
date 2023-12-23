#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        n += 1;
        n /= -2;
    }
    else
    {
        n /= 2;
    }
    cout << n << endl;
}



int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
}