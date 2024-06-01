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
    string a, b;
    cin >> a >> b;
    int asz = SZ(a);
    int bsz = SZ(b);
    if (a[asz - 1] == b[bsz - 1])
    {
        cout << "YES\n";
        cout << '*' << a[asz - 1] << "\n";
    }
    else if (a[0] == b[0])
    {
        cout << "YES\n";
        cout << a[0] << "*\n";
    }
    else
    {
        map<string, bool> x;
        map<string, bool> y;

        for (int i = 0; i < asz - 1; i++)
        {
            x[a.substr(i, 2)] = 1;
        }
        for (int i = 0; i < bsz - 1; i++)
        {
            y[b.substr(i, 2)] = 1;
        }

        for (auto i : x)
        {
            if (y[i.fi])
            {
                cout << "YES\n";
                cout << '*' << i.fi << '*' << '\n';
                return;
            }
        }

        cout << "NO\n";
    }
    // vector<bool> A(26, 0);
    // vector<bool> B(26, 0);
    // for (auto i : a)
    // {
    //     A[i - 'a'] = 1;
    // }
    // for (auto i : b)
    // {
    //     B[i - 'a'] = 1;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (A[i] && B[i])
    //     {
    //         cout << "YES\n";
    //         cout << '*' << char(i + 'a') << '*' << '\n';
    //         return;
    //     }
    // }

    // cout << "NO\n";
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