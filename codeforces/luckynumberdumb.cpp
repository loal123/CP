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
    int koishi[6] = {4, 4, 4, 7, 7, 7};

    bool real = false;
    int supercutegirl;
    cin >> supercutegirl;
    do
    {
        string ez = "";
        for (int i = 0; i < 3; i++)
        {
            ez += to_string(koishi[i]);
            if (supercutegirl % stoi(ez) == 0)
            {
                real = true;
                break;
            }
        }

    } while (next_permutation(koishi, koishi + 6));

    cout << (real ? "YES" : "NO");
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