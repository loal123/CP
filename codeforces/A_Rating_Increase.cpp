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
    string s;
    cin >> s;
    int i = 1;
    bool can = false;
    int real;
    int reall;
    while (i < s.size())
    {
        if (s[i] != '0' && s[0] != '0')
        {
            string a = s.substr(0, i);
            string b = s.substr(i, s.size() - i);
            if (stoi(a) < stoi(b))
            {
                can = true;
                real = stoi(a);
                reall = stoi(b);
            }
        }
        i++;
    }

    if (can)
        cout << real << " " << reall;
    else
        cout << -1;

    cout << '\n';
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