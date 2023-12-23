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
    int supercutegirl;
    cin >> supercutegirl;
    int total = 0;
    for (int i = 0; i < supercutegirl; i++)
    {
        int flandre, scarlet;
        cin >> flandre >> scarlet;
        if (flandre > scarlet)
            total++;
        else if (flandre < scarlet)
            total--;
    }
    if (total > 0)
        cout << "Mishka";
    else if (total < 0)
        cout << " Chris";
    else
        cout << "Friendship is magic!^^";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}