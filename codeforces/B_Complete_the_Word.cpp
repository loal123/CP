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
    string supercutegirl;
    cin >> supercutegirl;
    bool can = false;
    int a[26] = {0};
    int q = 0;
    int l, r;
    if (supercutegirl.size() < 26)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (supercutegirl[i] == '?')
                q++;
            else
                a[supercutegirl[i] - 'A']++;
        }
        int j = 25;
        bool done = false;

        for (int i = 0; i < supercutegirl.size() - 25; i++)
        {
            if (done)
            {
                if (supercutegirl[i - 1] == '?')
                {
                    q--;
                }
                else
                    a[supercutegirl[i - 1] - 'A']--;

                if (supercutegirl[j + i] == '?')
                {
                    q++;
                }
                else
                    a[supercutegirl[j + i] - 'A']++;
            }
            done = true;
            int counts = 0;
            for (int k = 0; k < 26; k++)
            {
                if (a[k] > 0)
                    counts++;
            }
            if (counts + q == 26)
            {
                can = true;
                l = i;
                r = i + 26;
                break;
            }
        }
        if (can)
        {
            vector<char> wow;
            for (int m = 0; m < 26; m++)
            {
                if (a[m] == 0)
                    wow.pb(char(m + 'A'));
            }
            int rn = 0;
            for (int i = l; i < r; i++)
            {
                if (supercutegirl[i] == '?')
                {
                    string help = "";
                    help += wow[rn];
                    supercutegirl.replace(i, 1, help);
                    rn++;
                }
            }
            for (int i = 0; i < supercutegirl.size(); i++)
            {
                if (supercutegirl[i] == '?')
                    cout << "A";
                else
                    cout << supercutegirl[i];
            }
        }
        else
            cout << -1;
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