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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool xd = 0;
    if (a > b)
    {
        swap(a, b);
        xd = 1;
    }

    int x;
    string s = "";
    while (c--)
        s += '1';

    int initial = stoi(s);

    while (SZ(s) < a)
        s += '0';

    int anum = stoi(s);

    while (SZ(s) < b)
        s += '0';

    int bnum = stoi(s) + initial;

    if (xd)
        swap(anum, bnum);

    cout << anum << " " << bnum << endl;
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