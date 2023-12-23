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
int super, girl;
const int INF = 1e9;
// Super is a cute girl

void solve()
{
    cin >> super >> girl;
    int a[super];
    int total = INF;

    for (int i = 0; i < super; i++)
    {

        cin >> a[i];
        if (a[i] % girl == 0)
            total = 0;
        total = min(total, girl - a[i] % girl);
    }
    if (girl != 4)
        cout << total << '\n';
    else
    {
        int counts = 0;
        for (int i = 0; i < super; i++)
        {
            if (a[i] % 2 == 0)
                counts++;
        }
        if (counts == 0)
            cout << min(total, 2);
        else if (counts == 1)
            cout << min(total, 1);
        else
            cout << 0;

        cout << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}