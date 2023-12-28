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
    string s1;
    string s2;
    cin >> s1 >> s2;
    int yay = 0;
    int whoops = 0;
    int a[26] = {0};
    int b[26] = {0};
    int c[26] = {0};
    int d[26] = {0};
    for (auto i : s1)
    {
        if (i >= 'a' && i <= 'z')
        {
            a[i - 'a']++;
        }
        else
            b[i - 'A']++;
    }
    for (auto i : s2)
    {
        if (i >= 'a' && i <= 'z')
        {
            c[i - 'a']++;
        }
        else
            d[i - 'A']++;
    }
    for (int i = 0; i <= 25; i++)
    {
        int idk = min(a[i], c[i]);
        int idkk = min(b[i], d[i]);
        yay += idk;
        yay += idkk;
        a[i] -= idk;
        b[i] -= idkk;
        c[i] -= idk;
        d[i] -= idkk;
    }
    for (int i = 0; i <= 25; i++)
    {
        int idk = min(a[i], d[i]);
        int idkk = min(b[i], c[i]);
        whoops += idk;
        whoops += idkk;
    }
    cout << yay << " " << whoops;
    {
        /* code */
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