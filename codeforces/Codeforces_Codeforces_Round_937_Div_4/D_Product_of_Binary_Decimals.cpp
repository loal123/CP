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
map<int, ll> m;
vi v;
void precomp(string xd)
{
    if (SZ(xd) > 6)
        return;
    v.pb(stoi(xd));
    precomp(xd + '0');
    precomp(xd + '1');
}
void search(ll curr)
{
    if (curr > 100000)
        return;
    m[curr]++;
    for (auto i : v)
    {
        search((ll)curr * i);
    }
}
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    if (m[n])
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    precomp("10");
    precomp("11");
    search(1);
    int t;
    cin >> t;
    while (t--)
        solve();
}