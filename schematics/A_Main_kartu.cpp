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
    int n, m;
    char r;
    cin >> n >> m >> r;
    map<char, int> card;
    card['6'] = 6;
    card['7'] = 7;
    card['8'] = 8;
    card['9'] = 9;
    card['T'] = 10;
    card['J'] = 11;
    card['Q'] = 12;
    card['K'] = 13;
    card['A'] = 14;

    vector<pair<int, bool>> trump;
    vector<pair<int, bool>> S;
    vector<pair<int, bool>> C;
    vector<pair<int, bool>> D;
    vector<pair<int, bool>> H;
    for (int i = 0; i < n; i++)
    {
        char a, b;
        cin >> a >> b;
        if (b == 'S')
        {
            S.pb(mp(card[a], false));
        }
        if (b == 'C')
        {
            C.pb(mp(card[a], false));
        }
        if (b == 'D')
        {
            D.pb(mp(card[a], false));
        }
        if (b == 'H')
        {
            H.pb(mp(card[a], false));
        }
    }
    for (int i = 0; i < m; i++)
    {
        char a, b;
        cin >> a >> b;
        if (b == 'S')
        {
            for (auto i : S)
            {
                        }
        }
        if (b == 'C')
        {
        }
        if (b == 'D')
        {
        }
        if (b == 'H')
        {
        }
    }
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