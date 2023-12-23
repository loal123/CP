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
#define vpii vector<pair<int, int>>
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int super, cute, girl;
    cin >> super >> cute >> girl;
    int idk[10005] = {0};
    int idrk[10005] = {0};
    int a = 0, b = 0;
    set<ld> bruh;

    for (int i = 0; i < super; i++)
    {
        int flandre, scarlet;
        cin >> flandre >> scarlet;
        if (abs(cute - flandre) == 0)
        {
            b++;
        }
        else
        {
            ld wow = (ld)(girl - scarlet) / (cute - flandre);
            bruh.insert(wow);
        }
    }
    int counts = 0;

    if (b > 0)
        counts++;

    cout << counts + bruh.size();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}