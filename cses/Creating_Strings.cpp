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
    string s;
    cin >> s;
    int fac[9];
    fac[1] = 1;
    for (int i = 2; i <= 9; i++)
    {
        fac[i] = fac[i - 1] * i;
    }
    int a[26];
    int real = fac[SZ(s)];
    memset(a, 0, sizeof(a));
    for (auto i : s)
    {
        a[i - 'a']++;
    }
    for (auto i : a)
    {
        if (i > 0)
        {
            real /= fac[i];
        }
    }
    cout << real << '\n';
    sort(all(s));

    do
    {
        cout << s << '\n';
    } while (next_permutation(all(s)));
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