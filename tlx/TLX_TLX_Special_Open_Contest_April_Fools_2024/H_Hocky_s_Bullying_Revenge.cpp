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
int reals = 0;
int xd[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
map<int, int> m;
set<ll> S;
void s(string curr)
{
    if (SZ(curr) == 9)
    {
        ll yeah = stoll(curr);
        for (ll i = 1; (ll)i * i <= yeah; i++)
        {
            if (yeah % i == 0)
            {
                S.insert(i);
                reals++;
                cout << i << " " << SZ(S) << endl;
            }
            if (yeah / i != i)
            {
                S.insert(yeah / i);
                reals++;
                cout << yeah / i << " " << SZ(S) << endl;
            }
        }
        return;
    }
    for (auto i : xd)
    {
        s(curr + char(i + '0'));
    }
}
void solve()
{
    s("");
    for (auto i : S)
        cout << i << " ";
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