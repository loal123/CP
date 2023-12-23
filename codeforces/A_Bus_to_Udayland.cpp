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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    string s[n];
    bool supergirl = false;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == 'O' && s[i][1] == 'O')
        {
            s[i].erase(0, 2);
            s[i].insert(0, "++");
            supergirl = true;
            break;
        }
        else if (s[i][3] == 'O' && s[i][4] == 'O')
        {
            s[i].erase(3, 2);
            s[i].insert(3, "++");
            supergirl = true;
            break;
        }
    }
    if (supergirl)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}