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
    bool home = true;
    int total = 0;
    bool slwfc[n + 1];
    slwfc[n] = false;
    for (int i = 0; i < n; i++)
    {
        cin >> slwfc[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (home)
        {
            if (slwfc[i])
            {
                home = false;
                total++;
            }
        }
        else
        {
            if (slwfc[i])
                total++;
            else
            {
                if (!slwfc[i + 1])
                {
                    home = true;
                }
                else
                {
                    total++;
                }
            }
        }
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}