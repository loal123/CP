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
    string flandre, scarlet;
    cin >> flandre >> scarlet;
    int supercutegirl = stoi(flandre) + stoi(scarlet);
    string rich = to_string(supercutegirl);
    /*
    flandre = 101 scarlet = 102 supercutegirl = 203


    */
    flandre.erase(remove(flandre.begin(), flandre.end(), '0'), flandre.end());
    scarlet.erase(remove(scarlet.begin(), scarlet.end(), '0'), scarlet.end());
    string tflc = rich;
    rich.erase(remove(rich.begin(), rich.end(), '0'), rich.end());
    if (stoi(flandre) + stoi(scarlet) == stoi(rich))
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}