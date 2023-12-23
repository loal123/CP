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
    int super, cute, girl;
    cin >> super >> cute >> girl;
    if (cute - super < (girl - 1) * (girl) / 2)
    {
        cout << -1;
    }
    else

    {
        int idk = (cute - super) / (girl + 2);
        cout << super << " ";
        int counts = super;
        for (int i = girl - 1; i >= 2; i--)
        {
            counts += i * idk;
            cout << counts << " ";
        }
        cout << cute;
    }
    cout << '\n';
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