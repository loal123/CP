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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    string s1 = "";
    int n = s.size();
    int current = 0;
    vi v;
    vi uppers;
    vi lowers;
    int rn = 0;
    for (int i = 0; i < n; i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
        {
            s1 += s[i];
            upper++;
            uppers.pb(rn);
            rn++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
        {

            s1 += s[i];
            lower++;
            lowers.pb(rn);
            rn++;
        }

        if (s[i] == 'b')
        {
            if (lowers.size() > 0)
            {
                v.pb(lowers[lowers.size() - 1]);
                lowers.pop_back();
            }
        }
        if (s[i] == 'B')
        {
            if (uppers.size() > 0)
            {
                v.pb(uppers[uppers.size() - 1]);
                uppers.pop_back();
            }
        }
    }
    sort all(v);
    int wow = 0;
    int act = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'b' && s[i] != 'B')
        {
            if (wow < v.size())
            {
                if (v[wow] == act)
                    wow++;
                else
                    cout << s[i];
            }
            else
                cout << s[i];
            act++;
        }
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