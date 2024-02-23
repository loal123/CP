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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    string n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < SZ(n); i++)
    {
        if (n[i] != '0')
        {
            string yeah = "";
            yeah += n[i];
            for (int j = 0; j < SZ(n) - 1 - i; j++)
            {
                yeah += '0';
            }
            v.pb(yeah);
        }
    }
    cout << SZ(v) << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
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