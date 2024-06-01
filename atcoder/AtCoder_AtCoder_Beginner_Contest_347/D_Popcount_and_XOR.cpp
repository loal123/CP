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
ll Convert(string x)
{
    ll sz = SZ(x);
    ll curr = 0;
    for (ll i = 0; i < sz; i++)
    {
        if (x[i] == '1')
            curr += (1LL << i);
    }
    return curr;
}
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = __builtin_popcountll(c);
    if ((abs(a - b) - x) % 2 == 1 || a + b < x)
    {
        cout << -1;
        return;
    }

    else
    {
        string s1 = "";
        string s2 = "";

        ll curra = a;
        ll currb = b;
        int waste = (min(a, b) - (x - abs(a - b)) / 2);
        for (ll i = 0; (1LL << i) <= c; i++)
        {
            if ((1 << i) & c)
            {
                if (curra > currb)
                {
                    curra--;
                    s1 += '1';
                    s2 += '0';
                }
                else
                {
                    currb--;
                    s1 += '0';
                    s2 += '1';
                }
            }
            else
            {
                if (waste > 0)
                {
                    curra--;
                    currb--;
                    s1 += '1';
                    s2 += '1';
                    waste--;
                }
                else
                {

                    s1 += '0';
                    s2 += '0';
                }
            }
        }
        for (ll i = 0; i < curra; i++)
        {
            s1 += '1';
            s2 += '1';
        }

        ll X = Convert(s1);
        ll Y = Convert(s2);
        cout << X << " " << Y << endl;
        cout << (X ^ Y);
    }
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