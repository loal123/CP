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
    int n = SZ(s);
    if (n == 1)
        cout << s;
    else if (n == 2)
    {
        if (s[0] == s[1])
        {
            cout << s[0];
            for (int i = 0; i < n; i++)
            {
                char c = char('a' + i);
                if (c != s[0])
                {
                    cout << c;
                    break;
                }
            }
        }
        else
            cout << s;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && i < n - 1)
            {
                if (s[i] == s[i - 1] && s[i] == s[i + 1])
                {
                    for (int j = 0; j < 26; j++)
                    {
                        char yeah = char('a' + j);
                        if (yeah != s[i - 1] && yeah != s[i + 1])
                        {
                            s[i] = yeah;
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && i < n - 1)
            {
                if (s[i] == s[i - 1] || s[i] == s[i + 1])
                {
                    for (int j = 0; j < 26; j++)
                    {
                        char yeah = char('a' + j);
                        if (yeah != s[i - 1] && yeah != s[i + 1])
                        {
                            s[i] = yeah;
                            break;
                        }
                    }
                }
            }
        }

        cout << s;
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