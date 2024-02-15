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
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    vector<string> va, vb, vc;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string z;
        cin >> z;
        va.pb(z);
        m[z]++;
    }
    for (int i = 0; i < n; i++)
    {
        string z;
        cin >> z;
        vb.pb(z);
        m[z]++;
    }
    for (int i = 0; i < n; i++)
    {
        string z;
        cin >> z;
        vc.pb(z);
        m[z]++;
    }
    for (int i = 0; i < n; i++)
    {

        if (m[va[i]] == 1)
        {
            a += 3;
        }
        else if (m[va[i]] == 2)
            a++;
        if (m[vb[i]] == 1)
        {
            b += 3;
        }
        else if (m[vb[i]] == 2)
            b++;
        if (m[vc[i]] == 1)
        {
            c += 3;
        }
        else if (m[vc[i]] == 2)
            c++;
    }

    cout << a << " " << b << " " << c << '\n';
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