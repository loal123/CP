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
    int a[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    int s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << 0;
    }
    else
    {
        int super = 0;
        int girl = 0;
        int flandre, scarlet;
        if (s < t)
        {
            flandre = s;
            scarlet = t;
        }
        else
        {
            flandre = t;
            scarlet = s;
        }
        {
            for (int i = flandre; i < scarlet; i++)
            {
                super += a[i];
            }

            for (int i = flandre; i <= n; i++)
            {
                girl += a[i];
            }
            for (int i = n; i >= scarlet; i++)
            {
                girl += a[i];
            }
            cout << min(super, girl);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}