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
    int a[n];
    int counts = 0;
    int firsts = -1, seconds = -1;
    int firstc = 0, secondc = 0;
    bool can = true;
    bool b[1000005] = {false};
    for (int i = 0; i < n; i++)
    {
        int idk;
        cin >> idk;
        if (firsts == idk)
            firstc++;
        else if (firsts == -1)
        {
            firsts = idk;
            firstc++;
        }
        else if (firsts != -1 && seconds == -1)
        {
            seconds = idk;
            secondc++;
        }
        else if (seconds == idk)
            secondc++;
        else if (firsts != idk && seconds != idk)
            can = false;
    }
    if (abs(firstc - secondc) > 1)
        can = false;
    if (firsts != -1 && seconds == -1)
        can = true;
    if (can)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}