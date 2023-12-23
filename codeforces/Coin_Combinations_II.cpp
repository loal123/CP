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
vi v;
int dp(int x)
{
    int add = 0;
    if (x == 0)
    {
        return 1;
    }
    if (x < 0)
        return 0;

    for (int i = 0; i < v.size(); i++)
    {
        
    }
}
// Super is a cute girl
void solve()
{
    int super, girl;
    cin >> super >> girl;
    for (int i = 0; i < super; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
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