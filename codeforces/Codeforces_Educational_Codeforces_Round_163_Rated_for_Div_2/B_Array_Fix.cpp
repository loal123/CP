#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
const int maxn = 1e5 + 5;
const ll INF = 1e9 + 5;
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int last = 0;
    bool ans = 1;
    for (auto i : v)
    {

        if (i >= 10 && i / 10 >= last && i % 10 >= i / 10)
            last = i % 10;
        else
        {
            if (i < last)
            {
                cout << "NO\n";
                return;
            }
            last = i;
        }
    }
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}