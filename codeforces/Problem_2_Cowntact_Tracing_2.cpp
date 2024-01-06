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
// Super is a cute girl
void solve()
{
    mt19937 mt(time(nullptr));
    int n;
    string s;
    cin >> n >> s;
    vi v;
    vector<pii> v2;
    int counts = 0;
    int total = 0;
    int segments = 0;
    bool have = false;
    bool can = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            total++;
            counts++;
        }
        else
        {
            if (counts > 0)
            {
                v.pb(counts);
                counts = 0;
            }
        }
    }
    // 011101
    //  3 1
    /*
1
    */
    if (counts > 0)
    {

        v.pb(counts);
    }
    int infected = n;
    for (int i = 1; i <= n; i += 2)
    {
        int temp = 0;
        bool br = false;
        // 3,2,3,2
        for (int j = 0; j < v.size(); j++)
        {
            if ((j == 0 && s[0] == '1') || (j == SZ(v) - 1 && s[n - 1] == '1'))
            {
                if (i > v[j] * 2 - 1)
                    br = true;
            }
            else
            {
                if (i > v[j])
                    br = true;
            }
            if (br)
                break;
            temp += (v[j] + i - 1) / i;
        }

        if (br)
            break;

        infected = min(infected, temp);
    }
    cout << infected;
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