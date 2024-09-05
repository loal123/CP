#include <iostream>
using namespace std;

// Super is the cutest girl
void solve()
{
    short n, m;
    cin >> n >> m;

    if (n > m)
        swap(n, m);

    cout << (m - 1) * m / 2 + (n * (m + m + n * 2 - 2) / 2);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}