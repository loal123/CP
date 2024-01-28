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
set<string> S;
set<string> have;
void dp(string s, int i, int size, string rn, int n)
{

    if (SZ(rn) > n)
        return;

    if (SZ(rn) == n)
        S.insert(rn);
    if (i == size)
        return;
    dp(s, i + 1, size, rn + s[i], n);
    dp(s, i + 1, size, rn, n);
}
void solve()
{
    int n, k, size;
    string s;
    cin >> n >> k >> size;
    cin >> s;
    dp(s, 0, SZ(s), "", n);
    if (S.size() == pow(k, n))
        cout << "YES";
    else
    {
        cout << "NO";
        sort(all(s));
        for (auto i : s)
        {
        }
    }

    cout << endl;

    S.clear();
    have.clear();
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