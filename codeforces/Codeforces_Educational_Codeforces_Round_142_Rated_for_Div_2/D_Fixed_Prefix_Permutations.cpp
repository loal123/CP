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
    int n, m;
    cin >> n >> m;
    map<vi, bool> M;
    vector<vi> lis(n);
    vector<vi> real(n);
    for (int i = 0; i < n; i++)
    {
        vi yeah(m);
        vi actual(m);
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            actual[j] = x;
            yeah[x - 1] = j + 1;
        }
        real[i] = actual;
        lis[i] = yeah;
    }
    for (auto i : lis)
    {
        vi xd;
        for (auto j : i)
        {
            xd.pb(j);
            M[xd] = true;
        }
    }
    for (auto i : real)
    {
        vi xd;
        int maxi = 0;
        for (auto j : i)
        {
            xd.pb(j);
            if (M[xd])
                maxi = SZ(xd);
            else
                break;
        }

        cout << maxi << " ";
    }

    cout << endl;
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