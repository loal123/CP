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
    double super, is, cute, girl;
    cin >> super >> is >> cute >> girl;
    vector<pair<double, int>> v;
    for (int i = 0; i < super; i++)
    {
        double flandre, scarlet;
        cin >> flandre >> scarlet;
        double iwtctff = ((100 - girl) / 100 * flandre * is + (scarlet * cute));
        double tflc = (100 - girl) / 100 * scarlet * is + flandre * cute;
        double c = flandre * is + ((100 - girl) / 100 * (scarlet * cute));
        v.pb(mp(max(iwtctff, tflc), i + 1));
    }
    sort(v.rbegin(), v.rend());
    for (int j = 0; j < super; j++)
    {

        for (int i = 0; i < super - 1; i++)
        {
            if (v[i].fi == v[i + 1].fi && v[i].se > v[i + 1].se)
            {
                swap(v[i].se, v[i + 1].se);
            }
        }
    }
    for (int i = 0; i < super; i++)
    {

        cout << fixed << setprecision(2) << v[i].se << " " << v[i].fi << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}