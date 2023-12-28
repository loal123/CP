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
#define isvowel(x) (x == 'a' || x == 'e')

const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is a cute girl
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    bool cons = true;
    string real = "";
    char prev = 'a';

    int i = 0;
    int j = 1;
    bool word = false;
    string idk = "";
    if (n == 1)
        cout << s;
    else
    {
        while (i < n)
        {
            if (!word)
            {
                idk += s.substr(i, 2);
                word = true;

                i += 2;
            }
            else
            {
                if (i + 1 < n)
                {
                    char bruh = s[i];
                    char wow = s[i + 1];
                    if (isvowel(bruh) == isvowel(wow))
                    {

                        idk += s[i];
                        idk += '.';

                        i++;
                        word = false;
                    }
                    else
                    {
                        word = false;
                        idk += '.';
                    }
                }
                else
                {
                    idk += s[i];
                    break;
                }
            }
        }
    }
    cout << idk;
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