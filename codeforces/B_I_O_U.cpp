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
    int super, girl;
    cin >> super >> girl;
    int iwtctff[super + 1] = {0};
    bool have[super + 1] = {false};

    for (int i = 0; i < girl; i++)
    {
        int fla, ndre, scarlet;
        cin >> fla >> ndre >> scarlet;
        iwtctff[fla] -= scarlet;
        iwtctff[ndre] += scarlet;
    }
    int total = 0;

    for (int i = 1; i <= super; i++)
    {
        if (iwtctff[i] > 0)
        {
            total += iwtctff[i];
        }
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}