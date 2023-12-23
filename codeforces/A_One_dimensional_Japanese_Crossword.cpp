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
    vi supergirl;
    int n;
    string s;
    cin >> n >> s;
    int counts = 0;
    int flandre = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            counts++;
        }
        else
        {
            if (counts >= 1)
            {
                supergirl.pb(counts);
                counts = 0;
                flandre++;
            }
        }
    }
    if (counts > 0)
    {
        supergirl.pb(counts);
        flandre++;
    }
    cout << flandre << endl;
    for (int i = 0; i < flandre; i++)
    {
        cout << supergirl[i] << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}