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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int counts1 = 0;
    int counts2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            counts1++;
        else
            counts2++;
    }
    if (counts1 == k)
        cout << 0 << endl;

    else
    {
        cout << 1 << endl;
        int diff =
            counts1 - k;

        int counts = 0;
        if (diff < 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'A')
                    counts++;
                if (counts == abs(diff))
                {
                    cout << i + 1 << " B" << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'B')
                    counts++;
                if (counts == abs(diff))
                {
                    cout << i + 1 << " A" << endl;
                    break;
                }
            }
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