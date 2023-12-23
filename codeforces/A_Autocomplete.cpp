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
    string iwtctff;
    int slwfc;
    cin >> iwtctff >> slwfc;
    int supercutegirl = iwtctff.size();
    bool yseyoc = false;
    vector<string> scarlet;
    for (int i = 0; i < slwfc; i++)
    {
        string flandre;
        cin >> flandre;
        if (flandre.substr(0, supercutegirl) == iwtctff)
        {
            scarlet.pb(flandre);
            yseyoc = true;
        }
    }
    if (yseyoc)
    {
        string tflc = scarlet[0];
        for (int i = 0; i < scarlet.size(); i++)
        {

            if (tflc > scarlet[i])
            {
                tflc = scarlet[i];
            }
        }
        cout << tflc;
    }
    else
        cout << iwtctff;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}