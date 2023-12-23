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
    int supercutegirl;
    cin >> supercutegirl;
    string a[supercutegirl];
    bool actually = false;
    string aa;
    int pos;
    for (int i = 0; i < supercutegirl; i++)
    {
        string s;
        cin >> s;
        a[i] = s;
        int size = s.size();
        bool have = false;

        int counts = 0;
        for (int j = 0; j < size; j++)
        {
            if (s[j] == '1')
                counts++;
            else if (s[j] != '0')
            {
                have = true;
            }
            if (counts >= 2 || have)
            {
                actually = true;
                aa = s;
                pos = i;
                break;
            }
        }
    }
    int counts = 0;
    if (actually)
    {
        for (int i = 0; i < supercutegirl; i++)
        {
            if (i != pos)
            {
                if (a[i] == "0")
                {
                    aa = "0";
                    counts = 0;
                    break;
                }
                else
                    counts += a[i].size() - 1;
            }
        }
    }
    else
    {
        aa = a[0];
        for (int i = 1; i < supercutegirl; i++)
        {
            if (a[i] == "0")
            {
                aa = "0";
                counts = 0;
                break;
            }
            counts += a[i].size() - 1;
        }
    }
    cout << aa;
    while (counts--)
        cout << 0;
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