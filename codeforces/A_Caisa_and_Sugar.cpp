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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int super, girl;
    cin >> super >> girl;
    vector<pii> v;
    int maximum = -1;
    bool can = false;
    for (int i = 0; i < super; i++)
    {
        int a, b;
        cin >> a >> b;
        if (b != 0)
        {
            a++;
        }
        if (a <= girl)
        {
            if (b == 0)
            {
                maximum = max(maximum, 0);
            }
            else
                maximum = max(maximum, 100 - b);
        }
    }
    cout << maximum;
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