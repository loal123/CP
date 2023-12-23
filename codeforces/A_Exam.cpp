#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    if (n <= 4)
    {
        if (n == 1 || n == 2)
        {
            cout << 1 << endl
                 << 1;
        }
        else if (n == 3)
        {
            cout << 2 << endl
                 << 1 << " " << 3;
        }
        else
        {
            cout << 4 << endl
                 << 2 << " " << 4 << " " << 1 << " " << 3;
        }
    }
    else
    {
        cout << n << endl;
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            cout << 1 + i * 2 << " ";
        }

        for (int i = 1; i <= n / 2; i++)
        {
            cout << i * 2 << " ";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}