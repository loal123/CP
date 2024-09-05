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
bool compare(int a, int b)
{
    if (a == 1)
    {
        return 1;
    }
    if (b == 1)
        return 0;

    cout << "Q " << 1 << " " << a << " " << b << endl;
    string s;
    cin >> s;
    if (s == "BERLAWANAN")
        return false;
    else
        return 1;
}
void solve()
{
    string s;
    int n, k;
    cin >> s;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }
    sort(all(v), compare);
    cout << "A ";
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
    // int t; cin >> t; while(t--)
    solve();
}