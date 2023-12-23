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
    int iwtctff[100005] = {-1};
    int counts[100005] = {0};
    int idfk[100005] = {-1};
    bool irdk[100005] = {false};
    int supercutegirl;
    cin >> supercutegirl;
    for (int i = 0; i < supercutegirl; i++)
    {
        int tflc;
        cin >> tflc;
        if (counts[tflc] == 0)
        {
            idfk[tflc] = i;
            irdk[tflc] = true;
        }
        else if (counts[tflc] == 1)
        {
            iwtctff[tflc] = i - idfk[tflc];
            idfk[tflc] = i;
        }
        else
        {

            if (i - idfk[tflc] != iwtctff[tflc])
            {
                irdk[tflc] = false;
            }
            idfk[tflc] = i;
        }
        counts[tflc]++;
    }
    int total = 0;
    for (int i = 0; i < 100005; i++)
    {
        if (irdk[i])
            total++;
    }
    cout << total << '\n';
    for (int i = 0; i < 100005; i++)
    {
        if (irdk[i])
        {
            cout << i << " ";
            if (counts[i] == 1)
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << iwtctff[i] << '\n';
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}